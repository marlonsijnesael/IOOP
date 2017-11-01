#include "train.h"

HighSpeedTrain:HighSpeedTrain(){}

void HighSpeedTrain::calculatePrice(int km) {
	return ((price + toeslag) * km) * capacity;
}