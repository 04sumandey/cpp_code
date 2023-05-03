#include<iostream>
using namespace std;
int fact(int n)
{
    if(n<=1)
    {    
        return 1;
    }
    return n * fact(n - 1);
}
main ()
{
    int x;
    cout <<"enter the element : ";
    cin >> x;
    cout << x << "'s factorial is : " << fact(x);
    return 0;
}