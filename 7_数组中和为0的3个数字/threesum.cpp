#include<iostream>
using namespace std;

//ȫ�ֱ�������
#define length 6
int threesum[length] = {0, -1, 1, 2, -1, -4};
int p,q;

//��װ�����������sort
void sort(int arr[], int size)
{
    for(int i = 0; i < size; i ++)             //ð�������㷨
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

//��ӡ����Ԫ�صĺ���
void print(int arr[], int size)
{
    for(int i = 0; i < size; i ++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


//ʵ���ҳ������к�Ϊ0���������ֵĹ��ܺ���
void function(int arr[], int size)
{
    sort(arr, size);
    //{-4, -1, -1, 0, 1, 2}
    cout << "QK1��˧" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "QK2��˧" << endl;
        int aim = 0 - arr[i];
        int p = i + 1;          //˫ָ�롪����һ��ָ��
        int q = size - 1;       //˫ָ�롪���ڶ���ָ��
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
            cout << "��һ��Ԫ�ص�λ�ã�" << i << " �ڶ���Ԫ�ص�λ�ã�" << p << " ������Ԫ�ص�λ�ã�" << q << endl;
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