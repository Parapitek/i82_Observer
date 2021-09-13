#include "WeatherDaata.h"

WeatherData::WeatherData() {

}
void WeatherData::registerObserver(Observer* o) {
	observers.push_back(o);
}

void WeatherData::removeObserver(Observer* o) {
	observers.remove(o);
}

void WeatherData::notifyObservers() {
	for (std::list<Observer*>::iterator it = observers.begin(); it != observers.end(); ++it) {
		//Observer* observer = (Observer*)it;
		//
	}
}

void WeatherData::measurementsChanged() {
	notifyObservers();
}

void WeatherData::setMeasurements(float t, float h, float p) {
	this->temperature = t;
	this->humidity = h;
	this->pressure = p;
}