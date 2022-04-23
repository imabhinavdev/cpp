#include <stdio.h>
#include <math.h>

void main()
{
    float x, y, r = 0, t;
    printf("Enter the value of x and y :- ");
    scanf("%f %f", &x, &y);
    r = sqrt((x * x) + (y * y));
    t = atan(y / x);
    t = t * (180 / 3.14);
    printf("The polar co-ordinates are (%.2f,%.3f)", r, t);
}
