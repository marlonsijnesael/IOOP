#include "normaltrain.h"

NormalTrain:NormalTrain(){}

void NormalTrain::calculateprice(int km) {
	return (price*km) * capacity;
}