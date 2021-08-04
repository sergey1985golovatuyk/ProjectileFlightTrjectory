#pragma once
#include <vector>

class Projectile
{
private:
	// Private attribute
	const double muzzleVelocity, timeInterval;
	double _Xacceleration, _Yacceleration, _Xposition, _Yposition, initialXvelocity, initialYvelocity;
	double elevationAngle;

public:
	// _Xacceleration setter
	void setXacceleration(double time);

	// _Xacceleration getter
	double getXacceleration();
	
	// _Yacceleration getter
	double getYacceleration();
	
	// _Yacceleration setter
	void setYacceleration(double time);

// Class constructor & destructor
	Projectile(double elevationAngle);
	~Projectile();


// Calculate current X position
	double 



};

