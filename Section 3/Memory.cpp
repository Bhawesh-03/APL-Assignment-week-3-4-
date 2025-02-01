#include <iostream>

class MemoryObject {
public:
    int* value;
    MemoryObject(int val) {
        value = new int(val); // Manual heap allocation
        std::cout << "Allocated memory at " << value << " with value " << *value << std::endl;
    }

    ~MemoryObject() {
        delete value; // Manual deallocation
        std::cout << "Freed memory at " << value << std::endl;
    }
};

int main() {
    MemoryObject* obj = new MemoryObject(42);
    delete obj;  // Prevents memory leak
    return 0;
}
