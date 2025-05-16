#include<iostream>
using namespace std;

bool checkPrime( int n ){

    if ( n < 2 )
        return false;
    if (n == 2)
        return true;
    
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;

}


int main()
{
    int sum = 0, i = 0;
    for (; i <= 20; i++)
    {
        bool r = checkPrime(i);
        if (r)
        {
            sum += i;
        }
        
    }
    
    cout << "The sum of the prime numbers until 20 is: " << sum;
    return 0;
}