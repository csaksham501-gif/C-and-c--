/*PROGRAM TO FIND OUT THE SIMPLE INTEREST OF THE USER DEFINED VALUES USING CLASS AND OBJECT*/
#include <iostream>
using namespace std;
class A
{
    int P,R,T,total,SI;
    public:
    void show()
    {
        cout<<"enter the Principle value"<<endl;
        cin>>P;
        cout<<"enter the value of rate"<<endl;
        cin>>R;
        cout<<"enter the time period"<<endl;
        cin>>T;

    }
    void sum()
    {
        total=P*R*T;
    }
    void si()
    {
        SI=total/100;
        cout<<"SI="<<SI<<endl;
    }

};
int main()
{
    A a1;
    a1.show();
    a1.sum();
    a1.si();
}
