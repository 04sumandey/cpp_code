#include<iostream>
using namespace std;
int product(int x,int y)
{
    return x * y;
}
main()
{
    int m, n;
    cout << "Enter the two number ";
    cin >> m >> n;
    cout << "The product of m &n is "<<product(m,n);
    return 0;
}