#include<iostream>
class fibonacci
{
      fibonacci
      {
            first=0;
            second=1;
            next=0;
      }
      void fibonacci_series(int n)
      {
            int i;
            cout<<"Enter a limit to print fibonacci series:";
            cin>>n;
            cout<<first<<" ";
            cout<<second<<" ";
            for(i=0;i<n;i++)
            {
                    next=first+second;
                    cout<<next<<" ";
                    first=second;
                    second=next;
            }        
      }
};
int main()
{
      fibonacci f;
      f.fibonacci_series(n);
      return 0;
}
