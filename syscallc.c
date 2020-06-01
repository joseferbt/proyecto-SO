#include "types.h"
#include "stat.h"
#include "user.h"
#include "syscallc.h"


/*Callsnumber *crearLLamada(){
    Callsnumber *nueva_struct = new Callsnumber();
}*/
void verLlamadas(struct Callsnumber *rrr){
    printf(2, "hola, soy: %d", rrr->valores[0]);
    printf(2, "hola, soy: %d", rrr->dup);
}


int main(int argc, char *argv[])
{
    

        int nsyscall = -1;
    // struct Callsnumber r;
    if (argc == 2)
    {
        nsyscall = atoi(argv[1]);
    }

    

    else
    {
        if (nsyscall == -1){
            verLlamadas(&rr);
        }
        

            // mostrar todas las llamadas al sistema
            // con su correspondiente numero de invocaciones
        
        else
        {
            printf(2, "todas  las llamadas de %c", argv[2]);
            // mostrar la llamada al sistema dada en nsyscall
            // con su correspondiente numero de invocaciones
        }
    }

    exit();
}