// Ô²ÖùÌåÌå»ý
#include <stdio.h>

int main(void)
{
	float pi = 3.14;
	float r, h, s, v;
	scanf_s("%f %f", &r, &h);
	s = pi * r * r;
	v = s * h;
	printf("area=%.2f,volume=%.2f", s, v);
}