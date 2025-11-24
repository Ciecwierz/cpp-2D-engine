#include "Circle.h"




using namespace MySolution;

void Circle::show()
{

}

void Circle::hide()
{

}

void Circle::draw()
{

}

bool Circle::operator>(float _r)
{
	return (this->radius > _r);
}

bool Circle::operator>(Circle& other)
{
	return (this->radius > other.radius);
}

bool Circle::operator<(float _r)
{
	return (this->radius < _r);
}

bool Circle::operator<(Circle& other)
{
	return (this->radius < other.radius);
}

float Circle::getArea() const 
{
	return this->radius * this->radius * M_PI;
}

void Circle::setColor(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha)
{
	org.r = red;
	org.g = green;
	org.b = blue;
	org.a = alpha;
	this->setFillColor(org);
}