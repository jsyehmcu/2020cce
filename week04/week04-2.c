#include <stdio.h>
struct _POINT {
  float x, y;
};
typedef struct _POINT POINT;
POINT p[5];
int main() {
  POINT a = { 3.14, 5 };
  POINT * p1 = &a;
  p[0] = a;
  printf("%f %f\n", a.x, a.y );

  printf("%f %f\n", p1->x, p1->y );

  p1 = &p[0];
  printf("%f %f\n", p1->x, p1->y );

  return 0;
}

