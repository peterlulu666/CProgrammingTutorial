#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

struct Point {
    double x;
    double y;

};
struct Circle {
    double radius;
    struct Point center;

};
struct Rectangle {
    struct Point origin;
    double width;
    double height;

};

double distanceofPoints(const struct Point point_one, const struct Point point_two) {
    return sqrt(pow(point_one.x - point_two.x, 2) - pow(point_one.y - point_two.y, 2));

}

bool intersectsCircles(const struct Circle circle_one, const struct Circle circle_two) {
    return distanceofPoints(circle_one.center, circle_two.center) < (circle_one.radius + circle_two.radius);

}

struct Rectangle* getBoundingBox(const struct Circle circle, struct Rectangle* boundingBox) {
    boundingBox->origin.x = circle.center.x - circle.radius;
    boundingBox->origin.y = circle.center.y + circle.radius;
    boundingBox->height = circle.radius * 2;
    boundingBox->width = circle.radius * 2;
    return boundingBox;

}

int main() {
    struct Circle circle_one;
    circle_one.radius = 10.0;
    circle_one.center.x = 0.0;
    circle_one.center.y = 0.0;
    struct Circle circle_two;
    circle_two.radius = 10.0;
    circle_two.center.x = 21.0;
    circle_two.center.y = 0.0;
    struct Circle circle_three;
    circle_three.radius = 10.0;
    circle_three.center.x = 20.0;
    circle_three.center.y = 0.0;
    struct Circle circle_four;
    circle_four.radius = 10.0;
    circle_four.center.x = 19.0;
    circle_four.center.y = 0.0;
    if (intersectsCircles(circle_one, circle_two)) {
        printf("intersect\n");

    } else {
        printf("do not intersect\n");

    }
    if (intersectsCircles(circle_one, circle_three)) {
        printf("intersect\n");

    } else {
        printf("do not intersect\n");

    }
    if (intersectsCircles(circle_one, circle_four)) {
        printf("intersect\n");

    } else {
        printf("do not intersect\n");

    }

    struct Rectangle boundingBox;
    getBoundingBox(circle_one, &boundingBox);
    printf("%f, %f, %f, %f\n", boundingBox.origin.x, boundingBox.origin.y, boundingBox.width, boundingBox.height);
    getBoundingBox(circle_two, &boundingBox);
    printf("%f, %f, %f, %f\n", boundingBox.origin.x, boundingBox.origin.y, boundingBox.width, boundingBox.height);
    getBoundingBox(circle_three, &boundingBox);
    printf("%f, %f, %f, %f\n", boundingBox.origin.x, boundingBox.origin.y, boundingBox.width, boundingBox.height);
    getBoundingBox(circle_four, &boundingBox);
    printf("%f, %f, %f, %f\n", boundingBox.origin.x, boundingBox.origin.y, boundingBox.width, boundingBox.height);
    return 0;

}