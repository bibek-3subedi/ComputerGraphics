#include <stdio.h>
#include <graphics.h>
#include <math.h>

float roundOff(float a) {
    return (int)(a + 0.5f);
}

int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2, steps, k;
    float dx, dy, xincr, yincr, x, y;

    printf("Enter x1 y1: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter x2 y2: ");
    scanf("%d%d", &x2, &y2);

    initgraph(&gd, &gm, NULL);

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    xincr = dx / (float)steps;
    yincr = dy / (float)steps;

    x = x1;
    y = y1;

    for (k = 0; k <= steps; k++) {
        putpixel(roundOff(x), roundOff(y), WHITE);
        x += xincr;
        y += yincr;
        delay(50);
    }

    outtextxy(200, 20, "DDA Line");
    outtextxy(x1 + 5, y1 - 5, "(x1,y1)");
    outtextxy(x2 + 5, y2 + 5, "(x2,y2)");

    getch();
    closegraph();

    return 0;
}