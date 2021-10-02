#include <iostream>
using namespace std;
int main ()
{
	int a;
	cout<<"Unesite broj"<<endl;
	cin>>a;
	if (a % 3 ==0 && a % 5 == 0)
	{
		cout<< "broj je djeljiv sa 3 i 5";
	}
	if (a % 3 == 0)
	{
		cout<< "broj je djeljiv sa 3";
	}
	if (a % 5 == 0)
	{
		cout<< "broj je djeljiv sa 5";
	}
	return 0;
}
