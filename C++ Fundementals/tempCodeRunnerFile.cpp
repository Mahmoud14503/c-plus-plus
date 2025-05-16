#include<iostream>
using namespace std;

int main()
{
    double arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int num = 0;
    for (int j = 0; j < 4; j++)
    {
        for (int i = j + 1; i < 4; i++)
        {  
            if (arr[j] == arr[i])
            {
             num++;
             arr[i] = .0515664;
            }
        }
    }
    
    cout << num;
    
}