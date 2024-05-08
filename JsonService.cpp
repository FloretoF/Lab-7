#include <fstream>
#include "json.hpp"
#include "pugixml-1.13/src/pugixml.hpp"
#include "JsonService.h"

using nlohmann::json;
Weather JsonService::getWeather(std::string s)
{
    std::ifstream fin(s);
    if (!fin)
        throw exception("error");

    json j;
    j = json::parse(fin);
    std::string city = j["name"]; //  Киров
    double lon = j["coord"]["lon"]; // 49.6601
    double lat = j["coord"]["lat"]; // 58.5966  
    double temperature = j["main"]["feels_like"]["temp_min"]["temp_max"]["pressure"]["humidity"]["sea_level"]["grnd_level"]; // 5.69
    std::string weather = j["weather"]["id"]["main"]["description"]["icon"]; // дождь
    double windSpeed = j["wind"]["speed"]; // 4.27
    int clouds = j["clouds"]["all"]; // 100
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}

