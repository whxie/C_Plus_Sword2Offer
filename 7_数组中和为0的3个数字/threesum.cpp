#include<iostream>
using namespace std;

//全局变量声明
#define length 6
int threesum[length] = {0, -1, 1, 2, -1, -4};
int p,q;

//封装数组的排序函数sort
void sort(int arr[], int size)
{
    for(int i = 0; i < size; i ++)             //冒泡排序算法
    {
        for(int j= 0; j < size - 1; j ++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//{-4, -1, -1, 0, 1, 2}

//打印数组元素的函数
void print(int arr[], int size)
{
    for(int i = 0; i < size; i ++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


//实现找出数组中和为0的三个数字的功能函数
void function(int arr[], int size)
{
    sort(arr, size);
    //{-4, -1, -1, 0, 1, 2}
    cout << "QK1贼帅" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "QK2贼帅" << endl;
        int aim = 0 - arr[i];
        int p = i + 1;          //双指针——第一个指针
        int q = size - 1;       //双指针——第二个指针
        int sum = arr[p] + arr[q];
        while(aim != sum)
        {
            if(sum < aim)
            {
                p++;
            }
            if(sum > aim)
            {
                q--;
            }
            if(p == q)
            {
                break;
            }
            sum = arr[p] + arr[q];
        }
        if (aim == sum)
        {
            cout << "第一个元素的位置：" << i << " 第二个元素的位置：" << p << " 第三个元素的位置：" << q << endl;
        }
    }
}

int main()
{
    //initial();
    // sort(threesum, length);
    // print(threesum, length);
    function(threesum, length);
    system("pause");
    return 0;
}