#include<iostream>
using namespace std;
main()
{
    int n,sum=0;
    cin >> n;
    for (int r = 1; r <= n; r++)
    {
        sum = sum + r;
    }
    cout << "the number of sum is " << sum << " " << endl;
    return 0;
}