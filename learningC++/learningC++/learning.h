#pragma once
#ifndef LEARNING_H_
#define LEARNING_H_
//#include<iostream>
class Time
{
private:
	double hours;
public:
	Time() {
		hours = 5.0;
	};
	Time(double h) :hours(h) {}
	explicit operator int() const { return int(hours); }
	Time& operator=(Time&);


};

int add(int& x);
#endif
