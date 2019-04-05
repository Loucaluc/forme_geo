#include "cercle.h"

Cercle::Cercle():Figure()
{
	rayon = 0;
}

Cercle::Cercle(int inX, int inY, int inRayon) : Figure(inX, inY)
{
	rayon = inRayon;
}

Cercle::Cercle(const Cercle& inCercle):Figure(inCercle)
{
	rayon = inCercle.rayon;
}

Cercle::~Cercle()
{

}

void Cercle::setRayon(int inRayon)
{
  rayon = inRayon;
}

int Cercle::getRayon() const
{
	return rayon;
}

float Cercle::CalculerPerimetre()
{
	return ((2 * Pi) * rayon);
}

float Cercle::CalculerAire()
{
	return (Pi * (rayon * rayon));
}

void Cercle::selectionner(int xClic, int yClic)
{
	float rayon_float = rayon;
	int centreX = (x + rayon);
	int centreY = (y + rayon);

	if ((((xClic - centreX) * (xClic - centreX)) + ((yClic - centreY) * (yClic - centreY))) / (rayon_float * rayon_float) <= 1)
	{
		estSelectionne = true;
	}
	else
	{
		estSelectionne = false;
	}
}