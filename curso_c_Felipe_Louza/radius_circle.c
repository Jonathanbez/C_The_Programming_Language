#include<stdio.h>

#define PI 3.1416

int main()
{
	float radius = 0;

	printf("Insert the radius of circle: ");
	scanf("%f", &radius);

	if(radius > 0.0)
	{
		float area = PI * (radius * radius);
		printf("Area of circle: %f\n", area);
	}

	return 0;
}


