#include <iostream>
using namespace std;
#include <conio.h>


void coutArray(int arr[], int size) {
    cout << "{";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " , ";
    cout << "}";
}
void cout2dArrayBOOL(bool arr[4][4]) {
    for (int i = 0; i < 4; i++) {
        cout << endl;
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << '\t';
    }
}

void cout2dArrayCHAR(char arr[4][4]) {
    for (int i = 0; i < 4; i++) {
        cout << endl;
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << '\t';
    }
}

void inputMatrix(char charMatrix[4][4], bool boolMatrix[4][4]) {
    
    do
    {
        system("cls");
        cout2dArrayCHAR(charMatrix);
        for (int i = 0; i < 4; i++)
        {
            cout << endl;
            for (int j = 0; j < 4; j++)
            {
                charMatrix[i][j] = getch();
                boolMatrix[i][j] = (charMatrix[i][j] - 48);
                system("cls");
                cout2dArrayCHAR(charMatrix); cout << '\t';
            }
            
        }
    } while (charMatrix[3][3] == '*');    
    system("cls");
}

int main() {

    bool A[4][4] = {
    {1,1,0,1},
    {1,1,0,1},
    {1,1,0,1},
    {1,1,0,1},
    };
    char ArrChar[4][4]{
    {'*','*','*','*'},
    {'*','*','*','*'},
    {'*','*','*','*'},
    {'*','*','*','*'},
    };
    inputMatrix(ArrChar, A);
    cout2dArrayBOOL(A);
}