#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
//Wyliczanie pr�dko�ci z wiatrem
class wektor
{
	//p�noc (N) - (S)
	//wsch�d (E) - (W)
	//po�udnie (S) - (N)
	//zach�d (W) - (E)
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
