#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for (int i=0; i<a; i++)
    {
        int base=1;
        for(int j=0; j<a; j++)
        {
            if (i>=j)
            {
                cout<<base<<" ";
                base++;
            }
        }
        cout<<endl;
    }
    return 0;
}