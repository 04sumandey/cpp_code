#include<bits/stdc++.h>
using namespace std;
void printpointer(int arr[],int arr_size,int sum)
{
    unorder_set<int> s;
    for (int i = 0; i < arr_size; i++)
    {
        int temp = sum - arr[i];
        if(s.find(temp)!=s.end())
             cout << "the given sum" << sum << "is(" << arr[i] << "," << temp << ")" << endl;
        s.insert(arr[i]);
        
    }
}
int main(){
    int a[] = {2, 4, 8, 10, 11, 16, 20};
    int s = 16;
    int arr_size = sizeof(a) / sizeof (a[0]);
    printpointer(a, arr_size, s);
    return 0;
}