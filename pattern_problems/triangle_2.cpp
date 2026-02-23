#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter number = ";
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        // print leading spaces
        for (int s = 0; s < i; s++)
        {
            cout << "  ";
        }

        // print stars
        for (int j = i; j < a; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}