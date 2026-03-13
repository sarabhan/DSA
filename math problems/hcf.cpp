#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if (a%b==0 || b%a==0)
    {
        cout<<min(a,b)<<" is the hcf";
    }
    else
    {
        for(int i=min(a,b); i>0; i--)
        {
            if (min(a,b)%i==0 && max(a,b)%i==0)
            {
                cout<<i;
                break;
            }

        }
    }

}



#include <iostream>
#include <algorithm>

using namespace std;

int findGcd(int n1, int n2) {

    for(int i = min(n1, n2); i > 0; i--) {
        if(n1 % i == 0 && n2 % i == 0) {
            return i;
        }
    }
    return 1;
}


int main() {
    int n1 = 20, n2 = 15;
    
    int gcd = findGcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}


                                