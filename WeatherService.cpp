#include <string>
#include <iostream>
#include "Weather.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    Weather weather("Киров", 49.6601, 58.5966, 5.69, "дождь", 4.27, 100);
    weather.print();
    return 0;
}
