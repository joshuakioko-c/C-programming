// program to display the volume and the surface area of a cylinder

/*
Name: Joshua Kioko
Admn NO: BCS-03-0067/2026
Date: 21/5/2026
Version 1
*/
#include <stdio.h>

int main(){
	float radius;
	float height;
	float volume, surface_area;
	float pi = 3.141592654;
	
	printf("Enter the radius: \n");
	scanf("%f", &radius);
	
	printf("Enter the height: \n");
	scanf("%f", &height);
	
	volume = pi * radius * radius * height;
	surface_area = 2 * pi * radius * radius + 2 * pi * radius * height;
	
	printf("The volume is %f \n", volume);
	printf("The surface area is %f \n", surface_area);
	
	return 0;
}