#pragma once
class Pooh
{
public:

	Pooh (double mass) { pMass = mass; }

	void TakeOff(double HoneyHeight) {}

	void Landing(double ground = 0) {}

	void EmergLanding(double ground = 0) {}

	void HoneyCollect() {}

private:

	double pMass;
};
