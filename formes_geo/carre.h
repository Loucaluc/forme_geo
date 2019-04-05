#ifndef carreH
#define carreH
#include "figure.h"

class Carre:public Figure
{
  protected:
    int cote;
  public:
	Carre();
	virtual ~Carre();
	Carre(int x, int y, int cote);
	Carre(const Carre&);
    void setCote(int);
	int getCote() const;
	virtual float CalculerPerimetre();
	virtual float CalculerAire();
	virtual void selectionner(int,int);
};
#endif
