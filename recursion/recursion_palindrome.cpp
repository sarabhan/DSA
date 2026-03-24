#include<iostream>
#include<string>
using namespace std;
//---------BASIC METHOD USING COMPLETE STRING REVERSAL----------
// void pali(string &s, int i, int n)
// {
//     if(i>=n/2)
//         return;
//     char temp = s[i];
//     s[i] = s[n-i-1];
//     s[n-i-1] = temp;
//     return pali(s,i+1,n);
// }
//-----------BETTER WAY--------------
bool pali(string &s, int i, int n)
{
    if(i>=n/2)
        return true;
    if(s[i]!=s[n-i-1])
        return false;
    return pali(s,i+1,n);
}
int main()
{
    string str = "abba";
    // string temp2= str;
    // pali(str,0,str.length());
    // if(str==temp2)
    //     cout<<"true";
    // else
    //     cout<<"false";
    cout<<pali(str, 0, str.length());
    return 0;
}