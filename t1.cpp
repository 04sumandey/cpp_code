#include<iostream>
using namespace std;
struct employee
{
    int eid;
    char favchar;
    float salary;
};

int main(){
    struct employee ram;
    ram.eid = 1;
    ram.favchar = 'b';
    ram.salary = 120000;
    cout <<"The value is "<< ram.eid<<endl;
    cout <<"The Value is "<< ram.favchar<<endl;
    cout << "The Value is "<<ram.salary<<endl;
    return 0;
}