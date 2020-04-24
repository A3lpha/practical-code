#include<stdio.h>
int main()
{
int a,b,c,d,f,z,x,l,n,m;
int e=300;
printf("\n -EVCPLUS- ");
printf("\nFadlan gali PIN-kaaga: ");
scanf("%d", &a);
if(a==5555){
printf("\n EVCPLUS_> \n");
printf("1.Itus haraaga\n");
printf("2.kaarka Hadalka\n");
printf("3.Bixi biil\n");
printf("4.U wareeji EVCPLUS\n");
printf("5.Waxbixin Kooban\n");
printf("6.Maareynta\n");
printf("7.Ka Bax\n");
scanf("%d", &b);
if(b<=1){
printf("\n[-EVCPLUS-] haraagaaguwaa $%d\n" ,e);
}
else if(b<=2){
	printf("\n kaarka Hadalka-> ",b);
	printf("\n 1. ku shubo Airtime",b);
	printf("\n 2.Ugu shub Airtime ",b);
	printf("\n 3.ka bax ",b);
	scanf("%d", &b);
	
   if(b<=1){
   	printf("\n Ku shubo Airtime-> ",b);
 	printf("\n Geli lacagta aad ku shubaneysid\n ",b);
	scanf("%d",&m);
	printf("\n EVCPLUS-> \n Ma hubtaainaad $%d ku shubaneysid 618011706?\n 1.Haa\n 2.Maya ",m);
	scanf("%d", &b);
		if(b<=1){
		n=e-m;
		printf("\n[-EVCPLUS-] $%d ayaad kushubatey 616570672,haraagaaguwaa $%d.\n ",m,n);
		}
		else if(b<=2){
		printf("macasalaama \n");
		}
   }
	else if(b<=2){
	printf("\n Ugu shub Airtime\n geli mobileka ");
	scanf("%d", &c);
	printf("\n Ugu shub Airtime\n geli lacagta ",b);
	scanf("%d", &m);
	n=e-m;
	printf("\n Ugu shub Airtime\n mahubtaa inaad $%d ugu shubtid  %d? \n 1.haa\n 2.maya ",m,c,b);
	scanf("%d", &b);
		if(b<=1){
		printf("\n[-EVCPLUS-] $%d ayaad kushubatey %d,haraagaaguwaa $%d.\n ",m,c,n);
		}
		else if(b<=2){
		printf("macasalaama \n");
		}
		else if(b<=3){
		printf("macasalaama \n");
		}
   }
}
else if(b<=3){
printf("\n Bixi biil-> ");
printf("\n 1. post paid");
printf("\n 2. ku iibso");
printf("\n 3. kabax ");
scanf("%d", &b);
	if(b<=1){
	printf("\n post paid-> ");
	printf("\n1. Ogow Biilka. ");
	printf("\n2. Bixi Biil. ");
	printf("\n3.ka bax. ");
	scanf("%d", &b);
		if(b<=1){
		printf("\n Ogow Biilka-> ");
		printf("\n Dooro shirkada biilka. ");
		printf("\n 1.HORMUUD ");
		scanf("%d", &b);
		printf("\n Ogow Biilka-> ");
		printf("\n Dooro Nooca Biilka. ");
		printf("\n 1.POSTPAID ");
		scanf("%d", &b);
		printf("\n Ogow Biilka-> ");
		printf("\n Geli Number-ka ");
		scanf("%d", &c);
		}
		else if(b<=2){
		printf("\n bixi biil-> ");
		printf("\n Dooro shirkada biilka. ");
		printf("\n 1.HORMUUD ");
		scanf("%d", &b);
		printf("\n bixi biil-> ");
		printf("\n Dooro Nooca Biilka. ");
		printf("\n 1.POSTPAID ");
		scanf("%d", &b);
		printf("\n bixi biil-> ");
		printf("\n Geli Number-ka ");
		scanf("%d", &c);
		}
		else if(b<=3){
		printf("macasalaama \n");
		}
	}
	else if(b<=2){
	printf("\n ku iibso->\n ");
	printf("\n Geli Number-ka ganacsadaha");
	scanf("%d", &c);
	printf("\n ku iibso->\n ");
	printf("\n Geli lacagta ganacsadaha");
	scanf("%d", &m);
	printf("\n ku iibso->\n ");
	printf("\n Geli Biilka Number-ka");
	scanf("%d", &m);
	n=e-m;
	printf("\n ku iibso-> \n ma hubtaa inaad $%d u dirtid ganacsadaha  (%d)? \n 1.haa\n 2.maya ",m,c,b);
	scanf("%d", &b);
	
		if(b<=1){
		printf("\n ku iibso-> \n waxa aad u dirtey $%d ganacsadaha  (%d)? \n haraagu waa $%d \n 1.haa\n 2.maya ",m,c,n);
		}
		else if(b<=2){
		printf("macasalaama \n");
		}
		
	}
}
else if(b<=4){
printf("\n u wareeji Evcplus->\n geli mobileka");
scanf("%d", &c);
printf("\n u wareeji Evcplus->\n geli lacagta");
scanf("%d", &m);
printf("\n U wareeji EVCPLUS-> \n Ma hubtaainaad $%d u wareejisid %d?\n 1.haa \n 2.maya ",m,c,b);
n=e-m;
scanf("%d", &b);
	if(b<=1){
	printf("\n[-EVCPLUS-] $%d ayaad u wareejsay %d,haraagaaguwaa $%d.\n ",m,c,n);
	}
	
	else if(b<=2){		
	printf("macasalaama \n");
	}

}
else if(b<=5) {
printf("\n warbixin kooban->\n 1.last Action\n 2.wareejintii ugu dambeysey\n 3.ka bax");
scanf("%d", &b);
	if(b<=1){
	printf("\n [-Evcplus-] 10$ ayaad u wareejisey 618011706 Tar:\n date/month/2016 Time 02:00 PM\n");
	}
	else if(b<=2) {
	printf("\n wareejintii ugu dambeysey-> \n Dooro\n 1.ka heshey\n 2.u wareejisey\n");	
	scanf("%d", &b);
		if(b<=1){
		printf("\n ka heshey\n geli mobilka");
		scanf("%d", &c);
		printf("\n [-EVCPLUS-] warbixin kooban:\n 1.618913120: $9, tar:\n//\n");
		}
		else if(b<=2){
		printf("wareejintii ugu dambeysey->\n geli mobileka");
		scanf("%d", &c);
		printf("[-EVCPLUS-] warbixin kooban:\n 1.%d: $, tar\n //2016\n\n");
		}
		
	}
	else if(b<=3){
	printf("[macasalaama\n\n");
	}
}
else if(b<=6){
printf("maareynta->\n 1.Bedel lambarka sirta ah\n 2.Bedel luqada\n 3.Bedel SIM-ka\n 4.Wargenlinta mobile lumey\n 5. Hubi E payment \n 6.lacag xirasho\n 7.Ka bax\n\n");
	scanf("%d", &b);
	if(b<=1){
	printf("Bedel lambarka sirta ah->\n Geli PIN cusub oo sir ah");
	scanf("%d", &c);
	printf("Bedel lambarka sirta ah->\n ku celi PINka cusub");
	scanf("%d", &c);
	printf("[-EVCPLUS-] Nambarkaaga sirta ah waa la bedelay\n\n");
	}
	else if(b<=2){
	printf("Bedel luqada->\n 1.somali\n 2.English\n 3.ka bax\n");
	scanf("%d", &b);
		if(b<=1){
		printf("[-EVCPLUS-]luuqadda waxaa lagugu bedeley somali\n\n");
		}
		else if(b<=2){
		printf("[-EVCPLUS-]luuqadda waxaa lagugu bedeley english\n\n");
		}
		if(b<=3){
		printf(" Macsalaama\n\n");
		}
		
	}
	else if(b<=3){
	printf("[-EVCPLUS-]wargelinta\nbedelida mobile-ka/Sim-ka\nwaa la xaqiijiyey.\n\n");
	}
	else if(b<=4){
	printf("wargelin mobile lumay->\n Geli mobilka lumay\n\n");
	scanf("%d", &c);
	printf("[-EVCPLUS-] mobilka lumay waa lagu xayirey\n\n");
	}
	else if(b<=5){
	printf("Hubi E payment->\nHubi Lacagta laga dalacayo.\n\n");
	scanf("%d", &b);
	printf("macasalaama\n\n");
	}
	else if(b<=6){
	printf("Lacag Xirasho->\nGeli Mobileka lagu qaldey\nlacagta\n\n");
	scanf("%d", &c);
	printf("[-EVCPLUS-] lacagtadii waa lugu xayiray.\n\n");
	}
	else if(b<=7){
	printf(" macsalaama\n\n");
	}
}
else if(b<=7){
printf(" macsalaama\n\n");
}
}
else{
printf("\nPin-kaa aad gelisey waa khalad fadalan mar kale soo tijaabi\n\n");
}
}

