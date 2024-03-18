#include <stdio.h>

int main()
{
   int NoC, week, countdown;
   float birthrate;
   printf("Enter number of chickens, weeks and birthrate: \n");
   scanf("%d", &NoC);
   scanf("%d", &week);
   scanf("%f", &birthrate);
   for(countdown = 0; countdown < week; countdown++)
   NoC = NoC + NoC* birthrate;
   printf("Number of chickens after weeks: %d\n", NoC);
}