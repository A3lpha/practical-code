#include<stdio.h>
int main()
{
	int phy, chem, bio, math, clanguage; //five subjects
	int      total= phy+chem+bio+math+clanguage;
	float per;
	float avg;
		/* reads marks of five subjectsfrom user */
		printf("enter five subjects marks: ");
		scanf("%d%d%d%d%d",&phy, &chem, &bio, &math, &clanguage);
		/* calculate percentage */ 
		 printf("Total Marks of %d Subjects = %0.4f\n",subjects,total);
		per = (phy + chem + bio + math + clanguage) / 5.0;
			printf("percentage = %.2f\n", per);
				/* finds grade according to the percentage */
				if(per >= 90)
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
