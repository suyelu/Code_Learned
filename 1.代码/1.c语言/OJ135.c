/*************************************************************************
	> File Name: OJ135.c
	> Author: dofo-eat
	> Mail:2354787023@qq.com 
	> Created Time: 2019年11月08日 星期五 18时19分49秒
 ************************************************************************/

#include <stdio.h>
int main() { 
    int x;
    scanf("%d", &x);
    int y, m, d;
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d %d %d", &y, &m, &d);
    if((y % 4 == 0 && y % 100 != 0)|| y % 400 == 0)
        a[2] = 29;
    x += d;
    while(x > a[m]) {
        x -= a[m];
        m++;
        if(m > 12) {
            y++;
            m -= 12;
            if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
                a[2] = 29;
            else 
                a[2] = 28;
        }
    }
    printf("%d %d %d", y, m, x);
    return 0;
}
