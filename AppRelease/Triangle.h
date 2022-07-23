#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H


	class Triangle
{
		void set_sides();
		double Tperim();
		double Tarea();
		double acangle();
		double abangle();
		double bcangle();
		double a,
			b,
			c,
			perim,
			area,
			ac,
			ab,
			bc;

public:
	void about_triangle();
};
#endif
