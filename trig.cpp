#include "trig.h"
#include <iostream>
#include <math.h>

trig::trig(const double x) 
    :x(x) {}

double trig::get_x() const
{
	return this->x;
}

void trig::set_x(double x)
{
	this->x = x;
}

double trigonometry::get_num(const double x) const
{
	return get_x();
}

trigonometry::trigonometry(const double x)
{	set_x(x);
	set_sin();
	set_cos();
	set_tg();
	set_derivative_sin();
	set_derivative_cos();
	set_derivative_tg();
}

double trigonometry::get_x() const
{
	return this->x;
}

void trigonometry::set_x(const double x)
{
	this->x = x;
}

void trigonometry::set_sin()
{
	this->sin = sin(get_x());
}

void trigonometry::set_cos()
{
	this->cos = cos(get_x());
}

void trigonometry::set_tg()
{
	this->tg = tan(get_x());
}

void trigonometry::set_derivative_sin()
{
	this->derivative_sin = cos(get_x());
}

void trigonometry::set_derivative_cos()
{
	this->derivative_cos = -sin(get_x());
}

void trigonometry::set_derivative_tg()
{
	this->derivative_tg = 1 / pow(cos(get_x()), 2);
}

double trigonometry::get_sin() const
{
	return this->sin;
}

double trigonometry::get_cos() const
{
	return this->cos;
}

double trigonometry::get_tg() const
{
	return  this->tg;
}

double trigonometry::get_derivative_sin() const
{
	return this->derivative_sin;
}

double trigonometry::get_derivative_cos() const
{
	return this->derivative_cos;
}

double trigonometry::get_derivative_tg() const
{
	return  this->derivative_tg;
}

std::istream& operator>>(std::istream& number, trigonometry& input)
{
	double a;
	number >> a;
	input = trigonometry(a);
	return number;
}

std::ostream& operator<<(std::ostream& out, const trigonometry& show)
{
	out << "sin(a)= " << show.get_sin() << std::endl
		<< "sin(a)'= " << show.get_derivative_sin() << std::endl
		<< "cos(a)= " << show.get_cos() << std::endl
		<< "cos(a)'= " << show.get_derivative_cos() << std::endl
		<< "tg(a)= " << show.get_tg() << std::endl
		<< "tg(a)'= " << show.get_derivative_tg() << std::endl;
	return out;
}