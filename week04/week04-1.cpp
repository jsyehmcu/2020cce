#include <stdio.h>
struct POINT {
  float x, y;
} p[5];
int main() {
  struct POINT a = { 3.14, 5 };
  struct POINT * p1 = &a;
  p[0] = a;
  printf("%f %f\n", a.x, a.y );

  printf("%f %f\n", p1->x, p1->y );

  p1 = &p[0];
  printf("%f %f\n", p1->x, p1->y );

  printf("sizeof(struct POINT):%d\n", sizeof(struct POINT) );
  printf("sizeof(p1): %d\n", sizeof(p1));
  printf("sizeof(*p1): %d\n", sizeof(*p1));
  return 0;
}
