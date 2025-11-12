/*
File name: Ch5P3.cpp
Github URL: https://github.com/clk2039/Ch5P3.git
Programmer: Kit Miller
Date: November 2025
Requirements: Write a program that produces a bar chart for the population growth of a town.
The data is stored in intervals over the past several years, with the population for that year (rounded to the nearest thousand people) 
in each line of the file. The program should ask for the name of the data file and the name of the town.
Then the program should read the population figure, calculate the year, and display the year and population growth on a bar chart.
For each year, it should display the year and a car consisting of one asterisk for each thousand people.
A test data file called People.txt has been provided and contains the population numbers for several years. For this data set,
the starting year is 1900 and the interval between data points is 20 years.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//Define variables
	string filename;
	string townName;
	ifstream inputFile;
	int population;
	int year = 1900;
	int interval = 20;

	//Ask the file name from the user
	cout << "Enter the name of the data file: ";
	cin >> filename;

	//Ask the town name from the user
	cout << "Enter the name of the town: ";
	cin >> townName;

	//Open the file
	inputFile.open(filename);

	//Check if the file opened successfully
	if (inputFile.fail())
	{
		cout << "Error opening file.\n";
	}
	else
	{
		//Process the file.
	}

	//Display the title
	cout << townName << " Population Growth:\n";
	cout << "(each * represents 1,000 people)\n";

	//Read the data from the file and display the bar chart
	while (inputFile >> population)
	{
		//Calculate the number of stars
		int stars = population / 1000;

		//Display the year
		cout << year << " ";

		//Display the stars
		for (int start = 0; start < stars; start++)
		{
			cout << "*";
		}

		//Move to the next line
		cout << endl;

		//Increment the year
		year += interval;
	}

	//Close the file
	inputFile.close();

	return 0;
	
}

