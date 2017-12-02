#include <stdio.h>
#include <math.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
  int distance=100;
  int age=40;
  int miles=93000000;
  int minute=30;
  int hour=8;

  // this is also a comment
  printf("You are %d miles away.\n", distance);
  printf("You are %d years old. Damn, you old.\n", age);
  printf("The sun is %d miles away.\n", miles);
  printf("It is %d minutes past %d.\n", minute, hour);
  fprintf(stdout, "pi = %.5f\n", 4 * atan(1.0));

  return 0;
}
