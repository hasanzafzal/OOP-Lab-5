#include <iostream>
using namespace std;

class box {
	int lentgh, width, height;
	static int objectCount;
public:
    box() {
        objectCount++;
    }
    static void showCount() {
		cout << "Constructor called. " << endl;
        cout << "Object Count = " << objectCount << endl;
    }
};

int box::objectCount = 0;

int main() {
	box box1;
	box::showCount();
	box box2;
	box::showCount();
	return 0;
}