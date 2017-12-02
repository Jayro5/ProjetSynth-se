#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "Vecteur2D.h"

class FormeGeo{
private:
	std::string couleur;

public:
	FormeGeo();
	FormeGeo(const std::string& );
	FormeGeo(const FormeGeo&);
	virtual ~FormeGeo() {};

	virtual const std::string encode() const = 0;
	virtual double aire() const = 0;
	virtual FormeGeo* translation(const Vecteur2D&) const = 0;
	virtual FormeGeo* homothetie(const Vecteur2D&, double) const = 0;
	virtual FormeGeo* rotation(const Vecteur2D&, double) const = 0;

	std::string getCouleur() const;
	void setCouleur(const std::string&);

	virtual void accepte(Dessinateur*) = 0;
};