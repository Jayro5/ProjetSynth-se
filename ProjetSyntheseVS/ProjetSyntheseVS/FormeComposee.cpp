#pragma once

#include "FormeComposee.h"
using namespace std;
#include <sstream>

FormeComposee::FormeComposee():FormeGeometrique(){}

FormeComposee::FormeComposee(const string& c):FormeGeometrique(c){}

FormeComposee::FormeComposee(const FormeComposee& fC) : FormeGeometrique(fC.getCouleur) {
	for each(FormeGeometrique* forme in fC.listeFormes){
		FormeGeometrique* tmp = forme->clone();
		tmp->setCouleur(getCouleur());
		listeFormes.push_back(tmp);
	}
}

FormeGeometrique* FormeComposee::clone() const {
	return new FormeComposee(*this);
}

void FormeComposee::ajoutForme(const FormeGeometrique& forme) {
	FormeGeometrique* tmp = forme.clone();
	tmp->setCouleur(getCouleur());
	listeFormes.push_back(tmp);
}

FormeComposee::~FormeComposee() {
	for each(FormeGeometrique* forme in listeFormes) delete(forme);
}

const string FormeComposee::encoder() const {
	ostringstream oss;
	oss << "comp" << "," << getCouleur();
	for each(FormeGeometrique* forme in listeFormes) {
		oss << "(" << forme->encoder() << ")";
	}
	return oss.str();
}

bool FormeComposee::operator ==(const FormeGeometrique&) {
	//si pas le meme type faux
	//si pas meme nb de figures faux
	//sinon
	//en gros la meme que pour polygone mais avec les formes, on doit retrouver chaque forme dans les deux formes composees
	//pour qu'elles soient égales
}

void FormeComposee::accepte(Dessinateur* d) {
	d->visite(this);
}