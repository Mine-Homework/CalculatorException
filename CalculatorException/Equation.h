#pragma once
#include "PCH.h"

class Equation
{
protected:
	double a;
	double b;
	double c;
public:
	Equation();
	void inputA();
	void inputB();
	void inputC();
	void searchDisk();
	bool inputData();
};

