// System call numbers
struct Callsnumber
{
    int valores[22];
    int fork;
    int exit;
    int wait;
    int pipe;
    int read;
    int kill;
    int exec;
    int fstat;
    int chdir;
    int dup;
    int getpi;
    int sbrk;
    int sleep;
    int uptim;
    int open;
    int write;
    int mknod;
    int unlin;
    int link;
    int mkdir;
    int close;
    int date;
};

struct Callsnumber *crearLLamada();
void insertarLlamada(struct Callsnumber *rr, int cantidad);