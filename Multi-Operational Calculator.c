#include<stdio.h>
#include<windows.h>
#include<math.h>

#define Reset    	"\033[0m"
#define Red		 	"\033[1;31m"
#define Green	 	"\033[1;32m"
#define Yellow	 	"\033[1;33m"
#define Blue	 	"\033[1;34m"
#define Purple		"\033[1;35m"
#define Cyan		"\033[1;36m"
#define White		"\033[1;37m"


int choice, Boolean_value;

void Credit(){
    
	printf("\nTHIS PROGRAM IS CREATED BY DEVTANOY MAZUMDAR [You are requested not to plagiarize the source code if you happen\nto get permission to view it, as it violates digital ethics (Press 'Enter' to move on to the actual program)]\n");
   
    getchar();
	
}

void Mainmenu(){
	
	printf(White);
	printf("\n |-----------------------------|");
	printf("\n |CHOOSE THE TYPE OF CALCULATOR|");
	printf("\n |-----------------------------|\n");
	printf(Reset);
		
		printf(Cyan);
		printf("\n 1. Arithmetic Caluculator");
		printf("\n 2. BMI Calculator");
		printf("\n 3. Simple Interest Calculator");
		printf("\n 4. Currency Converter");
		printf("\n 5. Length Converter");
		printf("\n 6. Exit\n");
		printf(Reset);
	
	printf(Red);
	printf("\n |----|");	
	printf("\n |NOTE|: THE USER SHOULD ENTER THE INDEX VALUES CORRESPONDING TO THE OPTIONS THEY DESIRE TO CHOOSE.\n |----|  IT IS INSTRUCTED NOT TO ENTER ANY INVALID INTEGER(i.e. INDEX VALUE). Also, there will be further updates. \n	 THANK YOU. \n");	
	printf(Reset);
	
	printf(Blue);
	printf("\n Enter your choice: ");
	scanf("%d",&choice);
	printf(Reset);

}

void screenClear(){

	system("cls");

}

void Arithmetic_Calculator(){
    
		int op;
		float num1, num2, result;

		do{
	
			screenClear();

			printf(White);
	    	printf("\n [---ARITHMETIC CALCULATOR---]\n");
			printf(Reset);

			printf(Cyan);
			printf("\n 1. Addition");
			printf("\n 2. Subtraction");
			printf("\n 3. Multiplication");
			printf("\n 4. Division(For Quotient)");
			printf("\n 5. Division(For Remainder)");
			printf("\n 6. Exit");
			printf(Reset);

			do{
			printf(Blue);
			printf("\n\n Enter your choice: ");
			scanf("%d",&op);

			if(op<1 || op>6){
				printf(Red);
				printf("\n Invalid input!!!(Enter the correct option i.e 1-5)");
				printf(Reset);
			}
			
			else{
				break;
			}
			}while(1);

			if(op==6){
				break;
			}
	
			printf("\n Enter two numbers consecutively with just a space in between: ");
			scanf("%f%f", &num1, &num2);
			printf(Reset);
		
			switch(op)
			{
				case 1: result=num1+num2;
						printf("\n The addition of %.2f & %.2f is %.2f", num1, num2, result);
						getchar();
						break;
				case 2: result=num1-num2;
						printf("\n The subtraction of %.2f from %.2f is %.2f", num2, num1, result);
						getchar();
						break;
				case 3: result=num1*num2;
						printf("\n The product of %.2f and %.2f is %.2f", num1, num2, result);
						getchar();
						break;
				case 4: if(num2!=0)
						{
							result=num1/num2;
							printf("\n The division of %.2f by %.2f gives quotient %.2f", num1, num2, result);
						}
						else
						{
							printf("\n The Divisor cannot be 0");
						}
						getchar();
						break;
				case 5: if(num2!=0)
						{
							printf("\n The division of %.2f by %.2f gives remainder %.2f", num1, num2, result=fmod(num1, num2));
						}
						else
						{
							printf("\n The Divisor cannot be 0");
						}
						getchar();
						break;									
					
			}

			printf(Purple);
			printf("\n\n Do you want to perform another calculation in this particular\n calculator?(if yes then press '1' otherwise press to '0'): ");
			scanf("%d",&Boolean_value);
			printf(Reset);

		}while(Boolean_value==1);

		printf(Red);
		printf("\n Press 'enter' to return to the main menu...");
		printf(Reset);
		getchar();getchar();	
}

