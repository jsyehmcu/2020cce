#include <stdio.h>
struct PAIR {
    int f1, f2;
};
struct PAIR a;

int main()
{
    struct PAIR b; ///�̭��S����l��, �|�O�ýX
    struct PAIR c={ 100, 200};///�ŧi���P��, �i�H��l��

    printf("%d %d\n", a.f1, a.f2);
    printf("%d %d\n", b.f1, b.f2);
    printf("%d %d\n", c.f1, c.f2);

}
