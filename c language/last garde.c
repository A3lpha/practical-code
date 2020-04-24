#include<stdio.h>
int main()
{
	int s1, s2, s3, s4, s5, s6, s7, total;
	float avg;
	char grade;
	printf("Welcome to student markshet program\n");
	printf("====================================\n");
	   printf("Enter marks of subject1:");
	   scanf("%d", &s1);
	   printf("enter marks of subject2:");
	   scanf("%d", &s2);
	   printf("enter marks of subject3:");
	   scanf("%d", &s3);
	   printf("enter marks of subject4:");
	      scanf("%d", &s4);
	         printf("enter marks of subject5:");
	           scanf("%d", &s5);
	              printf("enter marks of subject6:");
	              scanf("%d", &s6);
	                 printf("enter marks of subject7:");
	                 scanf("%d", &s7);
	                 //Total aya lasameyna 
	                 total=s1+s2+s3+s4+s5+s6+s7;
	                 printf("Your total is: %d \n", total);
	                 //average aya laso bandhigaa
	                 avg=total/7;
	                 printf("Your Average is %.2f %% \n", avg);
	                 // Grade Ayaa lasameynaa
	                 if(avg>=0 && avg<50)
	                 {
	                 	grade='F';
						 printf("Your Grede is : %c \n", grade);
					 }
					 else if (avg>50 && avg<60)
					 {
					 	grade='E';
					 	printf("your grade is : %c \n", grade);
					
					 }
					 else if (avg>60 && avg<70)
					 {
					 	grade='D';
					 	printf("your grade is : %c \n", grade);
					 	
				   }
					 else (avg>70 && avg<80)
					 {
					 	grade='C';
					 	printf("Your grade is : %c \n", grade);
					 }
	                 else (avg>80 && avg<90)
	                 {
	                 	grade='B';
	                 	printf("Your grade is : %c \n", grade);
	                 	
					 }
					 else(avg>90 && avg<=100)
					 {
					 grade='A';
					 printf("Your grade is : %c \n", grade);
				}
				else
				printf("Out of Range\n");
				
				//Result
				if(grade=='F')
				printf("Your result is failled\n");
				else if(grade=='E')
				printf("your result is accepted\n");
				else if(grade=='D')
				printf("Your result is Good\n");
				else if(grade=='C')
				printf("Yuor result is Good\n");
				else if(grade=='B')
				printf("Your result is Very Good\n");
				else if(grade=='A')
				printf("Your garde is Excellent\n")
				else
				printf("Unkown Result");
				return 0;
				
				
	                 
}
