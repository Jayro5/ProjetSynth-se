#pragma once

#include "FormeGeometrique.h"

class Segment : public FormeGeometrique {
private:
	Vecteur2D p1, p2;

private:
	Segment();
	Segment(const std::string&, const Vecteur2D&, const Vecteur2D&);
	Segment(const Vecteur2D&, const Vecteur2D&);
	~Segment() {};

	void accepte(Dessinateur*);
	const std::string encode() const;

	FormeGeometrique* clone() const;

	double aire() const{ return 0; }
	FormeGeometrique* translation(const Vecteur2D&);
	FormeGeometrique* homothetie(const Vecteur2D&, double);
	FormeGeometrique* rotation(const Vecteur2D&, double);
};