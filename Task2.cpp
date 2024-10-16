#include <iostream>
using namespace std;

class fibonacci {
public:
    int num;
    fibonacci() {
        cout << "Enter number of items to print: ";
        cin >> num;
    }

    void printFibonacci() {
        int a = 0, b = 1;
        for (int i = 0; i < num; i++) {
            cout << a << " ";
            int temp = a;
            a = b;
            b = temp + b;
        }
        cout << endl;
    }
};

int main() {
    fibonacci f;
    f.printFibonacci();
    return 0;
}