#include<iostream>
using namespace std;
class distance
{
	int feet;
	float inches;
	public:
		distance ()
		{
			int d1,d2,d3
		}
		void get()
		{
			cout<<"Enter feet:";
			cin>>feet;
			cout<<"Enter inches:";
			cin>>inches;
		}
		void display()
		{
			cout<<feet<<inches<<endl;
		}
}
int main()
{
	distance d1,d2,d3;
	distance d1(11,2.5);
        distance d2(d1);
	distance d3=d1;
	cout<<d1.display();
	cout<<d2.display();
	cout<<d3.display();
	return 0;
}
