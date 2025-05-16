#include <iostream>
#include <conio.h>
using namespace std;

const int r = 4, c = 4;

bool checkReflexive(bool A[r][c]) {
    for (int i = 0; i < r; i++)
        if (A[i][i] != 1)
            return false;
    return true;
    
}

bool checkSymmetric(bool A[r][c]) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (A[i][j] != A[j][i])
                return false;
    return true;
}

bool checkTransitive(bool A[r][c]) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            if (A[i][j] == 1)
            {
                for (int k = 0; k < c; k++)
                {
                    if (A[j][k] == 1)
                    {
                        if (A[i][k] != 1)
                        {
                            return false;
                        }
                        
                    }
                }
                
            }
            
        }
    return true;
}

void checkReflexiveSymmetricTransitive(bool A[r][c]) {
    cout << boolalpha; 
    cout << "\nIs It Reflexive? " << checkReflexive(A);
    cout << "\nIs It Symmetric? " << checkSymmetric(A);
    cout << "\nIs It Transitive? " << checkTransitive(A);
    cout << noboolalpha;
    cout << endl;
}

void coutArray(int arr[], int size) {
    cout << "{";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " , ";
    cout << "}";
}
void cout2dArrayBOOL(bool arr[r][c]) {
    for (int i = 0; i < r; i++) {
        cout << endl;
        for (int j = 0; j < c; j++)
            cout << arr[i][j] << "  ";
    }
}
void cout2dArrayCHAR(char arr[4][4]) {
    for (int i = 0; i < 4; i++) {
        cout << endl;
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << '\t';
    }
}

void warshalAlgorithm(bool A[r][c]) {
    cout << "========================\n========================";
    cout << "\n{ ";
        for (int i = 0; i < r; i++)
        {
            int CsetSize = 4, Cset[CsetSize] = {0,0,0,0}, CsetCounter = 0;
            int RsetSize = 4, Rset[RsetSize] = {0,0,0,0}, RsetCounter = 0;
            CsetCounter = 0;
            RsetCounter = 0;
            // Capturing elements to the Cset and the Rset -->
            for (int I = 0; I < r; I++)
            {
                if (A[I][i] == 1) {
                    Cset[CsetCounter] = I + 1 ;
                    CsetCounter++;
                }
                if (A[i][I] == 1) {
                    Rset[RsetCounter] = I + 1;
                    RsetCounter++;
                }
            }
            // Removing the unwanted indices from the Cset and the Rset -->
            for (int w = 0; w < 4; w++)
            {
                if (Cset[w] == 0)
                    CsetSize--;
                if (Rset[w] == 0)
                    RsetSize--;
            }
            // The ordered pair matrix which its size (rows) differ from an iteration to another -->
            int orderdPairMatrix[CsetSize*RsetSize][2] = {
                // {0,},
                // {0,},
                // {0,},
                // {0,},
            };
            // cartesian product function -->
            int element = 0;
            for (int i = 0; i < CsetSize*RsetSize;)
            {
                for (int j = 0; j < RsetSize; j++)
                {
                orderdPairMatrix[i][0] = Cset[element];
                orderdPairMatrix[i][1] = Rset[j];
                i++;
                }
                element++;
            }
            // take the new pairs and put it overwrite the matrix -->
            for (int i = 0; i < CsetSize*RsetSize; i++)
            {
                int a = orderdPairMatrix[i][0] - 1;
                int b = orderdPairMatrix[i][1] - 1;
                A[a][b] = 1;
            }
            // test cases -->
            cout << "\nCset #" << i + 1 << " is: ";
            coutArray(Cset, CsetSize);
            cout << "\nRset #" << i + 1 << " is: ";
            coutArray(Rset, RsetSize);
            cout << endl << "The cartesian product of the sets is: ";
            for (int i = 0; i < CsetSize*RsetSize; i++)
                for (int j = 0; j < 2; j++)
                    cout << orderdPairMatrix[i][j];
        }
    cout << "\n} \n";
}

void inputMatrix(char charMatrix[4][4], bool boolMatrix[4][4]) {
    do
    {
        system("cls");
        cout << "Enter the boolean marrix: \n";
        cout2dArrayCHAR(charMatrix);
        for (int i = 0; i < 4; i++)
        {
            cout << endl;
            for (int j = 0; j < 4; j++)
            {
                charMatrix[i][j] = getch();
                boolMatrix[i][j] = (charMatrix[i][j] - 48);
                system("cls");
            cout << "Enter the boolean marrix: \n";
                cout2dArrayCHAR(charMatrix); cout << '\t';
            }
            
        }
    } while (charMatrix[3][3] == '*');    
    system("cls");
}


int main() {
    char charMatrix[r][c] = {
    {'*','*','*','*'},
    {'*','*','*','*'},
    {'*','*','*','*'},
    {'*','*','*','*'},
    };
    bool boolMatrix[r][c] = {
        {0,0,0,1},
        {0,1,0,1},
        {0,0,0,0},
        {1,0,0,0},
    };
    inputMatrix(charMatrix, boolMatrix);
    cout << "========================\n========================";
    cout2dArrayBOOL(boolMatrix);
    checkReflexiveSymmetricTransitive(boolMatrix);
    warshalAlgorithm(boolMatrix);
    cout << endl << "The Transitive closure is:";
    cout2dArrayBOOL(boolMatrix);
    checkReflexiveSymmetricTransitive(boolMatrix);
}