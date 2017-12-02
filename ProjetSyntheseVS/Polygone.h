#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "FormeGeo.h"
#include "Vecteur2D.h"
#include <vector>

class Polygone : public FormeGeo{
private:
	std::vector<Vecteur2D> listePoints;

public:
	Polygone();
	Polygone(const std::string&);
	Polygone(const std::string&, std::vector<const Vecteur2D&>);
	Polygone(std::vector<const Vecteur2D&>);
	Polygone(const Polygone&);
	~Polygone() {};

	void ajoutPoint(const Vecteur2D&);

	void accepte(Dessinateur*);
	const std::string encode() const;

	double aire() const;
	Polygone* translation(const Vecteur2D&);
	Polygone* homothetie(const Vecteur2D&, double);
	Polygone* rotation(const Vecteur2D&, double);
};