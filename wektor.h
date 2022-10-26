#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
//Wyliczanie prêdkoœci z wiatrem
class wektor
{
	//pó³noc (N) - (S)
	//wschód (E) - (W)
	//po³udnie (S) - (N)
	//zachód (W) - (E)
		public:
			double wektorek(string a, string b, double aa, double bb);
	
};
double wektor::wektorek(string a, string b, double aa, double bb){
	if(a==b){
		return(aa - bb);
	}else	if(a=="N" && b=="S"){
		return(aa + bb);
	}else	if(a=="E" && b=="W"){
		return(aa + bb);
	}else	if(a=="S" && b == "N"){	
		return(aa + bb);
	}else	if(a=="W" && b=="E"){
		return(aa + bb);
	}else{
		return(aa);
	}
}
