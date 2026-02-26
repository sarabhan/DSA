#include <iostream>
using namespace std; 
int main()
{
    int marks; 
    cin >> marks;
    if(marks>=90)
    {
        cout << "grade A";
    }
    else if(marks>=70)
    {
        cout << "grade b";
    }
    else if(marks>=50)
    {
        cout << "grade c";
    }
    else if(marks>=35)
    {
        cout << "grade d";
    }
    else
    {
        cout << "fail";
    }
    return 0;
}