void BMI_Calculator(){

    float BMI, weight, height;

		do{

			screenClear();

			printf(White);
			printf("\n [---BMI CALCULATOR---] \n");
			printf(Reset);

			printf(Blue);
			printf("\n Enter your Weight(kg): ");
			scanf("%f", &weight);
			printf("\n Enter your height(m): ");
			scanf("%f", &height);
			printf(Reset);
	
    		BMI = weight/(height*height);
    
			if(BMI<18.5){
				printf(Red);
				printf("\n Your BMI is %.2f(Underweight)",BMI);
				printf(Reset);}
			else if((BMI>=18.5)&&(BMI<=24.9)){
				printf(Green);
				printf("\n Your BMI is %.2f(Normal Weight)",BMI);
				printf(Reset);}
			else if((BMI>=25)&&(BMI<=29.9)){
				printf(Yellow);
				printf("\n Your BMI is %.2f(Overweight)",BMI);
				printf(Reset);}
			else{
				printf(Red);
				printf("\n Your BMI is %.2f(Obese)",BMI);
				printf(Reset);}

			printf(Purple);
			printf("\n\n Do you want to perform another calculation in this particular\n calculator?(if yes then press '1' otherwise press to '0'): ");
			scanf("%d",&Boolean_value);
			printf(Reset);
		}while(Boolean_value==1);

		printf(Red);
		printf("\n\n\n Press enter to return to the main menu...");
		printf(Reset);
		getchar();getchar();
}

void SI_Calculator(){

    int P, R, T, SI, SI_A;

		do{

			screenClear();
			
			printf(White);
			printf("\n [---Simple Interrest Calculator---] \n\n");
			printf(Reset);

			printf(Blue);
			printf("\n Please enter the Principal Amount: ");
			scanf("%d",&P);
	
			printf("\n Please enter the Rate Of Interest: ");
			scanf("%d",&R);
	
			printf("\n Please enter the Time(In Years): ");
			scanf("%d",&T);
			printf(Reset);
	
			SI = (P*R*T)/100;
			SI_A = P+SI;
	
			printf("\n The Simple Interest is %d",SI);
			printf("\n The Total SI Amount is %d",SI_A);

			printf(Purple);
			printf("\n\n Do you want to perform another calculation in this particular\n calculator?(if yes then press '1' otherwise press to '0'): ");
			scanf("%d",&Boolean_value);
			printf(Reset);
		}while(Boolean_value==1);
		
		printf(Red);
		printf("\n\n\n Press enter to return to the main menu...");
		printf(Reset);
		getchar();getchar();
}

