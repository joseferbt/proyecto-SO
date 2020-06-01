// System call numbers
struct Callsnumber
{
    uint valores[22];
    uint fork;
    uint exit;
    uint wait;
    uint pipe;
    uint read;
    uint kill;
    uint exec;
    uint fstat;
    uint chdir;
    uint dup;
    uint getpi;
    uint sbrk;
    uint sleep;
    uint uptim;
    uint open;
    uint write;
    uint mknod;
    uint unlin;
    uint link;
    uint mkdir;
    uint close;
    uint date;
};

struct Callsnumber rr;

struct Callsnumber *crearLLamada();
void insertarLlamada( int cantidad);
void fill_llamadas(struct Callsnumber *rrr);
void verLlamadas(struct Callsnumber *rrr);
