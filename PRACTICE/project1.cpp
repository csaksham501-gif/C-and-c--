#include <iostream>
using namespace std;
class A
{
    int a,b;
    public:
    void input()
    {
        cout<<"enter the values of a and b"<<endl;
        cin>>a>>b;
    }
   void sum()
{
    cout << "sum=" << a + b << endl; 
}
};
int main()
{
        A a1;
        a1.input();
        a1.sum();
}