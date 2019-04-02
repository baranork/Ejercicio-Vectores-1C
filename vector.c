int cargarVector(int vector[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }
    return vector;
}

void mostrarVector (int vector[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d\n", vector[i]);
    }
}

int contarMayor(int vector[], int tam)
{
    int i;
    int mayor;
    int flag = 0;

    for(i=0; i<tam; i++)
    {
        if(vector[i]>mayor||flag == 0)
        {
            mayor = vector[i];
            flag = 1;
        }
    }


    return mayor;

}

void buscarValor(int vector[], int tam, int valorBusqueda)
{
    int i;
    int flag = 0;
    int posicion;

    for(i=0; i<tam; i++)
    {
        if(vector[i] == valorBusqueda)
        {
            posicion = i;
            flag = 1;
        }



    }
    if(flag == 1)
    {
        printf("El numero %d se encuentra en la posicion %d\n", valorBusqueda, posicion);
    }
    else
    {
        printf("No se ha encontrado el numero\n");
    }
}


