#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "Vecteur2D.h"
#include "FormeGeo.h"
#include <vector>

class FormeComposee : public FormeGeo {
private:
	std::vector<FormeGeo*> listeFormes;

public:
	FormeComposee();
	FormeComposee(const std::string&);
	FormeComposee(const FormeComposee&);
	~FormeComposee();

	void ajoutForme(const FormeGeo&);

	void accepte(Dessinateur*);
	const std::string encoder() const;
};