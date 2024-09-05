#include <stdio.h>
#include <math.h>


double calculateDistance() {
    double x1, y1, x2, y2;
    
    printf("Point #1 entered: \nx1 = ");
    scanf("%lf", &x1);
    printf("y1 = ");
    scanf("%lf", &y1);
    
    printf("Point #2 entered: \nx2 = ");
    scanf("%lf", &x2);
    printf("y2 = ");
    scanf("%lf", &y2);
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Distance: %.2f\n", distance);
    
    return distance;
}

double calculatePerimeter() {
    double diameter = calculateDistance();
    double perim = diameter * M_PI;
    printf("The perimeter of the city encompassed by your request is: %.2f\n", perim);
    
    return 1;
}

double calculateArea() {
    double rad = calculateDistance() / 2.0;
    double area = M_PI * pow(rad, 2);
    printf("The area of the city encompassed by your request is: %.2f\n", area);
    
    return 1;
}

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
    
    printf("\nThe width of the city encompassed by your request is: %.2f\n", width);
    
    return 1;
}

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
    
    printf("\nThe height of the city encompassed by your request is: %.2f\n", height);
    
    return 1;
}

int main()
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}