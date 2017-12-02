#pragma once

#include <stdio.h>
#include <stdlib.h>
#include "Cercle.h"
#include <string>
#include <sstream>
using namespace std;

#define PI 3.1416;

Cercle::Cercle() :FormeGeo(), centre(), rayon(0){
	setCouleur("");
}

Cercle::Cercle(const string& c, const Vecteur2D& centre, double r) : FormeGeo(c), centre(centre), rayon(r){}

Cercle::Cercle(const Vecteur2D& centre, double r) : FormeGeo(), centre(centre), rayon(r) {}

Cercle::Cercle(const Cercle& cercle) : FormeGeo(cercle.getCouleur), centre(cercle.centre), rayon(cercle.rayon){}

double Cercle::aire() const{
	return rayon * rayon * (double)PI;
}

const string Cercle::encode() const{
	ostringstream oss;
	oss << "c" << "," << getCouleur() << "," << centre.getX() << "," << centre.getY() << "," << rayon << "\r\n";
	return oss.str();
}

void Cercle::accepte(Dessinateur* d){
	d->visite(this);
}