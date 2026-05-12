#include "iostream"
#include "Astro.h"
#include "Vetor3D.h"

Astro::Astro(float massa, Vetor3D posicao_atual, Vetor3D posicao_anterior, Vetor3D aceleracao)
: massa(massa), posicao_atual(posicao_atual), posicao_anterior(posicao_anterior), aceleracao(aceleracao)
{
};