#include<iostream>
using namespace std;

void add(int x,int y)
{
    cout << "sum =" << (x + y)<<endl;
}
void add(double x,double y)
{
    cout << "sum =" << (x + y);
}

int main()
{
    add(15, 20);
    add(16.55, 13.25);
    return 0;
}
