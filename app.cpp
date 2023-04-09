#include <iostream>
#include "Math.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 4) {
        cout << "Usage: program_name num1 operator(+,-,*,/) num2" << endl;
        return 0;
    }

    double num1 = stod(argv[1]);
    char op = argv[2][0];
    double num2 = stod(argv[3]);

    double result;

    switch (op) {
        case '+':
            result = Math::add(num1, num2);
            break;
        case '-':
            result = Math::subtract(num1, num2);
            break;
        case '*':
            result = Math::multiply(num1, num2);
            break;
        case '/':
            result = Math::divide(num1, num2);
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 0;
    }

    cout << result << endl;

    return 0;
}