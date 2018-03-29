#include "coordenadas.h"
#include <math.h>
#include <stdio.h>

/// multiplica um vetor por um escalar
/// este é um exemplo entregue pronto pra você ;)
vetor multiplicaPorEscalar(vetor v, escalar alpha)
{
    vetor resultado =
    {
        v.x * alpha,
        v.y * alpha,
        v.z * alpha,
        v.w * alpha
    };
    return resultado;
}

vetor somaVetorComVetor(vetor v, vetor u)
{
    vetor resultado;
    resultado.x = v.x + u.x;
    resultado.y = v.y + u.y;
    resultado.z = v.z + u.z;
    // Como temos um vetor a coordenada homogenea recebe 0.
    resultado.w = 0;
    return resultado;
}

vetor diferencaVetorComVetor(vetor v, vetor u)
{
    vetor resultado;
    // v - u = v + (-u)
    resultado.x = v.x + ((-1)*u.x);
    resultado.y = v.y + ((-1)*u.y);
    resultado.z = v.z + ((-1)*u.z);
    // O resultado é um vetor.
    resultado.w = 0;
    return resultado;
}

vetor diferencaEntrePontos(ponto p, ponto q)
{
    // O vetor pq é a diferença entre as coordenas de q e p.
    vetor resultado;
    resultado.x = p.x - q.x;
    resultado.y = p.y - q.y;
    resultado.z = p.z - q.z;
    // O resultado é um vetor.
    resultado.w = 0;
    return resultado;
}

ponto somaPontoComVetor(ponto p, vetor v)
{
    ponto resultado;
    resultado.x = p.x + v.x;
    resultado.y = p.y + v.y;
    resultado.z = p.z + v.z;
    // O resultado é um novo ponto.
    resultado.w = 1;
    return resultado;
}

escalar normaDoVetor(vetor v)
{
    // Raiz da soma das coordenadas ao quadrado.
    escalar resultado = sqrt((v.x*v.x) + (v.y*v.y) + (v.z*v.z));
    return resultado;
}

vetor normalizado(vetor v)
{
    // Dividir cada componente pela norma do vetor.
    vetor resultado;
    resultado.x = v.x/normaDoVetor(v);
    resultado.y = v.y/normaDoVetor(v);
    resultado.z = v.z/normaDoVetor(v);
    // O resultado é um vetor.
    resultado.w = 0;
    return resultado;
}

escalar distanciaEntrePontos(ponto p, ponto q)
{
    // Norma do vetor pq.
    vetor pq;
    pq.x = q.x - p.x;
    pq.y = q.y - p.y;
    pq.z = q.z - p.z;
    pq.w = 0;
    escalar resultado = normaDoVetor(pq);
    return resultado;
}

escalar produtoEscalar(vetor v, vetor u)
{
    // Soma da multiplicação das coordenadas correspondentes.
    escalar resultado = (v.x*u.x) + (v.y*u.y) + (v.z*u.z);
    return resultado;
}

vetor produtoVetorial(vetor v, vetor u)
{
    // Produto vetorial só faz sentido em 3D
    // Ignorar a componente "w" de "v" e "u"
    // Como o resultado é um vetor, o "w" dele deve ser 0
    // Vou utilizar a forma matricial.
    vetor resultado;
    resultado.x = (v.y*u.z) - (v.z*u.y);
    resultado.y = (v.z*u.x) - (u.z*v.x);
    resultado.z = (v.x*u.y) - (u.x*v.y);
    resultado.w = 0;
    return resultado;
}

///
/// Referências: http://localhost:8080/classes/geometry/#30
escalar anguloEntreVetores(vetor v, vetor u)
{
    // Vou utilizar a forma arcocos(v*u). v e u estarão normalizados.
    // o angulo interno é igual ao arccos do produtoEscalar de dois vetores normalizados.
    escalar resultado = acos(produtoEscalar(normalizado(v), normalizado(u)));
    return resultado;
}

///
/// Referências: http://localhost:8080/classes/geometry/#22
ponto combinacaoAfim2Pontos(ponto p, ponto q, escalar alpha)
{
    p.x = alpha * p.x;
    p.y = alpha * p.y;
    p.z = alpha * p.z;
    q.x = alpha * q.x;
    q.y = alpha * q.y;
    q.z = alpha * q.z;
    ponto resultado;
    resultado.x = p.x + q.x;
    resultado.y = p.y + q.y;
    resultado.z = p.z + q.z;
    resultado.w = 1; // ponto.
    return resultado;
}

/// Imprime um vetor ou ponto no terminal
/// Uso:
///   vetor r = somaVetorComVetor(a, b);
///   imprime("vetor r", r);
void imprime(struct coordenadas c, char* nome)
{
    printf("%s = { %.2f, %.2f, %.2f, %.2f }\n", nome, c.x, c.y, c.z, c.w);
}
