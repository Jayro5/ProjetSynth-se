#pragma once

#include "Cercle.h"
#include <sstream>
using namespace std;

#define PI 3.1416;

Cercle::Cercle() :FormeGeometrique(), centre(), rayon(0){
	setCouleur("");
}

Cercle::Cercle(const string& c, const Vecteur2D& centre, double r) : FormeGeometrique(c), centre(centre), rayon(r){}

Cercle::Cercle(const Vecteur2D& centre, double r) : FormeGeometrique(), centre(centre), rayon(r) {}

Cercle::Cercle(const Cercle& cercle) : FormeGeometrique(cercle.getCouleur), centre(cercle.centre), rayon(cercle.rayon){}

double Cercle::aire() const{
	return rayon * rayon * (double)PI;
}

FormeGeometrique* Cercle::clone() const {
	return new Cercle(*this);
}

const string Cercle::encode() const{
	ostringstream oss;
	oss << "c" << "," << getCouleur() << "," << centre.getX() << "," << centre.getY() << "," << rayon << "\r\n";
	return oss.str();
}

void Cercle::accepte(Dessinateur* d){
	d->visite(this);
}