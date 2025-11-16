#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int fselectionSort(const char* archNom,size_t tam,int cmp ( const void * , const void * ) );

int cmpInt( const void *a, const void *b );

void crearArchivo(const char* archNom,int* vec,size_t tam,size_t ce);

void mostrarArchivo(const char* archNom,size_t tam);

#endif // SELECTIONSORT_H_INCLUDED
