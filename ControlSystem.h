#pragma once
class ControlSystem
{
public:

	double PropulsionControl() { return coef * (honeyHeight - currAlt); }

private:

	double coef;
	double currAlt;
	double honeyHeight;
};
