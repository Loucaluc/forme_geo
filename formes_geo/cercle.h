#ifndef cercleH
#define cercleH
#include "figure.h"
//---------------------------------------------------------------------------
class Cercle:public Figure
{
  protected:
    int rayon;
  public:
	Cercle();
	virtual ~Cercle();
	Cercle(int x, int y, int rayon);
	Cercle(const Cercle&);
    void setRayon(int);
	int getRayon() const;
	virtual float CalculerPerimetre();
	virtual float CalculerAire();
	virtual void selectionner(int,int);
};
#endif
