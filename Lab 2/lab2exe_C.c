/*
 *
 * lab2exe_C.c
 * ENSF 337 - Lab 2 - Execise C
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void time_convert(int ms_time, int *minutes_ptr, double *seconds_ptr);
/*
 * Converts time in milliseconds to time in minutes and seconds.
 * For example, converts 123400 ms to 2 minutes and 3.4 seconds.
 * REQUIRES
 *    ms_time >= 0.
 *    minutes_ptr and seconds_ptr point to variables.
 * PROMISES
 *    0 <= *seconds_ptr & *seconds_ptr < 60.0
 *    *minutes_ptr minutes + *seconds_ptr seconds is equivalent to
 *    ms_time ms.
 */

int main(void)
{
  int millisec;
  int minutes;
  double seconds;
  int nscan;

  printf("Enter a time interval as an integer number of milliseconds: ");
  nscan = scanf("%d", &millisec);
  if (nscan != 1) {
    printf("Unable to convert your input to an int.\n");
    exit(1);
  }

  printf("Doing conversion for input of %d ms ... \n", millisec);

  time_convert(millisec, &minutes ,&seconds);

  printf("That is equivalent to %d minute(s) and %f second(s).\n", minutes,
	 seconds);

  return 0;
}

void time_convert(int ms_time, int *minutes, double *seconds_ptr){
    //assert(ms_time>=0 && "negative milliseconds");
    if (ms_time<0){
        printf("Cannot have neg time");
        exit(1);
    }
    *seconds_ptr = (ms_time%60000)/1000.0;
    *minutes = ms_time/60000;
}
