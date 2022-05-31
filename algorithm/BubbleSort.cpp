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

void bubble_sort(int arr[], int n)
{
    // 冒泡排序：从前到后依次比较，如果前数比后数大，则进行交换
    // 第一次：所有交换结束，则先确定最后一位（n-1），最后一位是最大值，
    // 第二次：依次比较0 ~ n-2，确定了n-2位，为第二大的值
    // 依次类推

    //
    int i, j;
    // 依次确定最大值
    for (i = n - 1; i >= 0; i--)
    {
        // 依次从前到后进行比较，如果前数>后数，则交换
        for (j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap_arr(arr, j, j + 1);
            }
        }
    }
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
    bubble_sort(g_array, num);

    for (int i = 0; i < num; i++)
    {
        cout << g_array[i] << " ";
    }
    cout << endl;
    return 0;
}