#include<iostream>
using namespace std;
class factorial
{
      public:
      factorial()
      {
            int f=1,n;
      }
      void fact(int n)
      {
            int i;
            cout<<"Enter a number:";
            cin>>n;
            for(i=0;i<n;i++)
            {
                  f=f*i;
            }
            cout<<"Factorial="<<f;
      }
};
int main()
{
      factorial facto;
      facto.fact(n);
      return 0;
}
