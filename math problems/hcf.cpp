#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    // if (a%b==0 || b%a==0)
    // {
    //     cout<<min(a,b)<<" is the hcf";
    // }
    // else
    // {
    //     for(int i=min(a,b); i>0; i--)
    //     {
    //         if (min(a,b)%i==0 && max(a,b)%i==0)
    //         {
    //             cout<<i;
    //             break;
    //         }

    //     }
    // }
    //a better option is using euclidean algorithm
    while(a>0 && b>0)
    {
        if(a>b)
            a=a%b;
        else
            b=b%a;
    }
    if(a==0) cout<<b;
    else cout<<a;

}