void Currency_Converter(){

    float st_money1, st_money2, ex_rate;
	int base1, base2, base;
	char currency_unit[7][10]= {"Rupees", "Dollars", "Pounds", "Euro", "Yen", "Yuan", "Rouble"};

		do{
	
			screenClear();
			
			printf(White);
			printf("\n [---CURRENCY CONVERSION---]\n");
			printf(Reset);

			printf(Cyan);
			printf("\n 1. Indian Rupee");
			printf("\n 2. US Dollar");
			printf("\n 3. British Pound");
			printf("\n 4. Euro");
			printf("\n 5. Japanese Yen");
			printf("\n 6. Chinese Yuan");
			printf("\n 7. Russian Rouble");
			printf("\n 8. Exit\n");
			printf(Reset);
			
			do{
			printf(Green);
			printf("\n Enter which currency you want to convert: ");
			scanf("%d",&base1);
			printf(Reset);
			
			if(base1<1 || base1>8){
			printf(Red);
			printf("\n INVALID INPUT(Enter the correct option i.e. 1-8)");
			printf(Reset);
			}

			else{
				break;
			}
			}while(1);

			if(base1==8){
				break;
			}
			

			do{
			printf(Yellow);
			printf("\n Enter which currency you want to convert\n the previously entered currency into: ");
			scanf("%d",&base2);
			printf(Reset);
			
			if(base2<1 || base2>8){
			printf(Red);
			printf("\n INVALID INPUT(Enter the correct option i.e. 1-8)");
			printf(Reset);
			}

			else{
				break;
			}
			}while(1);

			if(base2==8){
				break;
			}

			//Conversion from Indian Rupees
			if(base1==1 && base2==2){
			base=1;}
		
			else if(base1==1 && base2==3){
			base=2;}
		
			else if(base1==1 && base2==4){
			base=3;}
		
			else if(base1==1 && base2==5){
			base=4;}
		
			else if(base1==1 && base2==6){
			base=5;}
		
			else if(base1==1 && base2==7){
			base=6;}

			//Conversion from US Dollars
			else if(base1==2 && base2==1){
			base=7;}
		
			else if(base1==2 && base2==3){
			base=8;}
		
			else if(base1==2 && base2==4){
			base=9;}
		
			else if(base1==2 && base2==5){
			base=10;}
		
			else if(base1==2 && base2==6){
			base=11;}
		
			else if(base1==2 && base2==7){
			base=12;}

			//Conversion from British Pounds
			else if(base1==3 && base2==1){
			base=13;}
		
			else if(base1==3 && base2==2){
			base=14;}
		
			else if(base1==3 && base2==4){
			base=15;}
		
			else if(base1==3 && base2==5){
			base=16;}
				
			else if(base1==3 && base2==6){
			base=17;}
		
			else if(base1==3 && base2==7){
			base=18;}

			//Conversion from Euro
			else if(base1==4 && base2==1){
			base=19;}
		
			else if(base1==4 && base2==2){
			base=20;}
		
			else if(base1==4 && base2==3){
			base=21;}
		
			else if(base1==4 && base2==5){
			base=22;}
		
			else if(base1==4 && base2==6){
			base=23;}
		
			else if(base1==4 && base2==7){
			base=24;}

			//Conversion from Japanese Yen
			else if(base1==5 && base2==1){
			base=25;}
		
			else if(base1==5 && base2==2){
			base=26;}
		
			else if(base1==5 && base2==3){
			base=27;}
		
			else if(base1==5 && base2==4){
			base=28;}
		
			else if(base1==5 && base2==6){
			base=29;}
		
			else if(base1==5 && base2==7){
			base=30;}

			//Conversion from Chinese Yuan
			else if(base1==6 && base2==1){
			base=31;}
		
			else if(base1==6 && base2==2){
			base=32;}
		
			else if(base1==6 && base2==3){
			base=33;}
		
			else if(base1==6 && base2==4){
			base=34;}
		
			else if(base1==6 && base2==5){
			base=35;}
		
			else if(base1==6 && base2==7){
			base=36;}

			//Conversion from Russian Rouble
			else if(base1==7 && base2==1){
			base=37;}
		
			else if(base1==7 && base2==2){
			base=38;}
		
			else if(base1==7 && base2==3){
			base=39;}
		
			else if(base1==7 && base2==4){
			base=40;}
		
			else if(base1==7 && base2==5){
			base=41;}
			 
			else if(base1==7 && base2==6){
			base=42;}
			
			printf(Blue);
			if(base1==1)
			{
			printf("\n Enter the amount of money you want to convert(in %s): ",currency_unit[0]);
			scanf("%f",&st_money1);
			}
			
			else if(base1==2)
			{
			printf("\n Enter the amount of money you want to convert(in %s): ",currency_unit[1]);
			scanf("%f",&st_money1);
			}
			
			else if(base1==3)
			{
			printf("\n Enter the amount of money you want to convert(in %s): ",currency_unit[2]);
			scanf("%f",&st_money1);
			}
			
			else if(base1==4)
			{
			printf("\n Enter the amount of money you want to convert(in %s): ",currency_unit[3]);
			scanf("%f",&st_money1);
			}
			
			else if(base1==5)
			{
			printf("\n Enter the amount of money you want to convert(in %s): ",currency_unit[4]);
			scanf("%f",&st_money1);
			}
			
			else if(base1==6)
			{
			printf("\n Enter the amount of money you want to convert(in %s): ",currency_unit[5]);
			scanf("%f",&st_money1);
			}
			
			else if(base1==7)
			{
			printf("\n Enter the amount of money you want to convert(in %s): ",currency_unit[6]);
			scanf("%f",&st_money1);
			}
			printf(Reset);
			
		
			switch(base)
			{
				//Conversion from Indian Rupees
				case 1: st_money2=st_money1/88.17;
						break;
				case 2: st_money2=st_money1/118.98;
						break;
				case 3: st_money2=st_money1/103.24;
						break;
				case 4: st_money2=st_money1*1.68;
						break;
				case 5: st_money2=st_money1/12.36;
						break;
				case 6: st_money2=st_money1/1.08;
						break;
						
				//Conversion from US Dollars
				case 7: st_money2=st_money1*88.17;
						break;
				case 8: st_money2=st_money1*0.74;
						break;
				case 9: st_money2=st_money1*0.85;
						break;
				case 10: st_money2=st_money1*148.22;
						 break;
				case 11: st_money2=st_money1*7.13;
						 break;
				case 12: st_money2=st_money1*81.27;
						 break;
						 
				//Conversion from British Pounds
				case 13: st_money2=st_money1*118.98;
						 break;
				case 14: st_money2=st_money1*1.35;
						 break;
				case 15: st_money2=st_money1*1.15;
						 break;
				case 16: st_money2=st_money1*200.02;
						 break;
				case 17: st_money2=st_money1*9.63;
						 break;
				case 18: st_money2=st_money1*109.68;
						 break;
						 
				//Conversion from Euro
				case 19: st_money2=st_money1*103.24;
						 break;
				case 20: st_money2=st_money1*1.17;
						 break;
				case 21: st_money2=st_money1*0.87;
						 break;
				case 22: st_money2=st_money1*173.55;
						 break;
				case 23: st_money2=st_money1*8.35;
						 break;
				case 24: st_money2=st_money1*95.16;
						 break;
						 
				//Conversion from Japanese Yen
				case 25: st_money2=st_money1*0.59;
						 break;
				case 26: st_money2=st_money1/148.22;
						 break;
				case 27: st_money2=st_money1/200.02;
						 break;
				case 28: st_money2=st_money1/173.55;
						 break;
				case 29: st_money2=st_money1/20.78;
						 break;
				case 30: st_money2=st_money1*0.55;
						 break;
						 
				//Conversion from Chinese Yuan
				case 31: st_money2=st_money1*12.36;
					 	 break;
				case 32: st_money2=st_money1*0.14;
						 break;
				case 33: st_money2=st_money1*0.10;
						 break;
				case 34: st_money2=st_money1/8.35;
						 break;
				case 35: st_money2=st_money1*20.78;
						 break;
				case 36: st_money2=st_money1*11.39;
						 break;
						 
				//Conversion from Russian Rouble
				case 37: st_money2=st_money1*1.08;
						 break;
				case 38: st_money2=st_money1/81.27;
						 break;
				case 39: st_money2=st_money1/109.68;
						 break;
				case 40: st_money2=st_money1/95.16;
						 break;
				case 41: st_money2=st_money1*1.82;
						 break;
				case 42: st_money2=st_money1/11.39;
						 break;
			}
			printf(Green);
			if(base==7|| base==13|| base==19|| base==25|| base==31|| base==37)
			printf("\n Converted money: %.2f %s", st_money2, currency_unit[0]);
			
			else if(base==1|| base==14|| base==20|| base==26|| base==32|| base==38)
			printf("\n Converted money: %.2f %s", st_money2, currency_unit[1]);
			
			else if(base==2|| base==8|| base==21|| base==27|| base==33|| base==39)
			printf("\n Converted money: %.2f %s", st_money2, currency_unit[2]);
			
			else if(base==3|| base==9|| base==15|| base==28|| base==34|| base==40)
			printf("\n Converted money: %.2f %s", st_money2, currency_unit[3]);
			
			else if(base==4|| base==10|| base==16|| base==22|| base==35|| base==41)
			printf("\n Converted money: %.2f %s", st_money2, currency_unit[4]);
			
			else if(base==5|| base==11|| base==17|| base==23|| base==29|| base==42)
			printf("\n Converted money: %.2f %s", st_money2, currency_unit[5]);
			
			else if(base==6|| base==12|| base==18|| base==24|| base==30|| base==36)
			printf("\n Converted money: %.2f %s", st_money2, currency_unit[6]);
			printf(Reset);

			printf(Purple);
			printf("\n\n Do you want to perform another calculation in this particular\n calculator?(if yes then press '1' otherwise press to '0'): ");
			scanf("%d",&Boolean_value);
			printf(Reset);
		}while(Boolean_value==1);
	
		printf(Red);
		printf("\n Press enter to return to the main menu...");
		printf(Reset);
		getchar();getchar();
}

