#include <stdio.h>
struct PAIR {
    int f1, f2;
};
struct PAIR a;

int main()
{
    struct PAIR b; ///裡面沒有初始值, 會是亂碼
    struct PAIR c={ 100, 200};///宣告的同時, 可以初始值

    printf("%d %d\n", a.f1, a.f2);
    printf("%d %d\n", b.f1, b.f2);
    printf("%d %d\n", c.f1, c.f2);

}
