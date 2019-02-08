#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define size 100



struct game
           {
          char pass[50];
          char name[50];
          int score[size];
            }plr;

void highest_score(int*);
void player_inf();
void game();
void welcome();
void home();

int main()
          {
             while(1)
                   {
                    welcome();
                    home();
                  }
             return 0;
           }
void home()
          {  system("cls");
	         printf("===[MAIN]t========================================================================================>\n\n");
	         printf("\t\t\t\t1-START GAME\t\t2-PLAYER INFORMATION\t\t0-EXIT\n");
	         int a;
	         scanf("%d",&a);
           	 switch(a)
                      {
                        case 1: game();
                        break;

                        case 2: player_inf();
                        break;

                        case 0: exit(0);
                       }
        	}


void game(){
             	system("cls");
               	 printf("\n=== [ Guss Game ] =========================================================================>\n\n");

           int z=0;
	      while(1)
		          {

		          	z++;
		          	int x;
 	       int n;
	       int r;
           srand(time(0));
 	       int time=0;
 	       r =1+rand()%100;
  	       printf("\n\nGuess a number between [0-100]..\n\n");
  	       printf("you have only [5] times to try....\n\n");
 	       printf("enter your begining : ");
 	       scanf("\n%d",&n);
 	       while(1)
			{
printf("========================================================================>\n\n");
 		       time++;
 	           if(n==r)
				      {
				         printf("congratulation, you're won\n");
 			             break;
			         }
 	            else if(time==5)
				               {
							      printf("sorry, your time is ran out\n");
 	                              printf("your score is :0");
 			                      break;
			                   }
 	            else if(n<r)
				           {
 			                   printf("number is low : ");
 			                   scanf("%d",&n);
							}
 	            else if (n>r)
				            {
 			                 printf("number is high : ");
 			                  scanf("%d",&n);
							}
			}
	      if(time==5)
		             {
					    plr.score[0]=0;
	                 }
	      else if(time==5)
		                 {
		                   plr.score[z]=0;
	                       printf("your score is :%d",plr.score[z]);
	                     }
	     else if(time==4)
		                 {
						    plr.score[z]=4;
	                        printf("your score is :%d",plr.score[z]);
						 }
	     else if(time==3)
		                 {
						   plr.score[z]=6;
	                       printf("your score is :%d",plr.score[z]);
						 }
	     else if(time==2)
		                 {
		                   plr.score[z]=8;
	                       printf("your score is :%d",plr.score[z]);
						 }
	     else if(time==1)
		                 {
						   plr.score[z]=10;
	                       printf("your score is :%d",plr.score[z]);
						 }

	    time=0;
	    printf("\n\n\t\t1- PLAY AGAIN !!??\t\t2-main\t\t3-EXIT\n\n");
	    scanf("%d",&x);
	    switch(x)
                 {
                case 1: game();
                 break;

                case 2: home();
                break;

                case 3: exit(0);
                 }


		          }

	     }
	void welcome()
	           {



		       printf("\n=== [ WELCOME TO GUESS GAME ] =================================================================================>\n\n");
		       printf("\n\t\t\t\t\t\t  Enter player name: ");
               gets(plr.name);

               printf("\n\t\t\t\t\t\t  Enter password: ");
               gets(plr.pass);



		         }

	void player_inf()

               {
               	 system("cls");
               	 printf("\n\t\t\t\t================= [ player information ] =============\n\n");

	             printf("Player Name is : %s",plr.name);
               	 printf("\nPlayer password is : %s\n",plr.pass);
               	 printf("The Highest Score Is : ");
               	 highest_score(plr.score);

	             int a;
	             printf("\n\n\t\t\t\t1- -main\t\t2-EXIT\n\n");
	             scanf("%d",&a);
	              switch(a)
                          {
                            case 1: home();
                            break;
                            case 2: exit(0);
                          }

                }
void highest_score(int*arr){

    int i,y;


    for(i = 1; i < size; ++i)
    {

       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    y= arr[0];

printf("%d",y);


   }
