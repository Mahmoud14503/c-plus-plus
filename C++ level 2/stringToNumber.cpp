#include<iostream>
using namespace std;

// int main() {
//     string str = "12k34h";
//     int result = 0;
//     for (int i = 0; i < str.length(); i++)
//     {
//         switch (str[i])
//         {
//         case '1': result += 1; break;
//         case '2': result += 2; break;
//         case '3': result += 3; break;
//         case '4': result += 4; break;
//         case '5': result += 5; break;
//         case '6': result += 6; break;
//         case '7': result += 7; break;
//         case '8': result += 8; break;
//         case '9': result += 9; break;
//         default: continue;
//         }
//         // if (i < str.length() - 1)
//         result *= 10;
//     }
//         result /= 10;
//     cout << result << endl;
// }

int main() {
    string str = "12k34j";
    int result = 0;
    for (int i = 0; i < str.length(); i++)
    {
        // '0' ASCII value is 48
        if (str[i] >= 48 && str[i] <= 57)
        {
        result += str[i] - '0';
        result *= 10;
        }
    }
        result /= 10;
    cout << result << endl;
}