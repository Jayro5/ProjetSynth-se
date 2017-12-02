#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>

template <class T>
inline const T operator - (const T& u, const T& v){
	return u + -v;
}

class Vecteur2D{
public:
	double x, y;

	inline explicit Vecteur2D(const double& x = 0, const double& y = 0);
	/***  DONNEES: s respectant le format "(nombre réel, nombre réel)"   ***/
	inline Vecteur2D(const char* s);

	inline const Vecteur2D operator + (const Vecteur2D&) const;
	inline const Vecteur2D operator * (const double&) const;

	/***  - unaire càd l'opposé d'un vecteur  ***/
	inline const Vecteur2D operator - () const;

	inline const double Determinant(const Vecteur2D&) const;

	operator string() const;

	double getX() const;
	double getY() const;
};

inline const Vecteur2D operator * (const double& a, const Vecteur2D& u){
	return u*a;
};

