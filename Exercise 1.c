#include <stdio.h>
int main(){

 int year;
 int age;
 printf("Enter the current year: ", year);
 scanf("%d", &year);
 printf("Enter the age: ", age);
 scanf("%d", &age);
 printf("year when you were born: %d", year-age);
 return 0;
}
 