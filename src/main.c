#include "selectionSort.h"

int main()
{
    const char archNom[]="archivo.dat"; //modificar por la ruta/nombre del archivo

    size_t tam=sizeof(int);
    //int vec[]={29,72,98,13,87,66,52,51,36};
    //int ce=sizeof(vec)/sizeof(vec[0]);

    printf("ARCHIVO DESORDENADO\n");
    //crearArchivo(archNom,vec,tam,ce);
    mostrarArchivo(archNom,tam);

    fselectionSort(archNom,tam,cmpInt ); //pasar la función que corresponda y el tamaño de cada registro

    printf("\n\n");
    printf("ARCHIVO ORDENADO\n");
    mostrarArchivo(archNom,tam);

    return 0;
}
