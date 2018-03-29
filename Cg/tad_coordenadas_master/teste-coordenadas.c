#include <assert.h>
#include <stdio.h>
#include <math.h>
#include "coordenadas.h"

void testa_multiplicaPorEscalar() {
  printf("Comecando a testar:\t'multiplicaPorEscalar'...\n");
  vetor a = { 5, 5, 5, 0 };
  vetor b = { 1, 1, 1, 0 };

  vetor c = multiplicaPorEscalar(a, 2);
  assert(c.x == 10);
  assert(c.y == 10);
  assert(c.z == 10);
  assert(c.w == 0);

  vetor d = multiplicaPorEscalar(b, -1);
  assert(d.x == -1);
  assert(d.y == -1);
  assert(d.z == -1);
  assert(d.w == 0);
  printf("Passou no teste:\t'multiplicaPorEscalar'...\n");
}

void testa_somaVetorComVetor() {
  printf("Comecando a testar:\t'somaVetorComVetor'...\n");
  vetor a = { 5, 5,  5, 0 };
  vetor b = { 1, 0, -1, 0 };

  vetor c = somaVetorComVetor(a, b);
  assert(c.x == 6);
  assert(c.y == 5);
  assert(c.z == 4);
  assert(c.w == 0);
  printf("Passou no teste:\t'somaVetorComVetor'...\n");
}

void testa_diferencaVetorComVetor() {
  printf("Comecando a testar:\t'diferencaVetorComVetor'...\n");
  vetor a = { 5, 5,  5, 0 };
  vetor b = { 1, 0, -1, 0 };

  vetor c = diferencaVetorComVetor(a, b);
  assert(c.x == 4);
  assert(c.y == 5);
  assert(c.z == 6);
  assert(c.w == 0);
  printf("Passou no teste:\t'diferencaVetorComVetor'...\n");
}

void testa_diferencaEntrePontos() {
  printf("Comecando a testar:\t'diferencaEntrePontos'...\n");
  ponto p = { 3,  2, -8, 1 };
  ponto q = { 1, -1,  5, 1 };

  vetor c = diferencaEntrePontos(p, q);
  assert(c.x == 2);
  assert(c.y == 3);
  assert(c.z == -13);
  assert(c.w == 0);
  printf("Passou no teste:\t'diferencaEntrePontos'...\n");
}

void testa_somaPontoComVetor() {
  printf("Comecando a testar:\t'somaPontoComVetor'...\n");
  ponto p = { 3,  2, -8, 1 };
  vetor v = { 1, -1,  5, 0 };

  ponto c = somaPontoComVetor(p, v);
  assert(c.x == 4);
  assert(c.y == 1);
  assert(c.z == -3);
  assert(c.w == 1);
  printf("Passou no teste:\t'somaPontoComVetor'...\n");
}

void testa_normaDoVetor() {
  printf("Comecando a testar:\t'normaDoVetor'...\n");
  vetor v = { 1, 0, 0, 0 };
  vetor u = { 4, 4, 2, 0 };

  assert(normaDoVetor(v) == 1);
  assert(normaDoVetor(u) == 6);
  printf("Passou no teste:\t'normaDoVetor'...\n");
}

void testa_normalizado() {
  printf("Comecando a testar:\t'normalizado'...\n");
  vetor v = { 1, 0, 0, 0 };
  vetor u = { 4, 4, 2, 0 };

  vetor c = normalizado(v);
  assert(c.x == 1);
  assert(c.y == 0);
  assert(c.z == 0);
  assert(c.w == 0);
  assert(normaDoVetor(c) == 1);

  vetor d = normalizado(u);
  assert(d.x == (4.0/6.0));
  assert(d.y == (4.0/6.0));
  assert(d.z == (2.0/6.0));
  assert(d.w == 0);
  assert(normaDoVetor(d) == 1);
  printf("Passou no teste:\t'normalizado'...\n");
}

void testa_distanciaEntrePontos() {
  printf("Comecando a testar:\t'distanciaEntrePontos'...\n");
  ponto p = { 3,  2, -8, 1 };
  ponto q = { 1, -1,  5, 1 };

  escalar c = distanciaEntrePontos(p, q);
  assert(c == normaDoVetor(diferencaEntrePontos(p, q)));
  printf("Passou no teste:\t'distanciaEntrePontos'...\n");
}

void testa_produtoEscalar() {
  printf("Comecando a testar:\t'produtoEscalar'...\n");
  vetor v = { 1, 0, 0, 0 };
  vetor u = { 0, 1, 0, 0 };

  escalar c = produtoEscalar(v, u);
  assert(c == 0);
  printf("Passou no teste:\t'produtoEscalar'...\n");
}

void testa_produtoVetorial() {
  printf("Comecando a testar:\t'produtoVetorial'...\n");
  vetor v = { 1, 0, 0, 0 };
  vetor u = { 0, 1, 0, 0 };

  vetor t = produtoVetorial(v, u);
  assert(t.x == 0);
  assert(t.y == 0);
  assert(t.z == 1);
  assert(t.w == 0);
  printf("Passou no teste:\t'produtoVetorial'...\n");
}

void testa_anguloEntreVetores() {
  printf("Comecando a testar:\t'anguloEntreVetores'...\n");
  vetor v = { 1, 0, 0, 0 };
  vetor u = { 0, 1, 0, 0 };

  escalar theta = anguloEntreVetores(v, u);
  assert(theta == M_PI/2.0);  // PI/2, que é 90°
  printf("Passou no teste:\t'anguloEntreVetores'...\n");
}

void testa_combinacaoAfim2Pontos() {
  printf("Comecando a testar:\t'combinacaoAfim2Pontos'...\n");
  ponto p = { 0, 0, 0, 1 };
  ponto q = { 6, 6, 4, 1 };

  ponto r = combinacaoAfim2Pontos(p, q, 0.5);
  assert(r.x == 3);
  assert(r.y == 3);
  assert(r.z == 2);
  assert(r.w == 1);
  printf("Passou no teste:\t'combinacaoAfim2Pontos'...\n");
}


int main(int argc, char** argv) {
  testa_multiplicaPorEscalar();
  testa_somaVetorComVetor();
  testa_diferencaVetorComVetor();
  testa_diferencaEntrePontos();
  testa_somaPontoComVetor();
  testa_normaDoVetor();
  testa_normalizado();
  testa_distanciaEntrePontos();
  testa_produtoEscalar();
  testa_produtoVetorial();
  testa_anguloEntreVetores();
  testa_combinacaoAfim2Pontos();

  printf("\nTudo executou sem erros! Pode entregar seu trabalho ;)\n\n");
  return 0;
}
