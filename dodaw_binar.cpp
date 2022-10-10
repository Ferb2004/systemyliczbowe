#include <iostream>
#include <cmath>
using namespace std;
int n;
int binar (int liczba, int sys)
{

	int l=liczba;
	while (liczba>0)
	{
		n++;
		liczba=liczba/10;
	}
	int T[n];
	for (int i=n-1; i>=0; i--)
	{
		T[i]=l%10;
		l=l/10;
	}
	int s=0;
	for (int i=0; i<n; i++) s=s+T[n-1-i]*pow(sys,i);
	return s;
}
main()
{	
	cout<<"podaj liczbe1 i liczbe2: "<<endl;
	int liczba1, liczba2, n=0, sys, wy;
	cin>>liczba1;
	cin>>liczba2;
	sys=2;
	int l1=binar(liczba1, sys);
	int l2=binar(liczba2, sys);
	cout<<liczba1<<" w systemie "<<sys<<": "<<l1<<endl;
	cout<<liczba2<<" w systemie "<<sys<<": "<<l2<<endl;
	wy=l1+l2;
	int T[1000];
	do 
	{
		T[n]=wy%sys;
		wy=wy/sys;
		n++;
	} while (wy>0);
	cout<<"wynik "<<liczba1<<"+"<<liczba2<<" = ";
	for(int i=n-1;i>=0;i--) cout<<T[i];
	cout<<endl;

}
