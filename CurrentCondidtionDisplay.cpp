#include "CurrentCondidtionDisplay.h"

CurrentCondidtionDisplay::CurrentCondidtionDisplay(Subject* weatherData) {
	this->weatherData = weatherData;
	weatherData->registerObserver(this);
}
void CurrentCondidtionDisplay::update(float t, float h, float p) {
	this->temperature = t;
	this->humidity = h;
	display();
}
void CurrentCondidtionDisplay::display() {
	cout << "Current conditions: " << temperature << "C degrees and "
		<< humidity << "% humidity" << endl;
}
