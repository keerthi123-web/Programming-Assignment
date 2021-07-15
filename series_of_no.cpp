#include <iostream>

using namespace std;

int main() {

    int i, a;

    // Take input from user.
    cout << "Input a = ";
    cin >> a;

    cout << endl << "Output " << " : " << endl;

    for(i = 1; i <= a; i++) {

        // Check for odd or not.
        if((i % 2) != 0) {

            cout << i << " ";

        }
    }

    return 0;
}
