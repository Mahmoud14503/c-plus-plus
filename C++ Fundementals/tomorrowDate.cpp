#include <iostream>
using namespace std;

int d,m,y;
int main()
{
    cout << "Enter today's date: ";

    cin >> d;
    cin >> m;
    cin >> y;

    if (d>31)
    {
        cout << "erorr";
    }
    
    else if (m>12)
    {
        cout << "erorr";
    }
    

    else if (d==31 && m==12)
    {
        d=1;
        m=1;
        cout << d << "/" << m << "/" << y+1; 
    }
    


    else if (d==28 && m==2)
    {
        if ((y%4==0 && y%100!=0) || (y%400==0))
        {
        cout << d+1 << "/" << m << "/" << y;
        }
        else
        // d = 1;
        // m = 3;
        // cout << d << "/" << m << "/" << y; 
        cout << d-27 << "/" << m+1 << "/" << y; 

    }
    

    else if (d==30)
    {
        switch (m)
    {
    case 4:
        d=1;
        m=m+1;
        cout << d << "/" << m << "/" << y; 
        break;
    case 6:
        d=1;
        m=m+1;
        cout << d << "/" << m << "/" << y; 
        break;
    case 9:
        d=1;
        m=m+1;
        cout << d << "/" << m << "/" << y; 
        break;
    case 11:
        d=1;
        m=m+1;
        cout << d << "/" << m << "/" << y; 
        break;
    default:
        break;
    }
    }
    

    else if (d==31)
    {
        switch (m)
        {
        case 1:
        d=1;
        m=m+1;
        cout << d << "/" << m << "/" << y; 
        break;
        case 3:
        d=1;
        m=m+1;
        cout << d << "/" << m << "/" << y; 
        break;
        case 5:
        d=1;
        m=m+1;
        cout << d << "/" << m << "/" << y; 
        break;
        case 7:
        d=1;
        m=m+1;
        cout << d << "/" << m << "/" << y; 
        break;
        case 8:
        d=1;
        m=m+1;
        cout << d << "/" << m << "/" << y; 
        break;
        case 10:
        d=1;
        m=m+1;
        cout << d << "/" << m << "/" << y; 
        break;
        default:
            break;
        }
    }
    else
    cout << d+1 << "/" << m << "/" << y;


    return 0;

}
