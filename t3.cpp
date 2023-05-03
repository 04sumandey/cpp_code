#include<iostream>
using namespace std;

int sum(int num1,int num2)
{
    int c = num1 + num2;
    return c;
}
int main(){
    int x1, x2;
    cout << "Enter the first eliment ";
    cin >> x1;
    cout << "Enter the second eliment ";
    cin >> x2;
    cout << "The sum of x1 and x2 is " << sum(x1, x2);
    return 0;
}