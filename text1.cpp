#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main()
{
float a,b,c;
scanf("%f%f%f",&a,&b,&c);
printf("a*a+b*b=%f\n",pow(a,2)+pow(b,2));
printf("(a-b)*(a-b)=%f\n",pow(a-b,2));

system("pause");
}
