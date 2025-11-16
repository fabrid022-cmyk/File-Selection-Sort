#include "selectionSort.h"

int cmpInt( const void *a, const void *b )
{
    return (*((int*)a)-*((int*)b));
}

int fselectionSort(const char* archNom,size_t tam,int cmp ( const void * , const void * ) )
{
    FILE* pf;
    size_t ce=0;
    void* menor;
    void* dato;
    void* aux;
    int posMenor=0;
    pf=fopen(archNom,"r+b");

    if(!pf)
        return 0;

    fseek(pf,0,SEEK_END);
    ce=ftell(pf)/tam;

    if(ce==0)
        return 1;

    dato=malloc(tam);

    menor=malloc(tam);

    aux=malloc(tam);

    fseek(pf,0,SEEK_SET);

    for(int i=0;i<ce;i++)
    {
        fseek(pf,i*tam,SEEK_SET);
        fread(dato,tam,1,pf);

        for(int j=(i+1);j<ce;j++)//busco el menor
        {
            fseek(pf,j*tam,SEEK_SET);
            fread(aux,tam,1,pf);
            if( j==(i+1) || cmp(aux,menor)<0 ) //si es la primer entrada es el menor o si es "menor" que el menor actual.
            {
                memcpy(menor,aux,tam);
                posMenor=j;
            }
        }

        if( cmp(menor,dato)<0 )//si el menor encontrado es menor que el último en ser actualizado lo intercambio
        {
            fseek(pf,i*tam,SEEK_SET);
            fwrite(menor,tam,1,pf);

            fseek(pf,posMenor*tam,SEEK_SET);
            fwrite(dato,tam,1,pf);
        }
    }

    //liberamos memoria y cerramos el archivo
    free(dato);
    free(menor);
    free(aux);
    fclose(pf);

    return 1;
}

void crearArchivo(const char* archNom,int* vec,size_t tam,size_t ce)
{
    FILE* pf;

    pf=fopen(archNom,"wb");

    if(!pf)
        return;

    for(int i=0;i<ce;i++)
    {
        fwrite(&vec[i],tam,1,pf);
    }

    fclose(pf);
}

void mostrarArchivo(const char* archNom,size_t tam)
{
    FILE* pf;
    void* dato;

    pf=fopen(archNom,"rb");

    if(!pf)
        return;

    dato=(void*)malloc(tam);

    while( fread(dato,tam,1,pf) )
    {
        printf("%d\n",*((int*)dato));
    }

    fclose(pf);
    free(dato);
}
