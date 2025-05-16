#include "pch.h"







int main(int ArgC, char* ArgV[])
{

	std::string Arguments;
	for (int i{0}; i < ArgC; ++i)
	{
		Arguments += ArgV[i];
		Arguments += " || ";
	}
	std::cout << "ArgC:: " << ArgC << " || ArgV:: " << Arguments << "\n";



	while (1) {}



}