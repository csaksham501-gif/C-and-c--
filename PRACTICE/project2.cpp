//program to find the sum of two user defined numbers using class and object
#include <iostream>
using namespace std;
class A 
{
    int a,b;
    public:
    void sum()
    {
        cout<<"enter the value of a and b"<<endl;
        cin>>a>>b;
        cout<<"sum="<<a+b<<endl;
    }

};
int main()
{
    A a1;
    a1.sum();

}
