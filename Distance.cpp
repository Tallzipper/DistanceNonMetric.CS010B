#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

#include "Distance.h"

Distance::Distance()
{

    _feet = 0;
    _inches = 0;

}

Distance::Distance(unsigned ft, double in)
{

    _feet = ft;
    _inches = in;

    init();

}

Distance::Distance(double in)
{

    _feet = 0;
    _inches = in;

    init();

}

unsigned Distance::getFeet() const
{

    return this->_feet;

}

double Distance::getInches() const
{

    return this->_inches;

}

double Distance::distanceInInches() const
{

    return this->_feet * 12 + this->_inches;


}

double Distance::distanceInFeet() const
{

    return this->_feet + this->_inches / 12;

}

double Distance::distanceInMeters() const
{

    return (this->_feet * 12 * 0.0254) + (0.0254 * this->_inches);

}

Distance Distance::operator+(const Distance &rhs) const
{

    double newIn = this->_inches + rhs._inches;
    double newFt = this->_feet + rhs._feet;

    while(newIn > 12)
    {

        newIn -= 12;
        newFt += 1;

    }


    return Distance(newFt, newIn); 

}

Distance Distance::operator-(const Distance &rhs) const
{

    double lIn = this->_inches + this->_feet * 12;
    double rIn = rhs._inches + rhs._feet * 12;

    double newIn = lIn - rIn;
    double newFt = 0;

    while(newIn > 12)
    {

        newIn -= 12;
        newFt += 1;

    }

    return Distance(newFt, newIn);

}

ostream & operator<<(ostream &out, const Distance &rhs)
{

    out << rhs._feet << "' " << rhs._inches << "\"";
    return out;

}

void Distance::init()
{

    this->_inches = abs(this->_inches);
    //this->_feet = abs(this->_feet);

    while(this->_inches >= 12)
    {

        this->_inches -= 12;
        this->_feet += 1;

    }

}
