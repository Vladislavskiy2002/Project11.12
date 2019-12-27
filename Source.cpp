#include "../std_lib_facilities.h"
#include <locale>
#include "windows.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream ifs{"if_file.txt"};
	if (!ifs)
	{
		error("error");
	}

	ofstream ofs{ "ofs_file.txt" };
	if (!ofs)
	{
		error("error");
	}

	string str;
	while (!ifs.eof())
	{
		ifs >> str;
		int j = 0;
		for (int i = str.size(); i >= 0; i--)
		{
			ofs << str[i];
		}
		ofs << "\n";
	}

	cin.get();
	cin.get();
	return 0;
}