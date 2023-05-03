#include<iostream>
using namespace std;
int main (){
    int age;

    cout << "Tell me yor age"<<endl;
    cin >> age;
    if (age<18)
    {
        cout << "you canot entire our party"<<endl;
    }
    else if(age==18)
    {
        cout << "you are a kid & and you will got a kid pass"<<endl;
    }
    else
    {
        cout << "you can entire the party"<<endl;
    }
    

    return 0;
}