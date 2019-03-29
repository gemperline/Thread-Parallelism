#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	ofstream outFile;
	outFile.open("agemperline.log");

	if (outFile.is_open())
	{
		cout << " file opened..." << endl;
	}
	else
		cout << "error..." << endl;

	system("PAUSE");
	return 0;
}
