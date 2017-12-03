#pragma once

#include "FormeGeometrique.h"

class Cercle :public FormeGeometrique{
private:
	Vecteur2D centre;
	double rayon;

public:
	Cercle(const std::string&, const Vecteur2D&, double);   //constructeur avec couleur, un point, rayon
	Cercle(const Vecteur2D&, double);                //constructeur sans couleur (couleur par défaut), un point, le rayon
	Cercle(const Cercle&);                           //constructeur par recopie
	Cercle();                                        // constructeur par défaut (utile pour les tableaux)
	~Cercle() {};

   
	double aire() const;
	FormeGeometrique* translation(const Vecteur2D&);
	FormeGeometrique* homothetie(const Vecteur2D&, double);
	FormeGeometrique* rotation(const Vecteur2D&, double);

	FormeGeometrique* clone() const;

	const std::string encode() const;
	void accepte(Dessinateur*);
};