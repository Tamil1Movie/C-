#include<iostream>
using namespace std;
class area
{    
      public:
      area()
      {
            int length,breadth;
      }
      void area_reactangle(int l,int b)
      {
              cout<<"Enter length and breadth:";
              cin>>length<<breadth;
              A=length*breadth;
              cout<<"Area of rectangle:"<<A;
      }
};
int main()
{
      area a;
      a.area_rectangle(l,b);
}
