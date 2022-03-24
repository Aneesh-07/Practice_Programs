#include<bits/stdc++.h>
using namespace std;
class my_class
{
    public:
    my_class(void){x=0;}
    void f(int n)
    {
        n=x*5;
    }
    void output(void){cout<<x; }

    private: 
    int x;
};
class sample:public my_class
{
    public:
    sample(void){s1=0;}
    void f1(int n1)
    {
        s1=n1*10;
    }
    void output(void){ my_class::output(); cout<<s1;
    }
    private:
    int s1;
};

int main()
{
    sample s;
    s.f(5);
    s.output();
    s.f(20);
    s.output();
    return 0;
}