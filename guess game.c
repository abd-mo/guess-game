#include<stdio.h>
#include<time.h>
#include<conio.h>
void guess_number();
int main(){
	int x;
	char ch;
	printf("*********guess the number between 1 and 1000*********\n\n");
	printf("*********you have ten times to try*********\n\n");
	do{srand(time(0));
	guess_number(x);
	printf("DO YOU WANT TO PLAY AGAIN [y]or[N] !!??");
	scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');	
}
   void guess_number(){
 	int n;
	 int r;
 	
 	int time=0;
 	r =1+rand()%1000;
 	
 	printf("enter your beging : ");
 	scanf("%d",&n);
 	while(1){
 		time++;
 		 if(n==r){printf("conratulation you're won\n");
 			break;
			 }
 	else if(time==10){printf("sorry your time is run out\n");
 			break;
			 }
 	else if(n<r){
 			printf("number is low : ");
 			scanf("%d",&n);}
 	    else if (n>r){
 			printf("number is high : ");
 			scanf("%d",&n);} 
			 }
		  time=0;
 }
