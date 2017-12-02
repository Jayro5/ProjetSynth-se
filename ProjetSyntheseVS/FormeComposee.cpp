#pragma once
#include "FormeComposee.h"

void FormeGeo::accepte(Dessinateur* d) {
	d->visite(this);
}