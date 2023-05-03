#include<iostream>
using namespace std;
long long int fact(int n)
    {
        if (n<1)
        {
            return 1;
        }
        return n * fact(n - 1);
    }
int main(){
    int x;
    cout << "Enter a numer ";
    cin >> x;
    cout << "The factrial of " << x << " is " << fact(x);
    return 0;
    }