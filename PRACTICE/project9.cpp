#include <iostream>
using namespace std;

class A
{
public:
    // Variables for input
    int a, b;
    // Renamed result variables to avoid clashing with function names
    int result_sum, result_diff, result_div, result_prod; 
    
    // FIX 1: Put the cout and cin statements inside a function
    void input() 
    {
        cout << "enter the value of a and b " << endl;
        cin >> a >> b;    
    }

    void sum()
    {
        result_sum = a + b;
        cout << result_sum << endl;
    }

    void diff()
    {
        result_diff = a - b;
        cout << result_diff << endl;
    }

    void div()
    {
        if (b == 0) { // Safety check to prevent crashing
            cout << "Division by zero is not allowed." << endl;
            return;
        }
        result_div = a / b;
        cout << result_div << endl;
    }

    void prod()
    {
        result_prod = a * b;
        cout << result_prod << endl;
    }
};

int main()
{
    A a1;
    a1.input(); // Added: Must call input first to get values for a and b
    a1.sum();
    a1.diff();
    a1.div();
    a1.prod();
    
    return 0;
}
