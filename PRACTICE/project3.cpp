//sum of even numbers from 1 to 10
#include <iostream>
using namespace std;    
class  A
{
    int i, sum=0;
public:
    void show()
    {
        i=1;
        while(i<=10)
        {
            if(i%2==0)
            {
                sum=sum+i;
            }
            i++;
        }
        cout<<"sum="<<sum;

    }
};
int main() {
A a1;
a1.show();
}