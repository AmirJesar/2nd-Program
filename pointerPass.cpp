#include <iostream>

// Function that takes a pointer as a parameter
void modifyValue(int *ptr) {
    *ptr = 100; // Dereferencing the pointer and changing the value at the memory location it points to
}

int main() {
    int num = 42;

    std::cout << "Before function call: " << num << std::endl;

    // Passing the address of 'num' to the function
    modifyValue(&num);

    std::cout << "After function call: " << num << std::endl;

    return 0;
}

