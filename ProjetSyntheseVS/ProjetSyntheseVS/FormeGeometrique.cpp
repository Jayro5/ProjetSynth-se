#pragma once

#include "FormeGeometrique.h"
using namespace std;

FormeGeometrique::FormeGeometrique() :couleur("blue"){}

FormeGeometrique::FormeGeometrique(const string& coul) : couleur(coul){}

FormeGeometrique::FormeGeometrique(const FormeGeometrique& forme) : couleur(forme.couleur){}

string FormeGeometrique::getCouleur() const{
	return couleur;
}

void FormeGeometrique::setCouleur(const string& c){
	couleur = c;
}