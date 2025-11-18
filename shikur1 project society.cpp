#include <iostream> // Include the input-output stream library

int main() {
    // Declare three integer variables: num1, num2 for input, and sum for the result.
    int num1, num2, sum;

    // Prompt the user to enter the first number.
    std::cout << "Enter the first number: ";
    // Read the first number from the user and store it in num1.
    std::cin >> num1;

    // Prompt the user to enter the second number.
    std::cout << "Enter the second number: ";
    // Read the second number from the user and store it in num2.
    std::cin >> num2;

    // Calculate the sum of the two numbers and store it in the sum variable.
    sum = num1 + num2;

    // Display the result to the user.
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    // Return 0 to indicate successful program execution.
    return 0;
}
