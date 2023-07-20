#include <stdio.h>
#include <math.h>
#define PI 3.14159
// Function to calculate the area of a circle
double circleArea(double radius) {
    return PI * radius * radius;
}
// Function to calculate the perimeter of a circle
double circlePerimeter(double radius) {
    return 2 * PI * radius;
}
// Function to calculate the area of a rectangle
double rectangleArea(double length, double width) {
    return length * width;
}
// Function to calculate the perimeter of a rectangle
double rectanglePerimeter(double length, double width) {
    return 2 * (length + width);
}
// Function to calculate the area of a square
double squareArea(double side) {
    return side * side;
}
// Function to calculate the perimeter of a square
double squarePerimeter(double side) {
    return 4 * side;
}
// Function to calculate the area of a triangle
double triangleArea(double base, double height) {
    return 0.5 * base * height;
}
// Function to calculate the perimeter of a triangle
double trianglePerimeter(double side1, double side2, double side3) {
    return side1 + side2 + side3;
}
int main() {
    double radius, length, width, side, base, height;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    printf("Enter the length and width of the rectangle: ");
    scanf("%lf %lf", &length, &width);
    printf("Enter the side length of the square: ");
    scanf("%lf", &side);
    printf("Enter the base and height of the triangle: ");
    scanf("%lf %lf", &base, &height);
    double circleAreaValue = circleArea(radius);
    double circlePerimeterValue = circlePerimeter(radius);
    double rectangleAreaValue = rectangleArea(length, width);
    double rectanglePerimeterValue = rectanglePerimeter(length, width);
    double squareAreaValue = squareArea(side);
    double squarePerimeterValue = squarePerimeter(side);
    double triangleAreaValue = triangleArea(base, height);
    double trianglePerimeterValue = trianglePerimeter(base, side, height);
    printf(" Circle:\nArea: %.2lf\nPerimeter: %.2lf\n", circleAreaValue,circlePerimeterValue);
    printf("Rectangle:\nArea: %.2lf\nPerimeter: %.2lf\n", rectangleAreaValue,rectanglePerimeterValue);
    printf("Square:\nArea: %.2lf\nPerimeter: %.2lf\n", squareAreaValue, squarePerimeterValue);
    printf("Triangle:\nArea: %.2lf\nPerimeter: %.2lf\n", triangleAreaValue, trianglePerimeterValue);
    return 0;
}