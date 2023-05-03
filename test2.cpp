#include<bits/stdc++.h>
using namespace std;

void func1(int a){
    cout << "address : func : " << &a << endl;
    cout << "In func : before : a=" << a << endl;
    a = 5;
    cout << "In func : after : a=" << a << endl;
}

void func2(int &a){
    cout << "address : func : " << &a << endl;
    cout << "In func : before : a=" << a << endl;
    a = 5;
    cout << "In func : after : a=" << a << endl;
}

int main(){
    int a = 1, b = 2;
    cout << "address : main : " << &a << endl;
    cout << "In main : before : a=" << a << endl;
    func2(a);
    cout << "In main : after : a=" << a << endl;
}