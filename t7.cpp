#include<iostream>
using namespace std;
class employee{
    int id;
    int count;
    public:
        void inputdata(){
            cout << "enter the id ";
            cin >> id;
        }
        void outputdata(){
            cout << "the id of employee is " << id <<endl;
        }

};

int main(){
    employee a1,b1,c1;
    a1.inputdata();
    a1.outputdata();

    b1.inputdata();
    b1.outputdata();

    c1.inputdata();
    c1.outputdata();

    return 0;
}