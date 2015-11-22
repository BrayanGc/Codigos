
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

float euler = 1, k;
int input;

printf("Enter value ");
scanf("%d", &input);

for (k = 1; k <= input; k++)
{
euler = euler + 1.0/tgamma(k+1);
}
printf("euler number is %f\n", euler);

return 0;
}
