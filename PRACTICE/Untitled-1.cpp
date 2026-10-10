//sum of two numbers using class and object
#include <iostream>
using namespace std;
class A 
{
    int a, b;
    public:
    void input()
    {
        cout<<"enter two number of your choice: ";
        cin>>a>>b;

    }
    void sum()
    {
        cout<<"sum of two number is: "<<a+b;
    }
};
int main()
{A a1;
a1.input();
a1.sum();
return 0;   }
