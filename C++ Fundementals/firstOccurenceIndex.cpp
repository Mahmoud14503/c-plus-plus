#include<iostream>
using namespace std;

void displayOutput(string str, int x){
    cout << str << x;
}

void arrayInput(int arr[], int x){
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
}

int firstIndex(int arr[], int x){
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]==6)
        {
            return i;
            //break;
        }
    }
    
}

int main()
{
    cout << "Mahomoud Mohammed Mahmoud Tantawy  (Sec 20)\nfind the index of the first occurrence.\n\nEnter 7 numbers: " << "\n";
    const int SIZE = 7;
    int arr[SIZE];
    arrayInput(arr, SIZE);
    displayOutput("The first index from the left is: ", firstIndex(arr, SIZE));
    return 0;
}