#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(5);  // Manual heap allocation
    cout << "Value: " << *ptr << endl;
    delete ptr;  // Manual deallocation
    return 0;
}