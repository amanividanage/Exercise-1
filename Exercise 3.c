//Getting the average of 3 values

#include <stdio.h>
int main()
{
	
	int grade1,grade2,grade3;
	double average;
	printf("Enter grade 1:\n");
	scanf("%d" , &grade1);
	printf("Enter grade 2:\n");
	scanf("%d " , &grade2);
	printf("Enter grade 3:\n");
	scanf("%d " , &grade3);
	average = (grade1+ grade2+ grade3)/3.0;
	printf("The average is %lf" , average);
	return 0;
	  
	
}