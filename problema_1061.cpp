# include <iostream>
#include <iomanip>  

using namespace std;

int main()
{
	
	int d1, d2, h1, h2, m1, m2, s1, s2, df, hf, mf, sf, aux;
	cout<<"Dia ";
	cin>>d1;
	cin>>h1;
	cin>>m1;
	cin>>s1;
	cout<<h1<<m1<<s1<<endl;
	
	cout<<"Dia ";
	cin>>d2;
	cin>>h2;
	cin>>m2;
	cin>>s2;
	cout<<h2<<m2<<s2<<endl;	
	
	s1 = (m1*60) + (h1*60*60) + (d1*3600*24) + s1;
	s2 = (m2*60) + (h2*60*60) + (d2*3600*24) + s2;

	

	aux = s2 - s1;
	df = 0;
	hf = 0;
	mf = 0;
	sf = 0;
	
	while(aux >= 86400){
		aux = aux - 86400;
		df++;

	}
	
	while(aux >= 3600){
		aux = aux - 3600;
		hf++;
	}
	

	while(aux >= 60){
		aux = aux - 60;
		mf++;
	}
	

	sf = aux;

	cout<<" dia(s)"<<df<<endl;
	cout<<" hora(s)"<<hf<<endl;
	cout<<" minuto(s)"<<mf<<endl;
	cout<<" segundo(s)"<<sf<<endl;

}