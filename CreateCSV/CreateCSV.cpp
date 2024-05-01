#include <iostream>
#include "FileCreator.h"
#include <string>
using namespace std;

int main()
{
	string FileName;
	string name;
	double BIO101;
	double CHEM200;
	double MATH101;
	double CIS101;
	double Average;
	cout << "enter the FileName(.CSV)==> ";
	cin >> FileName;
	FileCreator gust(FileName);
	gust.WriteHeader();

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter Student name==> ";
		getline(cin, name);
		cout << "Enter grades for BIO101==> ";
		cin >> BIO101;
		cout << "Enter grades for CHEM200==> ";
		cin >> CHEM200;
		cout << "Enter grades for MATH101==> ";
		cin >> MATH101;
		cout << "Enter grades for CIS101==> ";
		cin >> CIS101;
		Average=(BIO101+CHEM200+MATH101+CIS101)/5;
		gust.WriteFile(name, BIO101,CHEM200,MATH101,CIS101,Average);
	}
	gust.CloseFile();
}

