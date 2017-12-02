#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "FormeGeo.h"
#include "Vecteur2D.h"

class Cercle :public FormeGeo{
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
	Cercle* translation(const Vecteur2D&);
	Cercle* homothetie(const Vecteur2D&, double);
	Cercle* rotation(const Vecteur2D&, double);


	const std::string encode() const;
	void accepte(Dessinateur*);
};