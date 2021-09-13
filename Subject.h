#pragma once
class Subject {
public:
	virtual void registerObserver() = 0;
	virtual void removeObserver() = 0;
	virtual void notifyObservers() = 0;
};

