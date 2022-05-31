#include <algorithm>
#include <iostream>
#include <time.h>

using namespace std;

#define ARRAY_LEN 15
int g_array[ARRAY_LEN];
/*
void swap_arr(int arr[], int i, int j)
{
    // 如果是同一个位置，或者值相等，则不需要交换
    if (i == j || arr[i] == arr[j])
        return;

    // !!!
    // 同一位置不能使用异或交换，否则将会将这个位置的数据清零
    arr[i] = arr[i] ^ arr[j];
    arr[j] = arr[i] ^ arr[j];
    arr[i] = arr[i] ^ arr[j];
}
*/
// 合并左右两个有序数列
void ms_merge(int arr[], int l, int mid, int r)
{
    int *tmp_arr = new int[r - l + 2];

    int i = 0;
    int p1 = l;       // 左边数列的第一个
    int p2 = mid + 1; // 右边数列的第一个
    // 归并两个有序数列
    // 依次从两个数列中取数，比较这两个数字，并将小的数据放到临时数组
    // 如果已将原来两个数列中的数放到了临时数组，那么滑动这个数组下标到下一个
    while (p1 <= mid && p2 <= r)
    {
        // 如果左边数列的数字小，则将这个数放到临时数组，并将下标滑动到下一个
        // 否则将右边数列当期数放到临时数组，并将右边下标滑动到下一个
        if (arr[p1] <= arr[p2])
        {
            tmp_arr[i] = arr[p1];
            p1++;
        }
        else
        {
            tmp_arr[i] = arr[p2];
            p2++;
        }
        i++; // 已存放了一个数据
    }
    //如果左边数列没有放完，将左边剩下的数存入临时数列
    while (p1 <= mid)
    {
        tmp_arr[i++] = arr[p1++];
    }
    // 如果右边数列没有放完，将右边剩下的数存入临时数列
    while (p2 <= r)
    {
        tmp_arr[i++] = arr[p2++];
    }
    // 将临时数组中归并排序好的数据存回到原始数组
    for (int j = 0; j < i; j++)
    {
        // arr 需要从l开始存数
        arr[l + j] = tmp_arr[j];
    }
    delete[] tmp_arr;
}

// 递归开展归并排序
// 1.将左半部分数组中的数据排序
// 2.将右半部分数组中的数据排序
// 3.将两部分数据归并并排序
void ms_process(int arr[], int L, int R)
{
    if (L == R)
    {
        return;
    }

    // 如果L和R都比较大的数，那么(L+R)/2计算时，L+R可能会溢出
    // 因此 mid = L + (R-L)/2
    int mid = L + ((R - L) >> 1);

    // 左边保持有序
    ms_process(arr, L, mid);
    // 右边保持有序
    ms_process(arr, mid + 1, R);
    // 归并两个部分
    ms_merge(arr, L, mid, R);
}
void merge_sort(int arr[], int n)
{
    ms_process(arr, 0, n - 1);
}
// 自动生成数组内数据，并返回数组长度
// int arr[] : 数组名
// int arr_len: 数组最大长度
// 返回值： 生成的数组长度
int array_random(int arr[], int arr_len)
{
    int len = 0;

    srand(time(0));

    // 随机生成数组大小，比数组空间小一点，且最小长度为2
    len = 2 + rand() % (arr_len - 3);

    //随机生成数组中的数据
    int min_num = 1;    // 数组中数据的最小值
    int max_num = 5000; // 数组中数据的最大值
    for (int i = 0; i < len; i++)
    {
        // 生成 [min_num, max_num]的数据
        arr[i] = min_num + ((max_num * rand()) % (max_num + 1));
    }

    return len;
}
int main()
{
    int num;
    num = array_random(g_array, ARRAY_LEN);

    for (int i = 0; i < num; i++)
    {
        cout << g_array[i] << " ";
    }
    cout << endl
         << "----- sorted -----" << endl;
    merge_sort(g_array, num);

    for (int i = 0; i < num; i++)
    {
        cout << g_array[i] << " ";
    }
    cout << endl;
    return 0;
}