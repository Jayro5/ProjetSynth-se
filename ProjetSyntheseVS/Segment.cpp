#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
#include "Segment.h"
#include <sstream>

Segment::Segment() :FormeGeo(), p1(), p2(){}
Segment::Segment(const string& couleur, const Vecteur2D& p1, const Vecteur2D& p2) : FormeGeo(couleur), p1(p1), p2(p2){}
Segment::Segment(const Vecteur2D& p1, const Vecteur2D& p2) : FormeGeo(), p1(p1), p2(p2){}

const string Segment::encode() const{
	ostringstream oss;
	oss << "s" << "," << getCouleur() << p1.getX() << "," << p1.getY() << "," << p2.getX() << "," << p2.getY() << "\r\n";
}

void Segment::accepte(Dessinateur* d){
	d->visite(this);
}

