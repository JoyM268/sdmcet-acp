/* We know that the roots of a quadratic equation of the form 
   ax^2+bx+c = 0
   are given by the following equations:
   x1 = (-b + sqrt(b^2-4ac))/(2a) 
   x2 = (-b - sqrt(b^2-4ac))/(2a)
   Write a function to calculate roots. The function must use two pointer parameters, one to receive the coefficients
   a, b, c and the other to send the roots to the calling function 
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct coefficients{
	int a, b, c;
};

struct roots{
	float root1, root2;
};


void readCoefficients(struct coefficients *);
struct roots computeRoots(struct coefficients *);
main()
{
	struct coefficients c;
	readCoefficients(&c);
	struct roots r = computeRoots(&c);
	printf("The root 1 = %.2f\n", r.root1);
	printf("The root 2 = %.2f\n", r.root2);
}

void readCoefficients(struct coefficients *c)
{
	printf("Enter the coefficients a, b, c: ");
	scanf("%d %d %d", &c -> a, &c -> b, &c -> c);
}

struct roots computeRoots(struct coefficients *c)
{
	if((pow(c -> b, 2) - 4* c -> a * c -> c) < 0) 
	{
		printf("The roots are imaginary\n");
		exit(0);
	}
	struct roots r;
	r.root1 = (float)(-(c -> b) + sqrt(pow(c -> b, 2) - 4 * c -> a * c -> c))/(2 *  c -> a);
	r.root2 = (float)(-(c -> b) - sqrt(pow(c -> b, 2) - 4 * c -> a * c -> c))/(2 * c -> a);
	return r;
}
