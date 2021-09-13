#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
#include <iostream>
using namespace std;

class CurrentCondidtionDisplay : public Observer, public DisplayElement {
private:
	float temperature;
	float humidity;
	Subject* weatherData;

public:
	CurrentCondidtionDisplay(Subject*);
	void update(float, float, float);
	void display();
};

