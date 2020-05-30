#include "types.h"
#include "stat.h"
#include "user.h"
#include "syscallc.h"

void insertar(int pos)
{
    for (int i = 1; i <= 22; i++)
    {
        if (i == 16)
        {
            /* code */
        }

    }
}

int main(int argc, char *argv[])
{

    int nsyscall = -1;
   // struct callsnumber r;
    if (argc == 2)
    {
        nsyscall = atoi(argv[1]);
    }


    else
    {
        if (nsyscall == -1)
        {

            //printf(2, "hola soy %d", r.write);

            // mostrar todas las llamadas al sistema
            // con su correspondiente numero de invocaciones
        }
        else
        {
            printf(2, "todas  las llamadas de %c", argv[2]);
            // mostrar la llamada al sistema dada en nsyscall
            // con su correspondiente numero de invocaciones
        }
    }

    exit();
}