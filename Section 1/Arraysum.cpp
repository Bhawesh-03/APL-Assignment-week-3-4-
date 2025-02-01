// C++: Calculate the sum of an array
#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = 0;  // Initialize total to 0
    for (int i = 0; i < size; i++) {  // Use '0' instead of 'o'
        total += arr[i];
    }
    return total;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);  // Use '0' instead of 'o'
    int result = calculateSum(numbers, size);
    cout << "Sum in C++: " << result << endl;  // Add ':' and use concatenation operator
    return 0;  // Return 0 to indicate successful execution
}
