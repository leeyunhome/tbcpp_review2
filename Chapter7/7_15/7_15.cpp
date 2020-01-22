// 7_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	for (int count = 0; count < argc; ++count)
	{
		std::string argv_single = argv[count];

		if (count == 1)
		{
			cout << "I know " << argv_single << endl;
		}
		else if (count == 2)
		{
			cout << "I " << argv_single << " " << argv[1] << endl;
		}
		else if (count == 3)
		{
			cout << "I want to " << argv_single << " to " << argv[1] << endl;
		}
		else if (count == 4)
		{
			int input_number = std::stoi(argv_single);
			cout << input_number + 1 << endl;
		}
	}

	return 0;
}

