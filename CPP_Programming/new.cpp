<<<<<<< new1
#include<iosttream>
=======
#include <iostream>
>>>>>>> main
using namespace std;
class house
{
    public:
    string hna,city,state;
    int hno,no_of_house;
        int l[10],b[10],h[10];
    void input();
    void display();
};
void house :: input()
{
    cin>>hna;
    cin>>hno>>city>>state;
    cin>>no_of_house;

    for(int i=1;i<=no_of_house;i++)
    cin>>l[i]>>b[i]>>h[i];
}
void house :: display()
{
    int n=1;
    cout<<"House name="<<hna<<"\nHouse No="<<hno<<"\nCity="<<city<<"\nState="<<state<<endl;
    while(n<=no_of_house)
    {
        cout<<"Details of Room "<<n<<"\nLength="<<l[n]<<"\nBreadth="<<b[n]<<"\nHeight="<<h[n]<<endl;
        
       n++; 
    }
  
}
int main()
{
    house n1;
    n1.input();
    n1.display();

	return 0;
}