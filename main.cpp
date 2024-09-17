#include <iostream> // Preprocessor directive to include the iostream library

using namespace std; // Allows direct access to standard library symbols without prefixing std::

int main() {
    // Declare variables to store the numbers
    double num1, num2, sum;
    
    // Prompt the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1; // Read the first number from user input
    
    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2; // Read the second number from user input
    
    // Calculate the sum of the two numbers
    sum = num1 + num2;
    
    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "." << endl;
    
    return 0; // Return 0 to indicate that the program ended successfully
}