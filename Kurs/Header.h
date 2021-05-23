#pragma once
#include <iostream>
#include <math.h>
using namespace std;

double f(double x, double y) // наша функція
	{
		return (2 * (x - 1) * (x - 1) + (y - 2) * (y - 2) * (y - 2) + sqrt((x + 2) * (x + 2) + (y + 2) * (y + 2)));
	}
	double df_dx(double x, double y) // похідна функції по Х
	{
		return (4 * (x - 1) + (x + 2) / sqrt((x + 2) * (x + 2) + (y + 2) * (y + 2)));
	}
	double df_dy(double x, double y) // похідна функції по Y
	{
		return (3 * (y - 2) * (y - 2) + (y + 2) / sqrt((x + 2) * (x + 2) + (y + 2) * (y + 2)));
	}

	double length(double x, double y) // відстань між точками 
	{
		return (sqrt(x * x + y * y));
	}

	double result(double x1, double y1)
	{

		double x0 = 0, y0 = 0;
		double 	d = 1;
		double dx, dy;
		double e = 0.0001;
		const int A = 0, B = 4, C = 0, D = 4;
		double last_dx = df_dx(x0, y0), last_dy = df_dy(x0, y0);
		int count = 0;
		do  // сам алгоритм метода
		{
			x0 = x1;
			y0 = y1;
			while (f(x0 - d * df_dx(x0, y0), y0) - f(x0, y0) > e * d * length(df_dx(x0, y0), df_dy(x0, y0))
				|| f(x0, y0 - d * df_dy(x0, y0)) - f(x0, y0) > e * d * length(df_dx(x0, y0), df_dy(x0, y0)))
			{
				d = d / 2;
			}
			x1 = x0 - d * df_dx(x0, y0);
			y1 = y0 - d * df_dy(x0, y0);
			if (x1 < A) x1 = A;
			else if (x1 > B) x1 = B;
			if (y1 < C) y1 = C;
			else if (y1 > D) y1 = D;
		} while (length((x1 - x0), (y1 - y0)) > e);

		return f(x1, y1);
	}












	double Getx(double x1, double y1)
	{

		double x0 = 0, y0 = 0;
		double 	d = 1;
		double dx, dy;
		double e = 0.0001;
		const int A = 0, B = 4, C = 0, D = 4;
		double last_dx = df_dx(x0, y0), last_dy = df_dy(x0, y0);
		int count = 0;
		do  // сам алгоритм метода
		{
			x0 = x1;
			y0 = y1;
			while (f(x0 - d * df_dx(x0, y0), y0) - f(x0, y0) > e * d * length(df_dx(x0, y0), df_dy(x0, y0))
				|| f(x0, y0 - d * df_dy(x0, y0)) - f(x0, y0) > e * d * length(df_dx(x0, y0), df_dy(x0, y0)))
			{
				d = d / 2;
			}
			x1 = x0 - d * df_dx(x0, y0);
			y1 = y0 - d * df_dy(x0, y0);
			if (x1 < A) x1 = A;
			else if (x1 > B) x1 = B;
			if (y1 < C) y1 = C;
			else if (y1 > D) y1 = D;
		} while (length((x1 - x0), (y1 - y0)) > e);

		return x1;
	}
	double Gety(double x1, double y1)
	{

		double x0 = 0, y0 = 0;
		double 	d = 1;
		double dx, dy;
		double e = 0.0001;
		const int A = 0, B = 4, C = 0, D = 4;
		double last_dx = df_dx(x0, y0), last_dy = df_dy(x0, y0);
		int count = 0;
		do  // сам алгоритм метода
		{
			x0 = x1;
			y0 = y1;
			while (f(x0 - d * df_dx(x0, y0), y0) - f(x0, y0) > e * d * length(df_dx(x0, y0), df_dy(x0, y0))
				|| f(x0, y0 - d * df_dy(x0, y0)) - f(x0, y0) > e * d * length(df_dx(x0, y0), df_dy(x0, y0)))
			{
				d = d / 2;
			}
			x1 = x0 - d * df_dx(x0, y0);
			y1 = y0 - d * df_dy(x0, y0);
			if (x1 < A) x1 = A;
			else if (x1 > B) x1 = B;
			if (y1 < C) y1 = C;
			else if (y1 > D) y1 = D;
		} while (length((x1 - x0), (y1 - y0)) > e);

		return y1;
	}