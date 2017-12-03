#pragma once

using namespace std;
#include "Polygone.h"
#include <sstream>

Polygone::Polygone() :FormeGeometrique(), listePoints(){}

Polygone::Polygone(const string& couleur): FormeGeometrique(couleur){}

Polygone::Polygone(const string& couleur, vector<const Vecteur2D&> lP) : FormeGeometrique(couleur){
	for each (Vecteur2D point in lP)
	{
		listePoints.push_back(point);
	}
}

Polygone::Polygone(vector<const Vecteur2D&> lP) :FormeGeometrique() {
	for each (Vecteur2D point in lP)
	{
		listePoints.push_back(point);
	}
}

Polygone::Polygone(const Polygone& p) :FormeGeometrique(p.getCouleur), listePoints(p.listePoints){}

void Polygone::ajoutPoint(const Vecteur2D& point) {
	listePoints.push_back(point);
}

FormeGeometrique* Polygone::clone() const {
	return new Polygone(*this);
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

bool Polygone::operator ==(const FormeGeometrique& forme) {
	//bool trouve = faux
	//si le type de la forme (getType existe je crois) return faux
	//si pas meme nbre de points return faux
	//on boucle sur les points de notre polygone (listePoints[i] pour i de 0 à size(listePoints))
	   //on boucle sur les points de forme
	   //si le point de forme est égal au point trouve = vrai
	//si trouve = faux on a deux points différents donc les polygones sont différents
}