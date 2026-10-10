#include <iostream>
using namespace std;

class A 
{
    int i;
    int total = 0; // Renamed variable to avoid name collision with the function

    public:
    void sum()
    {
        i = 1;
        while(i <= 10)
        {
            if(i % 2 == 0)
            {
                total = total + i; // Adds 2 + 4 + 6 + 8 + 10
            }
            i++;
        }
        cout << "sum = " << total << endl; // Prints the calculated value
    }
};

int main()
{
    A a1;
    a1.sum();
    return 0;
}