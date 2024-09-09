//********************************************************
// fracturing.c
// Author: Carlos Colmenares Mendez
// Date: 08/29/24
// Class: COP 3223C, Professor Parra
// Purpose: This program asks the user for two coodinate points
// and calculates the distance between them, perimeter, area,
// width, length of a city.
// Input: Coordinates of point 1 and point 2.
//
// Output: (to the command line) A brief Message
// //********************************************************

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159


double calculateDistance(){
    int x1;
    int x2;
    int y1;
    int y2;
    
    printf("Please enter the integer values of x1, x2, y1, y2, respectively: ");
    
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &y1);
    scanf("%d", &y2);

    printf("Point #1 entered: (%d, %d)\nPoint #2 entered: (%d, %d)\n", x1, y1, x2, y2);

    double distance = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2));
    return distance;
}

//NOTE: Calculating the perimeter and below can only work only if one point is on the circle 
// and another is at the center of the circle (which makes the radius).
double calculatePerimeter(){
    double perimeter = 2*PI*calculateDistance();

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    
    return 1;
}

double calculateArea(){
    double area = PI * pow(calculateDistance(), 2);
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    return 1;
}

double calculateWidth(){
    int x1;
    int x2;
    int y1;
    int y2;
    
    printf("Please enter the integer values of x1, x2, y1, y2, respectively: ");
    
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &y1);
    scanf("%d", &y2);

    printf("Point #1 entered: (%d, %d)\nPoint #2 entered: (%d, %d)\n", x1, y1, x2, y2);

    double width = abs(x2 - x1);
    printf("The width of the city encompassed by your request is %.2lf\n", width);
    return 1;
}

double calculateHeight(){
    int x1;
    int x2;
    int y1;
    int y2;
    
    printf("Please enter the integer values of x1, x2, y1, y2, respectively: ");
    
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &y1);
    scanf("%d", &y2);

    printf("Point #1 entered: (%d, %d)\nPoint #2 entered: (%d, %d)\n", x1, y1, x2, y2);

    double height = abs(y2 - y1);
    printf("The height of the city encompassed by your request is %.2lf\n", height);
    return 1;
}

int main(int argc, char **argv){
    double distance = calculateDistance();
    printf("The distance between the two points is %.2lf\n", distance);
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}