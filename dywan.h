#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// G³ówna logika dywanu:
//Pierwszy funkcja najpierw przelicza godzine na system dziesiêtny ( minuty *1.66) na koñcu zmienia dziesiêtny na minutowy( 0.xx *60)
//St¹d dwie funkcje, jedna dla godzin druga dla minut
class dywan
{
	public:
		
		//funkcja liczenia zadania 1
		double czas_przybycia(double czas_start, double droga, double predkosc);
	
		//funkcja liczenia zadania 2
		double czas_przybycia2(double czas_start, double droga, double predkosc, double predkosc2, double czas_z_wiatrem);
		
		//funkcja liczenia zadania 3
		double czas_spotkania(double droga, double predkosc, double czas_start);
		double odleglosc_od_wroclawia(double czas_start_1, double czas_start_2, double droga, double predkosc1, double predkosc2);
		
		//funkcja liczenia zadania 4
		double ograniczenie(double ograniczenie, double droga, double wiatr, double czas);
	
};
//Funkcja liczenia zadania 1
double dywan::czas_przybycia(double czas_start, double droga, double predkosc) {


	return(czas_start + (droga / predkosc));

}


//Funkcja liczenia zadania 2

double dywan::czas_przybycia2(double czas_start, double droga, double predkosc, double predkosc2, double czas_z_wiatrem) {
	
	double predkosc_bez_wiatru =  predkosc + predkosc2;
	// predkosc  = z predkoscia wiatru
	// predkosc2 = predkosc wiatru
	
	double droga_z_wiatrem = czas_z_wiatrem * predkosc;
	double czas = (droga - droga_z_wiatrem) / predkosc_bez_wiatru;
	double godzina = czas;
	double godziny = czas_start+czas+czas_z_wiatrem;
	return(godziny);


}

//Funkcja liczenia zadania 3
double dywan::odleglosc_od_wroclawia(double czas_start_1, double czas_start_2, double droga, double predkosc1, double predkosc2){
			//zmniejszamy odleglosc do rownej czyli tak jakby oboje wystartowali o 10:30
			double roznica_czasu = czas_start_2 - czas_start_1;//czas_start_2 - czas_start_1; // roznica w czasie miedzy Magami (15 minut, ale wiadomo trzeba wyliczyc :P )
			double droga_15min = roznica_czasu * predkosc1; // droga jaka przeby³ Mag 1 w 15 minut
			double rowna_droga = droga - droga_15min; //droga zmniejszona o przebycie przez Maga 1 drogi w ciagu 15 minut
			double droga1;
			double droga2;
			double czas =	1;
			do{
				droga1 = czas * predkosc1; 
				droga2 = czas * predkosc2;
				czas= czas+1;
			}while(droga1+droga2 < rowna_droga);
			droga1 = droga1 + droga_15min;
			return(droga1);
			
}
double dywan::czas_spotkania(double droga, double predkosc,double czas_start){
	
	return(czas_start + (droga/predkosc));
}



//Funkcja liczenia zadania 4

double dywan::ograniczenie(double ograniczenie, double droga, double wiatr, double czas){
	double predkosc = droga / czas - wiatr;
	
	if(predkosc > ograniczenie){
		return(1);
	}else{
		return(0);
	}
	
}

