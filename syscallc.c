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

int
main(int argc, char *argv[])
{
struct Callsnumber r;
syscallc(&r);

 int nsyscall = -1;
 if (argc == 2) {
  nsyscall = atoi(argv[1]);
 }
 if (nsyscall == -1) {
  verLlamadas(&r);
 } else {
  printf(2, "hola, soy %s ", argv[1]);
 }
 exit();
}

