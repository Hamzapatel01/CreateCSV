#pragma once
#include <fstream>
using namespace std;

class FileCreator
{
private:
	ofstream MyFile;
public:
	FileCreator(string);
	void WriteFile(string, double, double, double, double, double);
	void WriteHeader();
	void CloseFile();
};

