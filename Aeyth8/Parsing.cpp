#include "../pch.h"



const std::vector<std::string> Parse::ParseCLI(const std::vector<std::string>& Arguments)
{
	std::vector<std::string> Libraries{};

	for (const std::string& Arg : Arguments) {

		// Looks for prefix 
		if (Arg[0] == '-')
		{	
			if (Arg == "-log") Global::bShouldLog = true;
			else if (Arg.substr(0, 8) == "-output=") Global::oPath = Arg.substr(8);
			continue;
		}

		if (Arg.rfind(".dll") != std::string::npos) Libraries.push_back(Arg);

		//std::cout << Arg << '\n';

	}

	//std::cout << "bShouldLog : " << Global::bShouldLog << "\noPath : " << Global::oPath << "\n";
	for (const std::string& Lib : Libraries) std::cout << Lib << " || ";
	return Libraries;
}


