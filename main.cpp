#include "pch.h"

/*
	Roadmap

	Ability to pass several DLLs in one instance and for them to be separately turned into proxies via namespace of filename, same formatting as Proxy8
	Log parameter '-log' or just 'log' for debugging
	Output parameter with default settings to be in relative path of the DLL (if multiple DLLs were passed the output by default would be at the first passed DLL)  

*/



int main(int ArgC, char* ArgV[])
{
	if (ArgC == 1) return 0;

	// ArgV + 1 skips the first element (executable name)   
	std::vector<std::string> Arguments(ArgV + 1, ArgV + ArgC);

	Parse::ParseCLI(Arguments);

	

	//std::cout << "ArgC:: " << ArgC << " || ArgV:: " << Arguments << "\nbShouldLog:: " << bShouldLog << "\n";



	while (1) {
		// Escape key to close.
		if (GetAsyncKeyState(0x1B) & 0x8000) break;
		Sleep(100);
	}

	return 0;
}