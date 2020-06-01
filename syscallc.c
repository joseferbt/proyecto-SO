#include "syscallc.h"
#include "stat.h"
#include "types.h"
#include "user.h"

/*Callsnumber *crearLLamada(){
    Callsnumber *nueva_struct = new Callsnumber();
}*/

void verLlamadas(struct Callsnumber *rrr) {

    char nombres[22][10] = {
        "fork", "exit", "wait", "pipe", "read", "kill",
        "exec", "fstat", "chdir", "dup", "getpi", "sbrk",
        "sleep", "uptim", "open", "write", "mknod", "unlin",
        "link", "mkdir", "close", "date"

    };

    for (uint i = 0; i < 22; i++)
    {
        printf(2, "Hola soy  %s y me he repetifo %d veces \n", nombres[i], rrr->valores[i]);
  };
}

int main(int argc, char *argv[]) {
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
