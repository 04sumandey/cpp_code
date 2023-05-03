#include<iostream>
using namespace std;
int sum(int x,int y)
{
    int z = x + y;
    return z;
}
main()
{
    int f1, f2;
    cout << "enter the first number"<<" ";
    cin >> f1;
    cout<<"enter the second number"<<" ";
    cin >> f2;
    cout << "The sum is " << sum(f1, f2);
    return 0;
}