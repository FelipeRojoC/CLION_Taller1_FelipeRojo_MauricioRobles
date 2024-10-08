//
// Created by felip on 29-09-2024.
//

#ifndef TABLERO_H
#define TABLERO_H

#include "MatrizPocoPoblada.h"

class Tablero {
private:
    int filas;
    int columnas;
    MatrizPocoPoblada matriz;

public:
    Tablero(int filas, int columnas);

    int getFilas() const;

    int getColumnas() const;

    void colocarFicha(Ficha* ficha, int fila, int columna);
    void moverFicha(Ficha* ficha, int nuevaFila, int nuevaColumna);
    Ficha *getFicha(int fila, int columna);

    MatrizPocoPoblada getMatriz() const { return matriz; }




};

#endif // TABLERO_H
