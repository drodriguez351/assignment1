// David Rodriguez
// UCFID: 5676106

#include <stdio.h>
#include <math.h>

// helper method for calculateDistance()
double getDistance() {
    double x1, y1, x2, y2;
    
    printf("Point #1 entered: \nx1 = ");
    scanf("%lf", &x1);
    printf("y1 = ");
    scanf("%lf", &y1);
    
    printf("Point #2 entered: \nx2 = ");
    scanf("%lf", &x2);
    printf("y2 = ");
    scanf("%lf", &y2);

    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Calculates and returns the distance between 2 points
double calculateDistance() {
    double distance = getDistance();
    printf("Distance: %.2f\n\n", distance);
    return distance;
}

// Calculates and returns the perimeter of the circle which the 2 points encompass
double calculatePerimeter() {
    double diameter = getDistance();
    double perim = diameter * M_PI;
    printf("The perimeter of the city encompassed by your request is: %.2f\n\n", perim);
    
    return 1;
}

// Calculates and returns the area of the circle which the 2 points encompass
double calculateArea() {
    double rad = getDistance() / 2.0;
    double area = M_PI * pow(rad, 2);
    printf("The area of the city encompassed by your request is: %.2f\n\n", area);
    
    return 1;
}

// Calculates the width between 2 points
double calculateWidth() {
    double x1, y1, x2, y2;
    
    printf("Point #1 entered: \nx1 = ");
    scanf("%lf", &x1);
    printf("y1 = ");
    scanf("%lf", &y1);
    
    printf("Point #2 entered: \nx2 = ");
    scanf("%lf", &x2);
    printf("y2 = ");
    scanf("%lf", &y2);
    
    double width = fabs(x2 - x1);
    
    printf("The width of the city encompassed by your request is: %.2f\n\n", width);
    
    return 1;
}

// Calculates the height between 2 points
double calculateHeight() {
    double x1, y1, x2, y2;
    
    printf("Point #1 entered: \nx1 = ");
    scanf("%lf", &x1);
    printf("y1 = ");
    scanf("%lf", &y1);
    
    printf("Point #2 entered: \nx2 = ");
    scanf("%lf", &x2);
    printf("y2 = ");
    scanf("%lf", &y2);
    
    double height = fabs(y2 - y1);
    
    printf("The height of the city encompassed by your request is: %.2f\n", height);
    
    return 1;
}

// Where all the functions are executed
int main()
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}