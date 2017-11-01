#pragma once

#include "vervoersmiddel.h"

class HighSpeedTrain : vervoersmiddel
{
public:

	HighSpeedTrain(int _capacity, float _pricePerKm, float _toeslag) {
		capacity = _capacity;
		price = _price;
		heeftToeslag = _toeslag;
		toeslag = _toeslag;

		override void calculatePrice() {}
	}

	Train~();

}

