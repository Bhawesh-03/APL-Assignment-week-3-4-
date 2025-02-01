#include <iostream>
using namespace std;

void staticScope() {
    static int x = 10;  // Persists across function calls
    x += 5;
    cout << x << endl;
}

int main() {
    staticScope();
    staticScope();
    return 0;
}
