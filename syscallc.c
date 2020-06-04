#include "syscallc.h"
#include "stat.h"
#include "types.h"
#include "user.h"

/*Callsnumber *crearLLamada(){
    Callsnumber *nueva_struct = new Callsnumber();
}*/

    char nombres[21][6] = {
        "fork", "exit", "wait", "pipe", "read", "kill",
        "exec", "fstat", "chdir", "dup", "getpi", "sbrk",
        "sleep", "uptime", "open", "write", "mknod", "unlin",
        "link", "mkdir", "close"};
void verLlamadas(struct Callsnumber *rrr) {

    for (uint i = 0; i < 21; i++)
    {
        printf(2, "Hola soy %s y me he repetido %d veces \n", nombres[i], rrr->valores[i]);
  };
}
 
void isACall(char palabra[],struct Callsnumber r){
 for(int j=0;j<21;j++){	
  if(strcmp(palabra,nombres[j])==0){
   printf(2, "hola, soy %s y tengo %d llamadas \n", palabra,r.valores[j]);
   break;
  }
 }

}

int main(int argc, char *argv[]) {
  struct Callsnumber r;
  syscallc(&r);
  char nombre[6];
  int nsyscall = -1;

  if (argc == 2) {
    nsyscall = atoi(argv[1]);
  
    strcpy(nombre,argv[1]);
  }
  if (nsyscall == -1) {
    verLlamadas(&r);
  } else {
   

  isACall(nombre,r);
    
  }
  exit();
}
