#pragma once
#include "Observer.h"

class Subject {
public:
	virtual void registerObserver(Observer*) = 0;
	virtual void removeObserver(Observer*) = 0;
	virtual void notifyObservers() = 0;
};

