#include <bits/stdc++.h>

// Function to calculate factorial
unsigned  long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // 0! and 1! are both 1
    }
    else {
        return n * factorial(n - 1); // Recursive calculation
    }
}

int main() {
    int number;

    // Input from user
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    // Check for negative input
    if (number < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
        return main();
    }
    else {
        // Calculate and display the factorial
        unsigned long long result = factorial(number);
        std::cout << "The factorial of " << number << " is: " << result << std::endl;
    }
    return 0;
}
