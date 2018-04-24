#include <string.h>
#include <stdio.h>
#include "UsuariosySeries.h"
void mostrarUsuarioConSerie(eUsuario usuarios[], eSerie series[],int cantUsuarios, int cantSeries )
{
     {
    int i;
    int j;
    for(i=0;i<cantUsuarios;i++)
        {
            if(usuarios[i].estado==1)
            {
                printf("\n %s \n", usuarios[i].nombre);
                for(j=0;j<cantSeries;j++)
                {

                        if(usuarios[i].idSerie==series[j].idSerie)
                        {

                           printf(" %s ", series[j].nombre);
                        }

                }
            }





        }


    }
}
void mostrarSerieConUsuario(eUsuario usuarios[], eSerie series[],int cantUsuarios, int cantSeries )
{
     {
    int i;
    int j;
    for(i=0;i<cantSeries;i++)
        {
            if(series[i].estado==1)
            {
                printf("\nSerie: %s\n", series[i].nombre);
                for(j=0;j<cantUsuarios;j++)
                {
                    if(usuarios[j].idSerie==series[i].idSerie)
                    {
                        printf("%s, ", usuarios[j].nombre);
                    }
                }
            }
        }
    }
}

