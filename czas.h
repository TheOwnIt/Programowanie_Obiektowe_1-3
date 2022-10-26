#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

//Przeliczanie wezly na m/s
class czas
{
public:
	int godzinynasekundy(double a);
	int sekundynagodziny(double a);
	int sekundynaminuty(double a);


};
int czas::godzinynasekundy(double a) {
	return(a * 3600);
}

int czas::sekundynagodziny(double a) {
	int m , h;
	m = a / 60;
	h = m /60;
	
	return(h);
	
}
int czas::sekundynaminuty(double a){
	int m , h;
	m = a / 60;
	h = m /60;
	m = m%60;
	

	return(m);

	
}
