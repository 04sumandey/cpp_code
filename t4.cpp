#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 4, y = 5;
    cout << "The vale of x is " << x <<". "<< "The value of y is " << y;
    swap (&x, &y);
    cout << "\nThe vale of x is " << x <<". "<< "The value of b is " << y;
    return 0;
}