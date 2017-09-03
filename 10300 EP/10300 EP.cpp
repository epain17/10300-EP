// 10300 EP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cmath>


int main()
{
	std::fstream inputfile;
	float testCases = 0, farmers = 0, farmsize = 0, farmanimals = 0, enviropoints= 0;
	int temp = 0;
	float result = 0;
	
	inputfile.open("input.txt");

	while (!inputfile.eof())
	{
		inputfile >> testCases;
		for (int i = 0; i < testCases; i++)
		{
			inputfile >> farmers;
			temp = 0;
			for (int i = 0; i < farmers; i++)
			{
				inputfile >> farmsize >> farmanimals >> enviropoints;
			
				result = farmsize/farmanimals;
				
				
				temp += (result*enviropoints) * farmanimals;
			}
				std::cout << temp << std::endl;
		}

		

	}
	inputfile.close();

	std::cin >> enviropoints;

    return 0;
}

