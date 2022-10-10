#include <iostream>
#include <cmath>
using namespace std;

main()
{
	int n=0, liczba, s;
	int T[1000];
	cout<<"podaj liczbe w systemie 10: ";
	cin>>liczba;
	cout<<endl;
	cout<<"na jaki system od 2 do 9 chcesz zamienic: ";
	cin>>s;
	cout<<endl;
	do 
	{
		T[n]=liczba%s;
		liczba=liczba/s;
		n++;
	} while (liczba>0);
	cout<<"twoja liczba w systemie "<<s<<": ";
	for(int i=n-1;i>=0;i--) cout<<T[i];
	cout<<endl;
}
