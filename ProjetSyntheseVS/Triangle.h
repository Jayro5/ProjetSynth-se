#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "FormeGeo.h"
#include "Vecteur2D.h"

class Triangle : public FormeGeo{
private:
	Vecteur2D a, b, c;

public:
	Triangle();
	Triangle(const std::string&, const Vecteur2D&, const Vecteur2D&, const Vecteur2D&);
	Triangle(const Vecteur2D&, const Vecteur2D&, const Vecteur2D&);
	Triangle(const Triangle&);
	~Triangle() {};

	void accepte(Dessinateur*);
	const std::string encode() const;

	double aire() const;
	Triangle* translation(const Vecteur2D&);
	Triangle* homothetie(const Vecteur2D&, double);
	Triangle* rotation(const Vecteur2D&, double);
};