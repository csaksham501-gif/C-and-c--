#include <iostream>
using namespace std;

class A
{
public:
    
    int a, b;
    
    int result_sum, result_diff, result_div, result_prod; 
    
    
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
        if (b == 0)
    {
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
    a1.input(); 
    a1.sum();
    a1.diff();
    a1.div();
    a1.prod();
    
    return 0;
}
