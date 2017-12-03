#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "Vecteur2D.h"

class FormeGeometrique{
private:
	std::string couleur;

public:
	FormeGeometrique();
	FormeGeometrique(const std::string& );
	FormeGeometrique(const FormeGeometrique&);
	virtual ~FormeGeometrique() {};

	virtual const std::string encode() const = 0;
	virtual double aire() const = 0;
	virtual FormeGeometrique* translation(const Vecteur2D&) const = 0;
	virtual FormeGeometrique* homothetie(const Vecteur2D&, double) const = 0;
	virtual FormeGeometrique* rotation(const Vecteur2D&, double) const = 0;

	std::string getCouleur() const;
	void setCouleur(const std::string&);

	virtual FormeGeometrique* clone() const = 0;

	virtual void accepte(Dessinateur*) = 0;
	virtual const string encoder() const = 0;
};