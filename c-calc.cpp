#include <iostream>

int main() {
    int a, b;
    int sum, difference, product;

    // Read input from the user
    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    // Perform calculations
    sum = a + b;
    difference = a - b;
    product = a * b;

    // Print the execution plan
    std::cout << "Execution Plan:" << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << "1. Add the numbers: " << a << " + " << b << " = " << sum << std::endl;
    std::cout << "2. Subtract the numbers: " << a << " - " << b << " = " << difference << std::endl;
    std::cout << "3. Multiply the numbers: " << a << " * " << b << " = " << product << std::endl;

    return 0;
}
