#include "Projectile.h"
#include <math.h>

using namespace std;

// Class constructor
Projectile::Projectile(double elevatingAngle)
	: muzzleVelocity {50}
	, timeInterval{0.001}
	, initialXvelocity{muzzleVelocity * cos(elevatingAngle)}
	, initialYvelocity{muzzleVelocity * sin(elevatingAngle)}
	, _Xacceleration{0.0}
	, _Yacceleration{0.0}
	, _Xposition{0.0}
	, _Yposition{0.0}
	, elevationAngle{elevatingAngle}
{}

// X acceleration setter 
void Projectile::setXacceleration(double time) {
	_Xacceleration = -time;
}

// X acceleration getter
double Projectile::getXacceleration() {
	return _Xacceleration;
}

// Y acceleration setter
void Projectile::setYacceleration(double time) {
	_Yacceleration = -9.81 + time;
}

// Y acceletaration getter
double Projectile::getYacceleration(){
	return _Yacceleration;
}





