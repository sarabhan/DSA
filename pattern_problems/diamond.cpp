#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < 2 * n; i++) {

        int stars;

        if(i < n)
            stars = 2 * i + 1;                 // increasing triangle
        else
            stars = 2 * (2 * n - i - 1) + 1;   // decreasing triangle

        int spaces = (2 * n - 1 - stars) / 2;

        for(int s = 0; s < spaces; s++)
            cout << "_";

        for(int j = 0; j < stars; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}