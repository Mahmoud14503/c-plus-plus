#include<iostream>
using namespace std;

int reverseNum( int n ){

    int i = 0;
    for ( ; n != 0 ;  )
    {
        i = 
        i*10 
        + 
        n%10
        ;

        n = n/10;
    }
    return i;
}

bool checkPalindrome( int x ){
    //int revs = reverseNum(x);
    if (x == reverseNum(x))
    {
        return true;
    }
    else
        return false;
}


int main()
{
    cout << "Enter any number: ";
    int n;
    cin >> n;
    //reverseNum(n);
    //bool checking = checkPalindrome(n);
    if (checkPalindrome(n))
    {
        cout << "The number is a palindrome";
    }
    else
        cout << "The number is not a palindrome";
    

}




