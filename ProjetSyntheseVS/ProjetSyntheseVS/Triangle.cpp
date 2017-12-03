#pragma once

using namespace std;
#include "Triangle.h"
#include <sstream>

Triangle::Triangle() :FormeGeometrique(), a(), b(), c(){}

Triangle::Triangle(const Vecteur2D& a, const Vecteur2D& b, const Vecteur2D& c) : FormeGeometrique(), a(a), b(b), c(c){}

Triangle::Triangle(const string& couleur, const Vecteur2D& a, const Vecteur2D& b, const Vecteur2D& c) : 
	FormeGeometrique(couleur), a(a), b(b), c(c){}

Triangle::Triangle(const Triangle& t) : FormeGeometrique(t.getCouleur), a(t.a), b(t.b), c(t.c) {}

const string Triangle::encode() const{
	ostringstream oss;
	oss << "t" << "," << getCouleur() << "," << a.getX << "," << a.getY << "," << b.getX << "," << b.getY << "," 
		<< c.getX << "," << c.getY << "\r\n";
	return oss.str();
}

FormeGeometrique* Triangle::clone() const {
	return new Triangle(*this);
}

double Triangle::aire() const{

}

void Triangle::accepte(Dessinateur* d){
	d->visite(this);
}