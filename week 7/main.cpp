#include "highspeedtrain.h"
#include "normaltrain.h"

int main(void) {
	HighSpeedTrain	hsp = new HighSpeedTrain(100, 2.0f, 3);
	NormalTrain nrml = new NormalTrain(100, 2.0f);

	
	cout << hsp.calculateprice(100);
	cout << nrml.calculatePrice(100);
	

	


}