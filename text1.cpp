#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main()
{
float a,b,c;
scanf("%f%f%f",&a,&b,&c);
printf("a*a+b*b=%f\n",pow(a,2)+pow(b,2));
printf("(a-b)*(a-b)=%f\n",pow(a-b,2));
printf("a*a*a+b*b*b+c*c*c-3*a*b*c=%f\n",pow(a,3)+pow(b,3)+pow(c,3)-3*a*b*c);
printf("(a+b)/(a-b)=%f\n",(a+b)/(a-b));
system("pause");
}
