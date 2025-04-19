#pragma once
class Date
{
public: 
	Date(int d, int m, int y); //Costruttore
	void add_day(int n);
	int month();

private: 

	int d, m, y;
};

