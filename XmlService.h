#pragma once
#include "Service.h"
#include "Weather.h"
class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};

