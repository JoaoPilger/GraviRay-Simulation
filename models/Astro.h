#include "iostream"
#include "Vetor3D.h"

#ifndef ASTRO_H
#define ASTRO_H

class Astro
{
public:
    Astro(float massa, Vetor3D posicao_atual, Vetor3D posicao_anterior, Vetor3D aceleracao);

private:
    float massa;
    Vetor3D posicao_anterior; //vetor com 3 posicoes do tipo float (x, y, z)
    Vetor3D aceleracao; //vetor com 3 direcoes da aceleracao (x, y, z)
    Vetor3D posicao_atual; //vetor com 3 posicoes do tipo float (x, y, z)
};

#endif