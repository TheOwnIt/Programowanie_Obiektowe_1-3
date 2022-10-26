#include <iostream>
#include <conio.h>
#include <string>
#include "wektor.h"
#include "wezel.h"
#include "dywan.h"
#include "czas.h"
#include "droga.h"

using namespace std;

// G³ówna logika dywanu:
//Pierwszy funkcja najpierw przelicza godzine na system dziesiêtny ( minuty *1.66) na koñcu zmienia dziesiêtny na minutowy( 0.xx *60)
//St¹d dwie funkcje, jedna dla godzin druga dla minut

int main()
{
	int wybor;
	

	//klasy
	wezly przelicz;
	wektor wektor;
	dywan dywan;
	czas czas;
	droga droga;


	//zmienne
	string wektor_dywanu;
	string wektor_wiatru;
	string wektor_dywanu2;
	int drogaa;
	double godzina;
	double godzina2;
	int predkosc_dywanu = 25;
	int predkosc_wiatru;
	double czas_z_wiatrem;
	double czass;
	int ograniczenie;
	double godzina_rozpoczecia;
	//koniec
	
cout << "************************"<<endl;
cout << "** Lewandowski Michal **"<<endl;
cout << "** DSW 48178          **"<<endl;	
cout << "************************"<<endl;
do{
	cout<<endl<<"Wybor zadania:"<<endl;
	cout<<"1. Koncert Young Leosi"<<endl;
	cout<<"2. Na plazy w Stegnie"<<endl;
	cout<<"3. Spotkanie na szczycie"<<endl;
	cout<<"4. Kontrola predkosci"<<endl;
	cin >> wybor;
	 
	switch(wybor){
		case 1:
			system("CLS");
			//zadanie pierwsze
cout <<"Zadanie pierwsze:"<<endl;
godzina = 17;
wektor_dywanu = "W";
wektor_wiatru = "E";
drogaa = 300;
predkosc_wiatru = 10;
godzina_rozpoczecia = 20.50;
//cout << "Godzina startu: "<< czas.sekundynagodziny(czas.godzinynasekundy(godzina))<<endl;
//cout << "Predkosc: " <<wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru))<<" m/s"<<endl;
//cout << "Droga: " << droga.kmnam(drogaa)<<" m" <<endl;
cout << czas.sekundynagodziny(dywan.czas_przybycia(czas.godzinynasekundy(godzina), droga.kmnam(drogaa), wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru))));
cout << ":";
cout << czas.sekundynaminuty(dywan.czas_przybycia(czas.godzinynasekundy(godzina), droga.kmnam(drogaa), wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru))));
cout << " Godzina przybycia."<<endl;
if(dywan.czas_przybycia(czas.godzinynasekundy(godzina), droga.kmnam(drogaa), wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru))) >czas.godzinynasekundy(godzina_rozpoczecia)){
	cout <<"Mag nie zdazy na koncert!"<<endl;
}else{
	cout <<"Mag zdazy na koncer!"<<endl;
}
	//koniec zadanie pierwsze
			break;
		case 2:
			system("CLS");
			//zadanie drugi
	
	
cout <<"Zadanie drugie:"<<endl;
godzina = 11.34;
drogaa = 500;
wektor_dywanu = "S";
wektor_wiatru = "S";
predkosc_wiatru = 2;
czas_z_wiatrem = 2.5; 
// 	cout << "Godzina startu: "<< czas.sekundynagodziny(czas.godzinynasekundy(godzina))<<":"<< czas.sekundynaminuty(czas.godzinynasekundy(godzina))<<endl;
//	cout << "Predkosc z wiatrem: " <<wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru))<<" m/s"<<endl;
//	cout << "Droga: " << droga.kmnam(drogaa)<<" m" <<endl;
//	cout << "Czas z wiatrem: "<< czas.sekundynagodziny(czas.godzinynasekundy(czas_z_wiatrem))<<":"<< czas.sekundynaminuty(czas.godzinynasekundy(czas_z_wiatrem))<<endl;
   
