#include <iostream>
using namespace std;

int main() {
    int number = 6767;
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        int f = 1;

        for (int i = 1; i <= digit; i++) {
            f = f * i;
        }

        cout << digit << "! = " << f << endl;

        number /= 10;
        sum += f;
    }

    cout << "Sum of factorials of digits is: " << sum << endl;

    return 0;
}