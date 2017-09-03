// 10300 EP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cmath>


int main()
{
	
	float testCases = 0, farmers = 0, farmsize = 0, farmanimals = 0, enviropoints= 0;
	int endResult = 0;
	float temp = 0;
	
	std::cin >> testCases;

		for (int i = 0; i < testCases; i++)
		{
			std::cin >> farmers;
			endResult = 0;
			for (int i = 0; i < farmers; i++)
			{
				std::cin >> farmsize >> farmanimals >> enviropoints;
			
				temp = farmsize/farmanimals;
				
				
				endResult += (temp*enviropoints) * farmanimals;
			}
				std::cout << endResult << std::endl;
		}

		

	std::cin >> enviropoints;

    return 0;
}

