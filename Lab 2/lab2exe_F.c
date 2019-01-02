#include <stdio.h>
#include <stdlib.h>

double read_dist(void);
double read_speed(void);
void calc_time(double,double);


double hr;
double min;
int main(void){
    double speed;
    double dist;

    printf("Please enter the travel distance in km: ");
    dist = read_dist();

    printf("\n");

    printf("Now enter the vehical's average speed (km/hr): ");
    speed = read_speed();
    calc_time(dist,speed);
    printf("\nYou have travel %g (km) with a speed of %g in %g hour(s) and %g minutes(s).", dist,speed,hr,min);
}

void calc_time(double dist,double speed){
    // double *hour = &hr;
    // double *minute = &min;
    // *hour = 5;
    // *minute=5;
    hr = (int)(dist/speed);
    min = 60*((dist/speed)-(int)(dist/speed));
}
double read_dist(void)
{
    double temp;
    int read = scanf("%lf", &temp);
    if (read != 1 || fgetc(stdin)!= '\n'){
        printf("Not a valid distance.");
        exit(1);
    }
    return temp;
}

double read_speed(void)
{
    double temp;
    int read = scanf("%lf", &temp);
    if (read != 1 || fgetc(stdin)!= '\n'){
        printf("Not a valid speed.");
        exit(1);
    }
    return temp;
}
