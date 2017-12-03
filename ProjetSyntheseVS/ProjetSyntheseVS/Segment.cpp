#pragma once

using namespace std;
#include "Segment.h"
#include <sstream>

Segment::Segment() :FormeGeometrique(), p1(), p2(){}
Segment::Segment(const string& couleur, const Vecteur2D& p1, const Vecteur2D& p2) : FormeGeometrique(couleur), p1(p1), p2(p2){}
Segment::Segment(const Vecteur2D& p1, const Vecteur2D& p2) : FormeGeometrique(), p1(p1), p2(p2){}

const string Segment::encode() const{
	ostringstream oss;
	oss << "s" << "," << getCouleur() << p1.getX() << "," << p1.getY() << "," << p2.getX() << "," << p2.getY() << "\r\n";
}

FormeGeometrique* Segment::clone() const {
	return new Segment(*this);
}

void Segment::accepte(Dessinateur* d){
	d->visite(this);
}

