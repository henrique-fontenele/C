#include<stdio.h>
#include<conio.h>
    
void orga(int num, int cont){
	int i,aux=num;
	for(i=1;aux>9;i++)
		aux/=10;
	switch(i){
		case 1: printf("\t      %d | %d \n",num,cont);
			break;
		case 2: printf("\t     %d | %d \n",num,cont);
			break;
		case 3: printf("\t    %d | %d \n",num,cont);
			break;
		case 4: printf("\t   %d | %d \n",num,cont);
			break;
		case 5: printf("\t  %d | %d \n",num,cont);
			break;
		case 6: printf("\t %d | %d \n",num,cont);
			break;
		default: printf("\t%d | %d \n",num,cont);	
	}
}

int verifica(int num, int cont){
	if(num%cont==0){
		orga(num,cont);
		num/=cont;
		num=verifica(num,cont);	
	}
	return num;
}

int main(){
	int num,cont;

		printf("digite um numero:  ");
		scanf("%d",&num);
		printf("\n\n");
		for(cont=2;num>1;cont++){
			num=verifica(num,cont);
		}
		printf("\t      1 | \n\n\n");

	getch();
}
