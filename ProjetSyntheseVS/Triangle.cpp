#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
#include "Triangle.h"
#include <sstream>

Triangle::Triangle() :FormeGeo(), a(), b(), c(){}

Triangle::Triangle(const Vecteur2D& a, const Vecteur2D& b, const Vecteur2D& c) : FormeGeo(), a(a), b(b), c(c){}

Triangle::Triangle(const string& couleur, const Vecteur2D& a, const Vecteur2D& b, const Vecteur2D& c) : FormeGeo(couleur), a(a), b(b), c(c){}

Triangle::Triangle(const Triangle& t) : FormeGeo(t.getCouleur), a(t.a), b(t.b), c(t.c) {}

const string Triangle::encode() const{
	ostringstream oss;
	oss << "t" << "," << getCouleur() << "," << a.getX << "," << a.getY << "," << b.getX << "," << b.getY << "," << c.getX << ","
		<< c.getY << "\r\n";
	return oss.str();
}

double Triangle::aire() const{

}

void Triangle::accepte(Dessinateur* d){
	d->visite(this);
}