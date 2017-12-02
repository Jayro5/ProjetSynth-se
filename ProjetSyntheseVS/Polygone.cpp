#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
#include "Polygone.h"
#include <sstream>
#include <stdarg.h>
#include "Triangle.h"

Polygone::Polygone() :FormeGeo(), listePoints(){}

Polygone::Polygone(const string& couleur):FormeGeo(couleur){}

Polygone::Polygone(const string& couleur, vector<const Vecteur2D&> lP) : FormeGeo(couleur){
	for each (Vecteur2D point in lP)
	{
		listePoints.push_back(point);
	}
}

Polygone::Polygone(vector<const Vecteur2D&> lP) :FormeGeo() {
	for each (Vecteur2D point in lP)
	{
		listePoints.push_back(point);
	}
}

Polygone::Polygone(const Polygone& p) :FormeGeo(p.getCouleur), listePoints(p.listePoints){}

void Polygone::ajoutPoint(const Vecteur2D& point) {
	listePoints.push_back(point);
}

const string Polygone::encode() const {
	ostringstream oss;
	oss << "p" << "," << getCouleur;
	for each (Vecteur2D point in listePoints) {
		oss << "," << point.getX << "," << point.getY;
	}
	return oss.str();
}

void Polygone::accepte(Dessinateur* d) {
	d->visite(this);
}
