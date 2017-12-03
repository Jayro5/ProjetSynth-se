#pragma once

#include "FormeGeometrique.h"
#include <vector>

class Polygone : public FormeGeometrique {
private:
	std::vector<Vecteur2D> listePoints;

public:
	Polygone();
	Polygone(const std::string&);
	Polygone(const std::string&, std::vector<const Vecteur2D&>);
	Polygone(std::vector<const Vecteur2D&>);
	Polygone(const Polygone&);
	~Polygone() {};

	void ajoutPoint(const Vecteur2D&);

	void accepte(Dessinateur*);
	const std::string encode() const;

	FormeGeometrique* clone() const;

	bool operator ==(const FormeGeometrique&); 
	//quand on compare deux vectors, ils sont égaux si les éléments sont égaux et dans le même ordre
	//or dans notre cas, si deux points ne sont pas à la meme position dans les vectors mais sont les mêmes,
	//on a quand même le même polygone. Ex on a vector1(p1,p2,p3,p4) et vector2(p2,p1,p3,p4), l'opérateur equal des
	//vector dira qu'ils sont pas égaux mais dans notre prgrm on a le même polygone au final donc faut surcharger
	//(je mets les idées d'implémentation en commentaires dans le .cpp)

	double aire() const;
	FormeGeometrique* translation(const Vecteur2D&);
	FormeGeometrique* homothetie(const Vecteur2D&, double);
	FormeGeometrique* rotation(const Vecteur2D&, double);
};