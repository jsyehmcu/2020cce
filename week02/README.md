# 標題後面要有空格
#忘了按空格就不是標題

```C++
#include <stdio.h>
struct DATA {
    int x, y;
} a[3] ;
struct DATA b = {100, 200};///變數的大小寫要注意
int main()
{
    for(int i=0; i<3; i++){
        printf("a[%d]:%d %d\n", i, a[i].x, a[i].y );
    }
    printf("b: %d %d\n", b.x, b.y );

    struct DATA c;
    printf("c: %d %d 像亂碼\n", c.x, c.y);

    c = b; ///較好的寫法: c.x = b.x;  c.y = b.y;
    printf("c: %d %d\n", c.x, c.y);

}

```
