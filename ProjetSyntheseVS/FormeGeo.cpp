#pragma once

#include <stdlib.h>
#include <stdio.h>
#include "FormeGeo.h"
#include <string>
using namespace std;

FormeGeo::FormeGeo() :couleur("blue"){}

FormeGeo::FormeGeo(const string& coul) : couleur(coul){}

FormeGeo::FormeGeo(const FormeGeo& forme) : couleur(forme.couleur){}

string FormeGeo::getCouleur() const{
	return couleur;
}

void FormeGeo::setCouleur(const string& c){
	couleur = c;
}