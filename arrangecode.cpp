#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {

    //Identify the variables
    int a, b, c;
    
    cout << "Please input the value of a: ";
    cin >> a;
    cout << "\n Please input the value of b: ";
    cin >> b;
    cout << "\n Please input the value of c: ";
    cin >> c;

    if (a < b and a < c and b < c) {
        cout << a << "," << b << "," << c;
    } else if (a < b and a < c and c < b) {
        cout << a << "," << c << "," << b;
        } 

    if (b < a and b < c and a < c) {
        cout << b << "," << a << "," << c;
        } else if (b < a and b < c and c < a) {
        cout << b << "," << c << "," << a;
        }

    if (c < a and c < b and b < a) {
        cout << c << "," << b << "," << a;
        } else if (c < a and c < b and a < b) {
            cout << c << "," << a << "," << b;
        }
    
    return 0; 

}