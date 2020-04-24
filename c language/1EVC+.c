#include<stdio.h>
int main()
{
	int pass, choice, number, money, balance, subchoice;
	balance=300;
	printf("Fadlan Geli Pinkaga: ");
	scanf("%d", &pass);
	if (pass==4595)
	{
	//	system("cls");
		printf ("Welcome To EVC Plus\n");
		printf("1. Itus Haraaga\n");
		printf("2. Ku Shubo Lacag\n");
		printf("3. Bixi Biilka");
		printf("4. Uwareeji Lacag\n");
		printf("5. Warbixin Kooban\n");
		printf("6. Bank Salaam\n");
		printf("7. Mareynta\n");
		printf("8. Taaaj Money Transfer\n");
		printf("9. Ka Bax\n");
		printf("Enter Your Choice Here: ");
		scanf("%d", &choice);
	}
	else 
	printf("Your Password is incoreect pls try again\n");
	
	if (choice==1)
	{
	//	system("cls");
		printf("Haraaga waa $ %d \n", balance);
		
	}
	else if (choice==2)
	{
	//	system("cls");
		printf("1. Ku Shubo Air Time\n");
		printf("2. Ugu shub Qof kale Air Time\n");
		printf("3. Ka Bax\n");
		printf("Enter Your Choice Here: ");
		scanf("%d", & subchoice);
		if (subchoice==1)
		{
		//	system("cls");
	printf("Soo gali lacag aad rabtid inaad ku shubato: ");
	scanf("%d", &money);
printf("Ma hubtaa inaad ku shubanaysid lacag dhan $ %d ?", money);
			printf("\n1. Haa\n 2. Maya\n");
			scanf("%d", &subchoice);
			if (subchoice==1)
			printf("waxaad ugu shubtay lacag dhan $ %d Haraaga waa $ %d\n",money, balance-money);
			else 
			printf("Macsaaalama\n");
			
		}
		else if (subchoice==2)
		{
		//	system("cls");
			printf("Soo gali Numberka aad lacagta ugu shubaysid: ");
			scanf("%d", &number);
			printf("Soo gali lacagt aad ugu shubaysid: ");
			scanf("%d", &money);
			printf("Ma hubtaa inaad ugushubaytid numberkan %d lacag dhan $ %d ?\n", number, money );
			printf("\n1. Haa \n 2. Maya\n");
			scanf("%d", &subchoice);
			if (subchoice==1)
			printf("waxaad ugu shubtay lacag dhan $ %d Haraagaa waa $ %d\n", money, balance-money);
			else 
			printf("Macalaaama\n");
			
		}
		else 
		printf("Macsalaaama\n");
	}
	
	return 0;
}

