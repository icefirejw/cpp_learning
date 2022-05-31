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
void select_sort(int arr[], int n)
{
    // 选择排序：先选取第一位，依次与后面的数进行比较，从后续的数中选择一个最小的值，然后进行交换
    // 第一次：第一位的数，为数组(0 ~ n-1)中的最小值
    // 第二次：依次比较1 ~ n-1，确定了第2位，为第二小的值
    // 依次类推

    int i, j;
    // 依次确定最小值
    for (i = 0; i < n - 1; i++) //最后n-1位，后面没有数据了，所以不需要比较了
    {
        int min = i;                     // 先设定当前位为最小值
        for (j = i + 1; j <= n - 1; j++) // 当前位和n-1位需要比较
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        // 当前位和最小值位进行交换
        swap_arr(arr, i, min);
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
    select_sort(g_array, num);

    for (int i = 0; i < num; i++)
    {
        cout << g_array[i] << " ";
    }
    cout << endl;
    return 0;
}