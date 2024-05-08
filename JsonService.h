#pragma once
#include "Weather.h"
#include "Service.h"
class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};


