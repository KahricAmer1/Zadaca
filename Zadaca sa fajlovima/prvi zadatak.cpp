#include <iostream>
using namespace std;
int main ()
{
	int mjesec, godina;
	cout<< "unesite mjesec i godinu ro�enja"<< endl;
	cin>>mjesec>>godina;
	int a=2021- godina;
	int b=9- mjesec;
	if (b== -1)
	{
		cout<< "imate"<<a-1<<"godinu i 6 mjeseci";
	
	}
	else if (b== -2) {
		cout<< "imate "<<a-2<<"godinu i 5 mjeseci";
	}
	else if (b== -3) {
		cout<< "imate "<<a-3<<"godinu i 4 mjeseca";
	}
	else if (b>=0) {
		cout<< "imate" <<a<<"godina i "<<b<< "mjeseci";
	}
	else {
		cout<< "Pogrije�ili ste";
	}
	return 0;
}
