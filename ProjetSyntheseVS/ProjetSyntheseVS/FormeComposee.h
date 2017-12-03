#pragma once

#include "FormeGeometrique.h"
#include <vector>

class FormeComposee : public FormeGeometrique {
private:
	std::vector<FormeGeometrique*> listeFormes;

public:
	FormeComposee();
	FormeComposee(const std::string&);
	FormeComposee(const FormeComposee&);
	~FormeComposee();

	void ajoutForme(const FormeGeometrique&);
	FormeGeometrique* clone() const;

	void accepte(Dessinateur*);
	const std::string encoder() const;

	bool operator == (const FormeGeometrique&);
	//pareil que pour le polygone
	//ex: v1(f1,f2,f3) et v2(f2,f1,f3) -> c'est la meme forme composée
};