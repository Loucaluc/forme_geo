#include "carre.h"

Carre::Carre():Figure()
{
	cote=0;
}

Carre::Carre(int inX, int inY, int inCote) : Figure(inX, inY)
{
	cote = inCote;
}

Carre::Carre(const Carre& inCarre):Figure(inCarre)
{
	cote=inCarre.cote;
}

Carre::~Carre()
{

}

void Carre::setCote(int inCote)
{
  cote = inCote;
}

int Carre::getCote() const
{
	return cote;
}

float Carre::CalculerPerimetre()
{
	return (cote * 4);
}

float Carre::CalculerAire()
{
	return (cote * cote);
}

void Carre::selectionner(int xClic, int yClic)
{
	if (xClic >= x && xClic <= (x + cote))
	{
		if (yClic >= y && yClic <= (y + cote))
		{
			estSelectionne = true;
		}
	}
	else
	{
		estSelectionne = false;
	}
}