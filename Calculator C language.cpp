#include<stdio.h>
#include<stdlib.h>
void table(int);
main()
{
	int option;
	printf("\t\t\t\t\t\t\tMain Menu");
	int fno,sno,addition,subtraction,multiplication;
	float division;

	int operant;
	printf("\nSelect The Option to proceed: ");
	printf("\n1= Arithmetic Operators.\n2= Number Comparision.\n3= Factorial Calculation.\n4= Table.\n\n");
	scanf("%d",&option);

	if(option==1){
		system("cls");
		printf("Arithmetic Operators Selected\n");

		printf("\nEnter The Operator To Perform The Task: \n");
		printf("\n1=Addition.\n2=Subtraction.\n3=Multiplication.\n4=Division.\n");
		scanf("%d",&operant);
		if (operant==1){
			system("cls");
			printf("\nAddition Selected");
			printf("\n\nEnter The First Number: ");
			scanf("%d",&fno);
			printf("Enter The Second Number: ");
			scanf("%d",&sno);
			addition=fno+sno;
			printf("The Addition of The Two Numbers Is: %d",addition);
		}
		else if(operant==2){
			system("cls");
			printf("Subtraction Selected");
			printf("\n\nEnter The First Number: ");
			scanf("%d",&fno);
			printf("Enter The Second Number: ");
			scanf("%d",&sno);
			subtraction= fno-sno;
			printf("\nThe Subtraction of Two Numbers is: %d",subtraction);
		}
		else if(operant==3){
			system("cls");
			printf("\nMultiplication Selected");
			printf("\n\nEnter The First Number: ");
			scanf("%d",&fno);
			printf("Enter The Second Number: ");
			scanf("%d",&sno);
			multiplication= fno*sno;
			printf("\nThe Multipication is: %d",multiplication);
		}
		else if (operant==4){
			system("cls");
			printf("\n\nDivision Selected");
			printf("\n\nEnter The First Number: ");
			scanf("%d",&fno);
			printf("Enter The Second Number: ");
			scanf("%d",&sno);
			division=fno/sno;
	        printf("\n\nThe Division of two numbers is %.2f",division);
		}
		else {
			printf("Enter Valid Operant");
		}
	}
	if(option==2){
		system("cls");
		printf("\nNumber Comparision selected");
		printf("\nEnter the first Number: ");
		scanf("%d",&fno);
		printf("\nEnter the second number: ");
		scanf("%d",&sno);
		if (fno>sno){


			printf("\nFirst Number is greater then second number");
		}
		else if(fno<sno){
			printf("\nSecond Number is Greater");
		}
		else{
				printf("\nBoth Numbers are Equal");
			}
	}
	if(option==3){
		system("cls");
		printf("\nFactorial Calculation Selected\n");
		int num,i;
		double fact=1;
		printf("Enter the Number: ");
		scanf("%ld",&num);
		i=1;
	do{
		fact*=i;
		i++;
	}while (i<=num);
		printf("\nThe Factorial is : %.1lf\n",fact);
	}
	if(option==4){
		system("cls");


	{
	printf("Table Selected\n");
		int no,loop,table1;
	printf("Enter the Number To Generate The Table: ");
	scanf("%d",&no);
	table(no);
	}

}
	else if(option>=5) {
	printf("Enter Valid Option");
	 }
}
void table(int no)
{
		for (int loop=1;loop<=10;loop++){
		int table1=no*loop;
	printf("%d %d %d\n",no,loop,table1);
										}
}



