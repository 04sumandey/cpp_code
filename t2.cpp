#include<iostream>
using namespace std;

typedef struct emloyee
{
    int eid;
    char favchar;
    float salary;
} ep;
union money
{
    int rice;
    char car;
    float pounds;
};
int main(){
    enum meal{breakfast,lunch,deaner};
    cout << breakfast<<endl;
    cout << lunch<<endl;
    cout << deaner<<endl;
    // union money m1;
    // m1.rice = 23;
    // m1.car = 'g';
    // cout << m1.car;

    return 0;
}