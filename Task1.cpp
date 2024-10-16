#include <iostream>
using namespace std;

class alpha {
    static int total;
    int id;
public:
    alpha() {
        total++;
        id = total;
    }
    static void showtotal() {
        cout << "Total = " << total << endl;
    }
    void showid() {
        cout << "ID is = " << id << endl;
    }
};

int alpha::total = 0;

int main() {
    alpha a1;
    cout << "After creating one object, value of total:" << endl;
    alpha::showtotal();
    alpha a2, a3;
    cout << "After creating more than one object, value of total:" << endl;
    alpha::showtotal();
    a1.showid();
    a2.showid();
    a3.showid();
    return 0;
}