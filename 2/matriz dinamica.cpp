#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int main()
{
    srand(time(NULL));
    //variables para filas y columnas
    int filas, columnas;
    //entrada de datos
    cout << "Ingrese cant. filas : "; cin >> filas;
    cout << "Ingrese cant. columnas: "; cin >> columnas;

    //variables para la matriz
    int** matriz;
    //arreglo de total filas
    int* total_filas = new int[filas];
    //arreglo de total columnas 
    int* total_columnas = new int[columnas];
    //crea la matriz
    //1. crea un arreglo de punteros
    matriz = new int* [filas];
    //2. por cada elemento se crea un nuevo arreglo de tam columnas
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[columnas];
    }
    //generar datos para la matriz
    for (int f = 0; f < filas; f++)
    {
        for (int c = 0; c < columnas; c++)
        {
            matriz[f][c] = rand() % 10;
        }
    }
    //imprime la matriz
    cout << endl;
    for (int f = 0; f < filas; f++)
    {
        for (int c = 0; c < columnas; c++)
        {
            cout << matriz[f][c];
        }
        cout << endl;
    }

    //calcula los totales por fila
    int total = 0;
    for (int f = 0; f < filas; f++)
    {
        for (int c = 0; c < columnas; c++)
        {
            total = total + matriz[f][c];
        }
        total_filas[f] = total;
        total = 0;
        cout << endl;
    }
    //imprime la matriz con el total de filas
    cout << endl << "total de filas" << endl;
    for (int f = 0; f < filas; f++)
    {
        for (int c = 0; c < columnas; c++)
        {
            cout << matriz[f][c];
        }
        cout << "\t" << total_filas[f];
        cout << endl;
    }
    //calcula los totales por columna
    int total2 = 0;
    int e = 0;
    for (int f = 0; f < filas; f++) {
        for (int c = 0; c < columnas; c++) {
            if (c == e && e<columnas) {
                total2 = total + matriz[f][c];
                e++;
            }
        }
    }
    system("pause>0");
    return 0;
}