#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
#include <sstream>
#include "Vecteur2D.h"

inline Vecteur2D::Vecteur2D(const double& x, const double& y) : x(x), y(y){}

inline const Vecteur2D Vecteur2D::operator + (const Vecteur2D& u) const{
	return Vecteur2D(x + u.x, y + u.y);
}

inline Vecteur2D::Vecteur2D(const char* s) {
	int i = 1; //i commence à 1 car on ne prend pas la parenthèse au début
	int j = 0;
	char* chaineX; char* chaineY;

	//boucle pour x (premier nombre réel
	while(s[i] != (char)","){
		chaineX[j] = s[i];
		i++; j++;
	}

	i+=2; //on passe la virgule et l'espace
	j = 0; //j est à 0 pour chaineY

	//boucle pour y (deuxième nombre réel)
	while (s[i] != (char)")") {
		chaineY[j] = s[i];
		i++; j++;
	}

	x = atof(chaineX);
	y = atof(chaineY);
}

inline const Vecteur2D Vecteur2D::operator * (const double& a) const{
	return Vecteur2D(x*a, y*a);
}

inline const Vecteur2D Vecteur2D::operator - () const{
	return Vecteur2D(-x, -y);
}

//calcule det(vecteurImplicite, u)
inline const double Vecteur2D::Determinant(const Vecteur2D& u) const{
	return x*u.y - y*u.x;
}

double Vecteur2D::getX() const{
	return x;
}

double Vecteur2D::getY() const{
	return y;
}

Vecteur2D:: operator string() const{
	ostringstream os;
	os << "(" << x << "," << y << ")";
	return os.str();
}

ostream& operator << (ostream& os, const Vecteur2D & u){
	os << (string)u;
	return os;
}