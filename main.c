#include <stdio.h>
#include <math.h>
const double EPS = 1e-8;

void task27() {
    printf("Task 27.\ncos^2(x)/sin(x)-xyz+(ax^2+bx+c)/(dx^3-f)\n\n");
    double x, y, z, a, b, c, d, f, res;
    printf("Enter x, y, z, a, b, c, d, f: ");
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x, &y, &z, &a, &b, &c, &d, &f);
    if(fabs(sin(x)) < EPS || fabs(d*x*x*x-f) < EPS) {
        printf("Zero division error!\n\n");
    }
    else {
        res = (cos(x)*cos(x))/sin(x)-x*y*z+(a*x*x+b*x+c)/(d*x*x*x-f);
        printf("Result: %lf\n\n", res); 
    }
}

void task30() {
    printf("Task 30.\nv0t + (at^2)/2\n\n");
    double v0, t, a, res;
    printf("Enter v0: ");
    scanf("%lf", &v0);
    printf("Enter t: ");
    scanf("%lf", &t);
    printf("Enter a: ");
    scanf("%lf", &a);
    res = v0*t+(a*t*t)/2;
    printf("Result:%lf\n\n",res);
}
void task31() {
    printf("Task 31.\nsqrt(|sin(x)|)/(x-pi)\n\n");
    double x, res;
    printf("Enter x: ");
    scanf("%lf",&x);
    if(fabs(x-M_PI)<EPS) {
        printf("Zero division error!\n\n");
    }
    else {
        res = (sqrt(fabs(sin(x)))) / (x-M_PI);
        printf("Result: %lf\n\n", res);
    }
}

void task34() {
    printf("Task 34.\n(3xR)/pi^3\n\n");
    double x, R, res;
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter  R: ");
    scanf("%lf", &R);
    res = (3*x*R)/(M_PI*M_PI*M_PI);
    printf("Result: %lf\n\n", res);
}

void task53() {
    printf("Task 53.\n1/sin(x) + |x-3|\n\n");
    double x, res;
    printf("Enter x: ");
    scanf("%lf",&x);
    if(fabs(sin(x)) < EPS) {
        printf("Zero division error!\n\n");
    }
    else {
        res = (1/sin(x)) + fabs(x-3);
        printf("Result: %lf\n\n", res);
    }
}

int main() {
    task27();
    task30();
    task31();
    task34();
    task53();
    return 0;
}
