#include "types.h"
#include "user.h"
#include "date.h"

int main(int argc, char *argv[])
{
  struct rtcdate r;

  if (date(&r))
  {
    printf(2, "date failed\n");
    exit();
  }

  printf(2, "%d:%d:%d de %d/%d/%d", r.hour, r.minute, r.second, r.day, r.month, r.year);

  exit();
}
