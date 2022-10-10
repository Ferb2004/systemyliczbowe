#include <iostream>
#include <cmath>
using namespace std;
main()
{
	cout<<"podaj liczbe: "<<endl;
	
	int liczba, n=0, sys, l;
	cin>>liczba;
	cout<<"podaj system: "<<endl;
	cin>>sys;
	l=liczba;
	while (liczba>0)
	{
		n++;
		liczba=liczba/10;
	}
	cout<<"n= "<<n<<endl;
	int T[n];
	for (int i=n-1; i>=0; i--)
	{
		T[i]=l%10;
		l=l/10;
	}
	int s=0;
	for (int i=0; i<n; i++) s=s+T[n-1-i]*pow(sys,i);
	cout<<"Twoja liczba w systemie 10 wynosi: "<<s<<endl;
}
