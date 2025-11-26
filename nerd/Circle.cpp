#include "Circle.h"




using namespace MySolution;

void Circle::show()
{
	setFillColor(org);
	setOutlineColor(org);
	setOutlineThickness(0.0f);
	setPosition({ getPosition().x, 300 } );
}

void Circle::hide()
{
	const sf::Color transparent = sf::Color(0, 0, 0, 0);
	setFillColor(transparent);
	setOutlineColor(sf::Color::Transparent);
	setOutlineThickness(0.0f);
	setPosition({ getPosition().x, 240 });
}

void Circle::draw()
{
	//TODO One can use window method draw()
}

bool Circle::operator>(float _r)
{
	return (this->radius > _r);
}

bool Circle::operator>(const Circle& other)
{
	return (this->radius > other.radius);
}

bool Circle::operator<(float _r)
{
	return (this->radius < _r);
}

bool Circle::operator<(const Circle& other)
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

bool Circle::operator==(const Circle& other)
{
	return (this->radius == other.radius);
}