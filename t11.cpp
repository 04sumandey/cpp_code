#include<iostream>
using namespace std;

int main(){
    int i,n;
//    cout << "how many number you want to print ";  
    // cin >> n;
    // int a[n];
    int arr[] = {5, 6, 7, 8, 9};
    n= sizeof(arr)/sizeof(int);
    for (i = 0; i < n ;i++)
    {
        cout << "The "<<i+1<<"st"<<" value is "<<arr[i]<<endl;
    }
        return 0;
}