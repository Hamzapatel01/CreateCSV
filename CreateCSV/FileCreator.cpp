#include "FileCreator.h"

FileCreator::FileCreator(string n)
{
	this->MyFile.open(n);
}

void FileCreator::WriteFile(string name, double BIO101, double CHEM200, double MATH101, double CIS101, double Average)
{
	this->MyFile << name << " , " << BIO101 << " , " << CHEM200 << " , " << MATH101 << " , " << CIS101 << " , " << Average << endl;
}

void FileCreator::WriteHeader()
{
	this->MyFile << "StudentName, BIO101, CHEM200, MATH101, CIS101, Average" << endl;
}

void FileCreator::CloseFile()
{
	this->MyFile.close();
}
