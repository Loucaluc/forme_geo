#ifndef FigureH
#define FigureH

#include <string>
using namespace std;

const float Pi=(float)3.1416;

class Figure
{
protected:
	int x;	//coin sup�rieur gauche
	int y;
	bool estSelectionne;

public:
	Figure();
	Figure(int x, int y);
	Figure(const Figure&);
	int getX() const;
	int getY() const;
	void setPoint(int X, int Y);
	void setX(int);
	void setY(int);
	bool EstSelectionne();	
	void Deselectionner();
	virtual float CalculerPerimetre();
	virtual float CalculerAire();
	virtual int getRayon() const; 
	virtual int getCote() const;
};

#endif