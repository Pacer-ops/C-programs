/*
Author: Michael Joe Mwema
Reg no: BCS-05-0209/2026
Description: C program that prompts the user for radius and height then calculates the volume and surface area using the provided formula
Date: 19/09/2026
*/

//pre-processor directive
#include <stdio.h> //printf(),scanf()
#include <math.h>//stores decimal numbers
#define PI 3.142

int main(){
	double radius, height;
	double volume, surface_area;
	
	//Prompting the user for radius and height
	printf("Enter the radius of the cylinder(In centimetres):");
	scanf("%lf" ,&radius);
	
	printf("Enter the height of the cylinder(In centimetres):");
	scanf("%lf" ,&height);
	
	//Calculating volume = PI*r^2*h
	volume = PI * radius * radius * height;
	
	//Calculating surface area = 2*PI*r^2+2*PI*r*h
	surface_area = (2 * PI * radius * radius) + (2 * PI * radius * height);
	
	//Display results to 2 decimal places
	printf("\n--- Results ---\n");
	printf("Volume of the cylinder: %.2f\n" ,volume);
	printf("Surface area of the cylinder: %.2f\n" ,surface_area);
	
	return 0;
	
}