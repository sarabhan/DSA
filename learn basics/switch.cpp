#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    switch(a)
    {
        case 1:
            cout << "monday";
            break;
        case 2:
            cout << "tuesday";
            break;
        case 3:
            cout<<"wednesday";
            break;
        default:
            cout<<"no day available";
    }
    return 0;

}