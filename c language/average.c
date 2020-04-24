/** 
 * C program to calculate total, average and percentage of all subjects 
 */ 
   
#include <stdio.h>  
   
int main(){
    int subjects, i;  
    float marks, total=0.0f, averageMarks, percentage, grade;
    	/* finds grade according to the percentage */
   
    /* 
     * Take number of subjects as imput from user 
     */ 
    printf("Enter number of subjects\n");  
    scanf("%d", &subjects);  
   
    /* 
     * Take marks of subjects as input 
     */
    printf("Enter marks of subjects\n");  
    for(i = 0; i < subjects; i++){
     scanf("%f", &marks);
     total += marks; 
    }  
    averageMarks = total / subjects;
    /* Each subject is of 100 Marks*/ 
    percentage = (total/(subjects * 100)) * 100;  
   
    printf("Total Marks of %d Subjects = %0.4f\n",subjects,total);  
    printf("Average Marks = %.4f\n", averageMarks);  
    printf("Percentage = %.4f", percentage);

				if(per >= 90);
				{
					printf("Grade A");
			
				}
				else if(per >= 80)
				{
					printf("Grade B");
				}
				else if(per >= 70)
				{
					printf("Grade C");
				}
				else if(per >= 60)
				{
					printf("Grade D");
				}
				else if(per >= 40)
				{
					printf("Grade E");
				}
			else
			{
				printf("Grade F");
			}
			return 0;
}  
   
    

