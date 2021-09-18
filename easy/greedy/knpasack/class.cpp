#include "main.hpp"


Item	&Item::operator=(Item &rhs)
{
	_v = rhs._v;
	_w = rhs._w;
	return *this;
}

Item::Item (Item &item)
{
	*this = item;
}
