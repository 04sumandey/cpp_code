// selection control switch case stratments
#include<iostream>
using namespace std;
main()
{
    int age;
    cout << "tell me your age";
    cin >> age;
    switch (age)
    {
    case 18:

        cout << "you are 18";
        break;
    case 22:
        cout << "you are 22";
        break;
    case 2:
        cout << "you are 2";
        break;

    default:
    cout<< "No special case";
    break;
}
return 0;
}