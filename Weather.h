#pragma once
#include <string>
#include <iostream>
using namespace std;
class Weather
{
private:
	std::string city; //  Киров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	std::string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100
public:
	Weather(std::string city, double lon, double lat, double temperature, std::string weather, double windSpeed, int clouds) : city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds) {};

	void print()
	{
		cout << "Город: " << city << endl;
		cout << "Широта: " << lon << endl;
		cout << "Долгота: " << lat << endl;
		cout << "Температура: " << temperature << endl;
		cout << "Погода: " << weather << endl;
		cout << "Скорость ветра: " << windSpeed << endl;
		cout << "Облачность: " << clouds << endl;
	}
};

