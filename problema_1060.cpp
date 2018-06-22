# include <iostream>
#include <iomanip>  

using namespace std;

int main()
{
	float a, b, c, d, f, e, cont;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	cin>>f;
	
	if(a > 0){
		cont++;
	}
	if(b > 0){
		cont++;
	}
	if(c > 0){
		cont++;
	}
	if(d > 0){
		cont++;
	}
	if(e > 0){
		cont++;
	}
	if(f > 0){
		cont++;
	}
	cout<<cont<<" valores positivos"<< endl;
}