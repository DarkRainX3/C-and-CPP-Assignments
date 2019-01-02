/*
*  lab1exe_D.c
*  ENSF - Fall 2018 Lab 1, exercise D
*  Completed by: Student Name
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define G 9.8   /* gravitation acceleration 9.8 m/s^2 */
#define PI 3.141592654

void create_table(double v);
double Projectile_travel_time(double a, double v);
double Projectile_travel_distance(double a, double v);
double degree_to_radian(double d);

int main(void)
{
    int n;
    double velocity;

    printf ("please enter the velocity at which the projectile is launched (m/sec): ");
    n = scanf("%lf" ,&velocity);

    if(n != 1)
    {
        printf("Invlid input. Bye...");
        exit(1);
    }

    while (velocity < 0 )
    {
        printf ("please enter a positive number for velocity: ");
        n = scanf("%lf", &velocity);
        if(n != 1)
        {
            printf("Invlid input. Bye...");
            exit(1);
        }
    }

  create_table(velocity);

    return 0;
}

void create_table(double v){
    printf ("Angle     T        D\n");
    for (int i =0; i<=90; i+=5){
        printf ("%d    %lf   %lf\n",i, Projectile_travel_time(degree_to_radian(i),v),Projectile_travel_distance(degree_to_radian(i),v));
    }
}
double Projectile_travel_time(double a, double v){
    return (2*v*sin(a)/G);
}

double Projectile_travel_distance(double a, double v){
    return ((v*v/G)*sin(2*a));
}

double degree_to_radian(double d){
    return (d*PI/180);
}
