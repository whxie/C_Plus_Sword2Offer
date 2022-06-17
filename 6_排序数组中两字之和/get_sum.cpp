#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,4,6,10};
    int * p1 = arr;
    int * p2 = arr + 4;
    int aim = 10;
    for (int i = 0; i < 5; i ++)
    {
        // cout << "12" << endl;
        int sum = *p1 + *p2;
        // cout << sum << endl;
        while(sum != aim)
        {
            if(sum < aim)
            {
                p1++;
            }
            if(sum > aim)
            {
                p2--;
            }
            sum = *p1 + *p2;
        }
    }
    cout << "第一个数: " << *p1 << " 第二个数: " << *p2 << endl;
    system("pause");
    return 0;
}