#include<iostream>
using namespace std;
main()
{
    int n;
    cin >> n;
    for (int k = 1; k <=n;k++)
    {
        for (int x = 1; x <= k;x++)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}