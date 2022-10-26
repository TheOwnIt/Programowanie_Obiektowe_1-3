#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

//Przeliczanie wezly na m/s
class droga
{
public:
	int kmnam(double a);
	double mnakm(double a);



};
int droga::kmnam(double a) {
	return(a * 1000);
}
double droga::mnakm(double a){
	return(a / 1000);
}

