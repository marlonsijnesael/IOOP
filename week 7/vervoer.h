#pragma once
class vervoersmiddel {
	//ik heb maar 1 base class, want ik snap niet waarom je er twee zou gebruiken. dit maakt de implementatie volgens mij onnodig complexer.
public:
	vervoersmiddel();
	int capacity;
	float price;
	float toeslag;
	bool heeftToeslag;

	virtual void calculateprice();
		
	void getCapacity();


};