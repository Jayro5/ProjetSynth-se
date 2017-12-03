#pragma once

#include "FormeGeometrique.h"

class Triangle : public FormeGeometrique {
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

	FormeGeometrique* clone() const;

	double aire() const;
	FormeGeometrique* translation(const Vecteur2D&);
	FormeGeometrique* homothetie(const Vecteur2D&, double);
	FormeGeometrique* rotation(const Vecteur2D&, double);
};