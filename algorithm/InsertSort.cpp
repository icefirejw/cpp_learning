#include <algorithm>
#include <iostream>
#include <time.h>

using namespace std;

#define ARRAY_LEN 15
int g_array[ARRAY_LEN];

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
void insert_sort(int arr[], int n)
{
    // 插入排序：在一个有序的数列中，将新的数，找到一个合适的位置插入
    // 方法：依次从第2个数据开始，以这个数为基准，回溯前面的数列，逐个相邻数据比较
    // 如果后一个数比比的数要小，则这两个数交换
    // 第一次：前面两个数（0 ~ 1）为有序数列
    // 第二次：前面三个数（0 ~ 2）为有序数列
    // 依次类推

    int i, j;
    // 依次确定最小值
    for (i = 1; i <= n - 1; i++) //从第二个数开始
    {
        // 从当前位置开始，和前面的有序数列中的数据逐个进行比较，并将这个数往前面的位置走
        for (j = i; j > 0; j--)
        {
            // 找到了一个比当前基准数小的数，表示已经找到了合适的位置，并已将数据插入
            if (arr[j - 1] <= arr[j])
            {
                break;
            }
            // 如果这个位置的数比基准数要大，则需要继续往前回溯
            // 将这个基准数和前一个数进行交换
            swap_arr(arr, j - 1, j);
        }
    }
}

// 自动生成数组内数据，并返回数组长度
// int arr[] : 数组名
// int arr_max_len: 数组最大长度
// 返回值： 生成的数组长度
int array_random(int arr[], int arr_max_len)
{
    int len = 0;

    srand(time(0));

    // 随机生成数组大小，比数组空间小一点，且最小长度为2
    len = 2 + (rand() % (arr_max_len - 3));

    //随机生成数组中的数据
    int min_num = 1;    // 数组中数据的最小值
    int max_num = 1000; // 数组中数据的最大值
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
    insert_sort(g_array, num);

    for (int i = 0; i < num; i++)
    {
        cout << g_array[i] << " ";
    }
    cout << endl;
    return 0;
}