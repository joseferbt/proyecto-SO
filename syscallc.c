#include "types.h"
#include "stat.h"
#include "user.h"
#include "syscallc.h"

int main(int argc, char *argv[])
{
    int nsyscall = -1;
    struct callsnumber sysclln;
    if (argc == 2)
    {
        nsyscall = atoi(argv[1]);
    }
    if (nsyscall == -1)
    {

        printf(3, "%d", sysclln.exit);

        // mostrar todas las llamadas al sistema
        // con su correspondiente numero de invocaciones
    }
    else
    {
        printf(2, "todas  las llamadas de %c", argv[2]);
        // mostrar la llamada al sistema dada en nsyscall
        // con su correspondiente numero de invocaciones
    }
    exit();
}
