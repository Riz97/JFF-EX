#include "Date.h"

//Costruttore 
Date::Date(int dd, int mm, int yy)
{
	y = yy;
	m = mm;
	

}

//Costruttore scritto in maniera pi� compatta
Date::Date(int dd, int mm, int yy)
	: y{ yy }, m{ mm }, d{ dd }
{

}