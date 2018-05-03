#include <iostream>
#include <string>
#include <filesystem>
namespace fs = std::experimental::filesystem;
using namespace std;

/*
Program will ask user for a desired path to search. If entered correctly, output will show list of files/folders 
in the chosen path

User will be asked if they want to search again. If yes, it will ask for another directory path. If no, program outputs
"Done..." and end
*/

int main()
{
	char answer = ' ';

	do {
		string path;
		cout << "Input a path to follow: ";
		cin >> path;
		for (auto & p : fs::directory_iterator(path))
			cout << p << endl;
		cout << "Would you like to input another path?: ";
		cin >> answer;
	} while (answer == 'y');


	cout << "\n\nDone.....";
	exit;
	return 0;
}