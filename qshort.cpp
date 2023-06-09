#include<iostream>
using namespace std;

soap(int arr[],int i,int j){

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[],int l,int r){

    int pivot = arr[r];
    int i = l - 1;

    for (int j = l; j < r;j++){

        if(arr[j]<pivot){
            i++;
            soap(arr, i, j);
        
        }
    }
    soap(arr, i + 1, r);
    return i + 1;
 
}

void quickshort(int arr[],int l,int r)
{

    if(l<r){

        int pi = partition(arr, l, r);
        quickshort(arr, l, pi - 1);
        quickshort(arr, pi + 1, r);

    }

}

int main()

{
    
    int arr[5] = {5, 4, 2, 3, 1};
    quickshort(arr, 0, 4);
    for (int i = 0; i < 5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}
