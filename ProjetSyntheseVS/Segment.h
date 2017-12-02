#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "FormeGeo.h"
#include "Vecteur2D.h"

class Segment : public FormeGeo{
private:
	Vecteur2D p1, p2;

private:
	Segment();
	Segment(const std::string&, const Vecteur2D&, const Vecteur2D&);
	Segment(const Vecteur2D&, const Vecteur2D&);
	~Segment() {};

	void accepte(Dessinateur*);
	const std::string encode() const;

	double aire() const{ return 0; }
	Segment* translation(const Vecteur2D&);
	Segment* homothetie(const Vecteur2D&, double);
	Segment* rotation(const Vecteur2D&, double);
};