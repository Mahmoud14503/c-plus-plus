#include<iostream>
using namespace std;

void display(string str, int x){
    cout << str << x;
}

void arrayInput(int x[], int y){
    for (int i = 0; i < 7; i++)
    {
        cin >> x[i];
    }
}
    bool cond = false;
int lastIndex(int x[], int y){
    int index = 0;
    for (int i = 0; i < 7; i++)
    {
        if (x[i]==6)
        {
            index = i;
            cond = true;
        }
    }
    return index;
}

int main()
{
    cout << "\nMahomoud Mohammed Mahmoud Tantawy  (Sec 20)\nfind the index of the first occurrence.\n\nEnter 7 numbers: " << "\n";
    int arr[7];
    arrayInput(arr,7);
    lastIndex(arr,7);
    if (cond)
    {
        display("The last index from the left is: " , lastIndex(arr,7));
    }
    else
        cout << "The key does not exist";
    
    return 0;
}