cout << czas.sekundynagodziny(dywan.czas_przybycia2(czas.godzinynasekundy(godzina), droga.kmnam(drogaa), wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru)),przelicz.wezlynams(predkosc_wiatru),czas.godzinynasekundy(czas_z_wiatrem)));
cout << ":";
cout << czas.sekundynaminuty(dywan.czas_przybycia2(czas.godzinynasekundy(godzina), droga.kmnam(drogaa), wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru)),przelicz.wezlynams(predkosc_wiatru),czas.godzinynasekundy(czas_z_wiatrem)));
cout << " Godzina przybycia."<<endl;
//cout << dywan.czas_przybycia_godzina2(godzina, droga, wektor.wektorek(wektor_dywanu,wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru)),przelicz.wezlynams(predkosc_wiatru)) ;
//cout<<":";
//cout<<dywan.czas_przybycia_minuty2(godzina, droga, wektor.wektorek(wektor_dywanu,wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru)),przelicz.wezlynams(predkosc_wiatru));
//cout<< " Godzina przybycia."<<endl;
//
			break;
		case 3:
			system("CLS");
			////zadanie trzecie
cout <<"Zadanie trzecie:"<<endl;
godzina = 10.25;
godzina2 = 10.5;
drogaa = 270;
predkosc_wiatru = 8;
wektor_dywanu = "E";
wektor_dywanu2 = "W";
wektor_wiatru = "W";

//	cout << "Godzina startu Maga 1: "<< czas.sekundynagodziny(czas.godzinynasekundy(godzina))<<":"<< czas.sekundynaminuty(czas.godzinynasekundy(godzina))<<endl;
//	cout << "Godzina startu Maga 2: "<< czas.sekundynagodziny(czas.godzinynasekundy(godzina2))<<":"<< czas.sekundynaminuty(czas.godzinynasekundy(godzina2))<<endl;
//	cout << "Predkosc Maga 1: " <<wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru))<<" m/s"<<endl;
//	cout << "Predkosc Maga 2: " <<wektor.wektorek(wektor_dywanu2, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru))<<" m/s"<<endl;
//	cout << "Droga: " << droga.kmnam(drogaa)<<" m" <<endl;
	cout<<"Spotkanie nastapi: ";
	cout<< droga.mnakm(dywan.odleglosc_od_wroclawia(czas.godzinynasekundy(godzina),czas.godzinynasekundy(godzina2),droga.kmnam(drogaa),wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru)),wektor.wektorek(wektor_dywanu2, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru))));
	cout<<" KM od Wroclawia."<<endl;
	cout<<"czas spotkania to: ";
	cout << czas.sekundynagodziny(dywan.czas_spotkania(dywan.odleglosc_od_wroclawia(czas.godzinynasekundy(godzina),czas.godzinynasekundy(godzina2),droga.kmnam(drogaa),wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru)),wektor.wektorek(wektor_dywanu2, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru))),wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru)),czas.godzinynasekundy(godzina)));
	cout <<":";
	if(czas.sekundynaminuty(dywan.czas_spotkania(dywan.odleglosc_od_wroclawia(czas.godzinynasekundy(godzina),czas.godzinynasekundy(godzina2),droga.kmnam(drogaa),wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru)),wektor.wektorek(wektor_dywanu2, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru))),wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru)),czas.godzinynasekundy(godzina)))<=9){
		cout<<"0";
	}
	cout << czas.sekundynaminuty(dywan.czas_spotkania(dywan.odleglosc_od_wroclawia(czas.godzinynasekundy(godzina),czas.godzinynasekundy(godzina2),droga.kmnam(drogaa),wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru)),wektor.wektorek(wektor_dywanu2, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru))),wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru)),czas.godzinynasekundy(godzina)));
			break;
	
		case 4:
			system("CLS");
			//zadanie czwarte
			czass = 0.68;
			ograniczenie = 40;
			drogaa = 70;
			predkosc_wiatru = 4;
			wektor_dywanu = "E";	
			wektor_wiatru = "W";
			cout <<"Zadanie czwarte:"<<endl;
			 
			if(dywan.ograniczenie(przelicz.wezlynams(ograniczenie),droga.kmnam(drogaa),wektor.wektorek(wektor_dywanu, wektor_wiatru, predkosc_dywanu, przelicz.wezlynams(predkosc_wiatru)),czas.godzinynasekundy(czass)) == 1){
				cout <<"Tak, Mag przekroczyl predkosc!"<<endl;
			}else{
				cout <<"Nie, Mag nie przekroczyl predkosci!"<<endl;
			}
			break;
		default:
			cout<<"Brak takiego zadania";
			break;
	}
//clrscr();

} while(wybor <=5);

	
	
	





}
