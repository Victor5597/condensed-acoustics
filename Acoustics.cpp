#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <sstream>
int main()
{
	int N = 100;//Параметр дискретизации
	double** P = new double*[N]();
	for (size_t i = 0; i < N; i++)
	{
		P[i] = new double[N];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			P[i][j] = sin((j*j + i * i) / 3);
		}
	}
	std::ofstream out;
	out.open("data.txt");
	if (out.is_open())
	{
		for (size_t i = 0; i < N; i++)
		{
			for (size_t j = 0; j < N; j++)
			{
				std::string s = std::to_string(P[i][j]);
				char const *buffer = s.c_str();//Очень трудно конвертировать double
				out.write(buffer, strlen(buffer));
				out.write(" ", 1);
			}
			out.write("\n", 1);
		}
		out.close();
	}
	int i = system("python ./Plot.py");
	std::cout << i;
	return 0;
}

