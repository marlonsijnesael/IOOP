#pragma once

#include "vervoersmiddel.h"

class HighSpeedTrain : vervoersmiddel
{
public:
	
	HighSpeedTrain(int _capacity, float _price, float _toeslag) {
		capacity = _capacity;
		price = _price;
		toeslag = _toeslag;

		
	}
	void calculatePrice() {}
	Train~();

}