void Length_Converter(){

    int base1, base2, base;
	float initial_value, final_value; 
	char unit[8]={'m', 'c', 'd', 'k', 'i', 'f', 'n', 't'};

		do{
			screenClear();
			
			printf(White);
			printf("\n [---UNITS OF LENGTH CONVERSION---]\n");
			printf(Reset);

			printf(Cyan);
			printf("\n 1. Millimetre(mm)");
			printf("\n 2. Centimetre(cm)");
			printf("\n 3. Decimetre(dm)");
			printf("\n 4. Metre(m)");
			printf("\n 5. Kilometre(km)");
			printf("\n 6. Inch(in)");
			printf("\n 7. Foot(ft)");
			printf("\n 8. Mile(mi)");
			printf("\n 9. Exit\n");
			printf(Reset);
			
			do{
			printf(Green);
			printf("\n Enter the unit you want to convert: ");
			scanf("%d", &base1);
			printf(Reset);
			
			if(base1<1 || base1>9){
			printf(Red);
			printf("\n INVALID INPUT(Enter the correct option i.e. 1-9)");
			printf(Reset);
			}

			else{
				break;
			}
			}while(1);

			if(base1==9){
				break;
			}
			
			do{
			printf(Yellow);
			printf("\n Enter the unit you want the previously\n entered unit to be converted into: ");
			scanf("%d", &base2);
			printf(Reset);
			
			
			if(base2<1 || base2>9){
			printf(Red);
			printf("\n INVALID INPUT(Enter the correct option i.e. 1-9)");
			printf(Reset);
			}

			else{
				break;
			}
			}while(1);

			if(base2==9){
				break;
			}

			//Conversion from Millimetre 
			if(base1==1 && base2==2){
			base=1;
			}
			
			else if(base1==1 && base2==3){
			base=2;
			}
			
			else if(base1==1 && base2==4){
			base=3;
			}
			
			else if(base1==1 && base2==5){
			base=4;
			}
			
			else if(base1==1 && base2==6){
			base=5;
			}
			
			else if(base1==1 && base2==7){
			base=6;
			}
			
			else if(base1==1 && base2==8){
			base=7;
			}
			
			//Conversion from Centimetre
			else if(base1==2 && base2==1){
			base=8;
			}
			
			else if(base1==2 && base2==3){
			base=9;
			}
			
			else if(base1==2 && base2==4){
			base=10;
			}
			
			else if(base1==2 && base2==5){
			base=11;
			}
			
			else if(base1==2 && base2==6){
			base=12;
			}
			
			else if(base1==2 && base2==7){
			base=13;
			}
			
			else if(base1==2 && base2==8){
			base=14;
			}
			
			//Conversion from Decimetre
			else if(base1==3 && base2==1){
			base=15;
			}

			else if(base1==3 && base2==2){
			base=16;
			}
			
			else if(base1==3 && base2==4){
			base=17;
			}
			
			else if(base1==3 && base2==5){
			base=18;
			}
			
			else if(base1==3 && base2==6){
			base=19;
			}
			
			else if(base1==3 && base2==7){
			base=20;
			}
			
			else if(base1==3 && base2==8){
			base=21;
			}
			
			//Conversion from Metre
			else if(base1==4 && base2==1){
			base=22;
			}
			
			else if(base1==4 && base2==2){
			base=23;
			}
			
			else if(base1==4 && base2==3){
			base=24;
			}
			
			else if(base1==4 && base2==5){
			base=25;
			}
			
			else if(base1==4 && base2==6){
			base=26;
			}
			
			else if(base1==4 && base2==7){
			base=27;
			}
			
			else if(base1==4 && base2==8){
			base=28;
			}
			
			//Conversion from Kilometre
			else if(base1==5 && base2==1){
			base=29;
			}
			
			else if(base1==5 && base2==2){
			base=30;
			}
			
			else if(base1==5 && base2==3){
			base=31;
			}
			
			else if(base1==5 && base2==4){
			base=32;  
			}
			
			else if(base1==5 && base2==6){
			base=33;
			}
			
			else if(base1==5 && base2==7){
			base=34;
			}
			
			else if(base1==5 && base2==8){
			base=35;
			}
			
			//Conversion from Inch
			else if(base1==6 && base2==1){
			base=36;
			}
			
			else if(base1==6 && base2==2){
			base=37;
			}
			
			else if(base1==6 && base2==3){
			base=38;
			}
			
			else if(base1==6 && base2==4){
			base=39;
			}
			
			else if(base1==6 && base2==5){
			base=40;
			}
			
			else if(base1==6 && base2==7){
			base=41;
			}
			
			else if(base1==6 && base2==8){
			base=42;
			}
			
			//Conversion from Foot
			else if(base1==7 && base2==1){
			base=43;
			}
			
			else if(base1==7 && base2==2){
			base=44;
			}
			
			else if(base1==7 && base2==3){
			base=45;
			}
			
			else if(base1==7 && base2==4){
			base=46;
			}
			
			else if(base1==7 && base2==5){
			base=47;
			}
			
			else if(base1==7 && base2==6){
			base=48;
			}
			
			else if(base1==7 && base2==8){
			base=49;
			}
			
			//Conversion from Mile
			else if(base1==8 && base2==1){
			base=50;
			}
			
			else if(base1==8 && base2==2){
			base=51;
			}
			
			else if(base1==8 && base2==3){
			base=52;
			}
			
			else if(base1==8 && base2==4){
			base=53;
			}
			
			else if(base1==8 && base2==5){
			base=54;
			}
			else if(base1==8 && base2==6){
			base=55;
			}
			
			else if(base1==8 && base2==7){
			base=56;
			}
			
			printf(Blue);
			if(base1==1)
			{
				printf("\n Enter the value you want to convert(in %c%c): ", unit[0], unit[0]);
				scanf("%f",&initial_value);
			}
			
			else if(base1==2)
			{
				printf("\n Enter the value you want to convert(in %c%c): ", unit[1], unit[0]);
				scanf("%f",&initial_value);
			}
			
			else if(base1==3)
			{
				printf("\n Enter the value you want to convert(in %c%c): ", unit[2], unit[0]);
				scanf("%f",&initial_value);
			}
			
			else if(base1==4)
			{
				printf("\n Enter the value you want to convert(in %c%c): ", unit[0]);
				scanf("%f",&initial_value);
			}
			
			else if(base1==5)
			{
				printf("\n Enter the value you want to convert(in %c%c): ", unit[3], unit[0]);
				scanf("%f",&initial_value);
			}
			
			else if(base1==6)
			{
				printf("\n Enter the value you want to convert(in %c%c): ", unit[4], unit[6]);
				scanf("%f",&initial_value);
			}
			
			else if(base1==7)
			{
				printf("\n Enter the value you want to convert(in %c%c): ", unit[5], unit[7]);
				scanf("%f",&initial_value);
			}
			
			else if(base1==8)
			{
				printf("\n Enter the value you want to convert(in %c%c): ", unit[0], unit[4]);
				scanf("%f",&initial_value);
			}
			printf(Reset);
			
			
			switch(base)
			{
				//Conversion from Millimetre
				case 1: final_value=initial_value/10;
						break;
				case 2: final_value=initial_value/100;
						break;
				case 3: final_value=initial_value/1000;
						break;
				case 4: final_value=initial_value/1000000;
						break;
				case 5: final_value=initial_value/25.4;
						break;
				case 6: final_value=initial_value/304.8;
						break;
				case 7: final_value=initial_value/1609344;
						break;
					
				//Conversion from Centimetre		
				case 8: final_value=initial_value*10;
						break;
				case 9: final_value=initial_value/10;
						break;
				case 10: final_value=initial_value/100;
						break;
				case 11: final_value=initial_value/100000;
						break;
				case 12: final_value=initial_value/2.54;
						break;
				case 13: final_value=initial_value/30.48;
						break;
				case 14: final_value=initial_value/160934.4;
						break;
						
				//Conversion from Decimetre		
				case 15: final_value=initial_value*100;
						break;
				case 16: final_value=initial_value*10;
						break;
				case 17: final_value=initial_value/10;
						break;
				case 18: final_value=initial_value/10000;
						break;
				case 19: final_value=initial_value*3.937;
						break;
				case 20: final_value=initial_value/3.048;
						break;
				case 21: final_value=initial_value/16093.44;
						break;
						
				//Conversion from Metre
				case 22: final_value=initial_value*1000;
						break;
				case 23: final_value=initial_value*100;
						break;
				case 24: final_value=initial_value*10;
						break;
				case 25: final_value=initial_value/1000;
						break;
				case 26: final_value=initial_value*39.37;
						break;
				case 27: final_value=initial_value*3.28;
						break;
				case 28: final_value=initial_value/1609.344;
						break;
						
				//Conversion from Kilometre
				case 29: final_value=initial_value*1000000;
						break;
				case 30: final_value=initial_value*100000;
						break;
				case 31: final_value=initial_value*10000;
						break;
				case 32: final_value=initial_value*1000;
						break;
				case 33: final_value=initial_value*39370;
						break;
				case 34: final_value=initial_value*3280.84;
						break;
				case 35: final_value=initial_value/1.6;
						break;
						
				//Conversion from Inch
				case 36: final_value=initial_value*25.4;
						break;
				case 37: final_value=initial_value*2.54;
						break;
				case 38: final_value=initial_value/3.94;
						break;
				case 39: final_value=initial_value/39.4;
						break;
				case 40: final_value=initial_value/39370;
						break;
				case 41: final_value=initial_value/12;
						break;
				case 42: final_value=initial_value/63360;
						break;
						
				//Conversion from Foot
				case 43: final_value=initial_value*304.8;
						break;
				case 44: final_value=initial_value*30.48;
						break;
				case 45: final_value=initial_value*3.048;
						break;
				case 46: final_value=initial_value/3.28;
						break;
				case 47: final_value=initial_value/3280.84;
						break;		
				case 48: final_value=initial_value*12;
						break;
				case 49: final_value=initial_value/5280;
						break;
						
				//Conversion from Mile
				case 50: final_value=initial_value*1609344;
						break;
				case 51: final_value=initial_value*160934.4;
						break;
				case 52: final_value=initial_value*16063.44;
						break;
				case 53: final_value=initial_value*1609.344;
						break;
				case 54: final_value=initial_value*1.6;
						break;			
				case 55: final_value=initial_value*63360;
						break;
				case 56: final_value=initial_value*5280;
						break;
						
		
			}
			
			printf(Green);
			if(base==8 || base==15 || base==22 || base==29 || base==36 || base==43 || base==50)
			printf("\n The converted value is %.3f%c%c", final_value, unit[0], unit[0]);
			
			else if(base==1 || base==16 || base==23 || base==30 || base==37 || base==44 || base==51)
			printf("\n The converted value is %.3f%c%c", final_value, unit[1], unit[0]);
			
			else if(base==2 || base==9 || base==24 || base==31 || base==38 || base==45 || base==52)
			printf("\n The converted value is %.3f%c%c", final_value, unit[2], unit[0]);
			
			else if(base==3 || base==10 || base==17 || base==32 || base==39 || base==46 || base==53)
			printf("\n The converted value is %.3f%c%c", final_value, unit[0]);
			
			else if(base==4 || base==11 || base==18 || base==25 || base==40 || base==47 || base==54)
			printf("\n The converted value is %.3f%c%c", final_value, unit[3], unit[0]);
			
			else if(base==5 || base==12 || base==19 || base==26 || base==33 || base==48 || base==55)
			printf("\n The converted value is %.3f%c%c", final_value, unit[4], unit[6]);
			
			else if(base==6 || base==13 || base==20 || base==27 || base==34 || base==41 || base==56)
			printf("\n The converted value is %.3f%c%c", final_value, unit[5], unit[7] );
			
			else if(base==7 || base==14 || base==21 || base==28 || base==35 || base==42 || base==49)
			printf("\n The converted value is %.3f%c%c", final_value, unit[0], unit[4]);
			printf(Reset);
			
			printf(Purple);
			printf("\n\n Do you want to perform another calculation in this particular\n calculator?(if yes then press '1' otherwise press to '0'): ");
			scanf("%d",&Boolean_value);
			printf(Reset);
		}while(Boolean_value==1);
			
		printf(Red);
		printf("\n Press enter to return to the main menu...");
		printf(Reset);
		getchar();getchar();
}


int main()
{
    
    Credit();
    
	do{

	screenClear();

	Mainmenu();

	switch(choice){

	case 1:
    {
        Arithmetic_Calculator();
        break;
    }
	
	   
	
	
	case 2:
	{
		BMI_Calculator();
		break;
	}
	
	
	
	case 3:
	{
		SI_Calculator();
		break;
		printf("\n");
	}   
	
	
	

	case 4:
	{
		Currency_Converter();
		break;
		printf("\n");
	}
	
	
	
	case 5:
	{
		Length_Converter();
		break;
		printf("\n");
	}

	case 6:
	{	
		printf(Red);
		printf("\n Exiting the program....");
		printf(Reset);
		break;
	}
	
	default:
	{
		getchar();
		printf(Red);
		printf("\n Invalid Input!!! Enter the correct option");
		printf(Reset);
		getchar();
		break;
	}

    }


}while(choice!=6);
	
	getchar();
	getchar();
	return 0;	
}	
