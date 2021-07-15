#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class Calculator {
    double A, B;
public:
    void get() {
        cout << "Enter First Number: ";
        cin >> A;
        cout << "Enter Second Number: ";
        cin >> B;
    }
    double add() {
        return A + B;
    }
    double sub() {
        return A - B;
    }
    double mul() {
        return A * B;
    }
    double div() {
        if (B == 0) {
            cout << "Divison By Zero" << endl;
            return INFINITY;
        }
        else {
            return A / B;
        }
    }
};
int main() {
    char op;
    Calculator cal; // simple calculator object


        cout << "Enter operator: +, -, *, /: ";
        cin >> op;

        switch (op) {
        case '+':
            cal.get();
            cout << "Result: " << cal.add() << endl;
            break;
        case '-':
            cal.get();
            cout << "Result: " << cal.sub() << endl;
            break;
        case '*':
            cal.get();
            cout << "Result: " << cal.mul() << endl;
            break;
        case '/':
            cal.get();
            cout << "Result: " << cal.div() << endl;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
        }
    return 0;
}
