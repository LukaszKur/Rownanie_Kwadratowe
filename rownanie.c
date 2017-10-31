# include <stdio.h>
# include <math.h>
int a,b,c;
int delta,x1,x2;
int main()
{
printf("Podja wartosc a: ");
scanf("%i",&a);
if(a==0)
{
printf("Podana wartość dla a nie moze wynosic 0 !!!\n");
}
else
{
printf("Podaj wartosc b: ");
scanf("%i",&b);
printf("Podaj wartosc c: ");
scanf("%i",&c);
delta=0;
delta=(b*b)-(4*a*c);
printf("Delta wynosi: %i\n",delta);
  if (delta>0)
	{
	delta=sqrt(delta);
	x1=((-b-delta)/2*a);
	x2=((-b+delta)/2*a);
	printf("Rownanie kwadratowe ma dwa pierwiastki: \n");
	printf("X1: %i\n",x1);
	printf("X2: %i\n",x2);
	}
	else
	{
	if(delta==0)
		{
		x1=-b/2*a;
		printf("Rownanie kwadratowe ma jeden pierwiastek: \n");
		printf("X1: %i\n",x1);
		}
		else
		{
		printf("Rownanie nie ma pierwiastkow !\n");
		return 0;
		}
	}
    }
return 0;
}
