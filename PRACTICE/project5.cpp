#include <iostream>
using namespace std;
class A
{
    int a,b,c,Avg;
    public:
    void show()
    {
        cout<<"enter the values of a,b,c"<<endl;
        cin>>a>>b>>c;
    }
    void sum()
    {
        Avg=(a+b+c)/3;
    }
    void output(){
    cout<<"Avg="<<Avg<<endl;
    }
};
int main()
{
    A a1;
    a1.show();
    a1.sum();
    a1.output();

}