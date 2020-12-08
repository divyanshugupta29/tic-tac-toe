#include<stdio.h>
#include<conio.h>
#include<windows.h>
//#include<string.h>
char p1,p2;
int choiceno,f = 0,i =0;
int list[] = {0,0,0,0,0,0,0,0,0};
int p1i = 0;
int p2i = 0;
int p1choice[] = {0,0,0,0,0};
int p2choice[] = {0,0,0,0};

void winning(int x[],char p)
{
	int case1[] = {1,2,3};
	int i,j,ef=0;//ef means element found
	for(i = 0,ef=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(case1[i] == x[j])
			{
				ef++;
			}
		}
	}
	if(ef==3)
	{
		gotoxy(40,20);
		printf("winner %c",p);
		getch();
		exit(1);
	}
	int case2[]={4,5,6};
	//int i,j,ef=0;//ef means element found
	for(i = 0,ef=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(case2[i] == x[j])
			{
				ef++;
			}
		}
	}
	if(ef==3)
	{
		gotoxy(40,20);
		printf("winner %c",p);
		getch();
		exit(1);
	}
	int case3[] = {7,8,9};
    //int i,j,ef=0;//ef means element found
	for(i = 0,ef=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(case3[i] == x[j])
			{
				ef++;
			}
		}
	}
	if(ef==3)
	{
		gotoxy(40,20);
		printf("winner %c",p);
		getch();
		exit(1);
	} 
	int case5[]={2,5,8};
	//int i,j,ef=0;//ef means element found
	for(i = 0,ef=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(case5[i] == x[j])
			{
				ef++;
			}
		}
	}
	if(ef==3)
	{
		gotoxy(40,20);
		printf("winner %c",p);
		getch();
		exit(1);
	}
	int case4[]={1,4,7};
	//int i,j,ef=0;//ef means element found
	for(i = 0,ef=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(case4[i] == x[j])
			{
				ef++;
			}
		}
	}
	if(ef==3)
	{
		gotoxy(40,20);
		printf("winner %c",p);
		getch();
		exit(1);
	} 
	int case6[]={3,6,9};
	for(i = 0,ef=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(case6[i] == x[j])
			{
				ef++;
			}
		}
	}
	if(ef==3)
	{
		gotoxy(40,20);
		printf("winner %c",p);
		getch();
		exit(1);
	}   
	int case7[]={1,5,9};
	for(i = 0,ef=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(case7[i] == x[j])
			{
				ef++;
			}
		}
	}
	if(ef==3)
	{
		gotoxy(40,20);
		printf("winner %c",p);
		getch();
		exit(1);
	}
	int case8[]={3,5,7};
	for(i = 0,ef=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(case8[i] == x[j])
			{
				ef++;
			}
		}
	}
	if(ef==3)
	{
		gotoxy(40,20);
		printf("winner %c",p);
		getch();
		exit(1);
	}
}
int check()
{
		if(choiceno > 9)
		{
			printf("invalid input ");
			getch();
			exit(1);
		}
		if(choiceno <0)
		{
			printf("invalid input ");
			getch();
			exit(1);
		}
	for(i =0;i <(f-1);i++)
	{
		if(list[i] == choiceno )
		{
			printf("invalid input ");
			getch();
			exit(1);
		}
	}
}
int isodd(int x)
{
	if(x%2==0)
	{
		return 1;
	}
	return 0;
}
void gotoxy(int x,int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void layout()
{
	printf("\n\n\n");
	printf("\t\t\t   |   |   \n");
	printf("\t\t\t-----------\n");
	printf("\t\t\t   |   |   \n");
	printf("\t\t\t-----------\n");
	printf("\t\t\t   |   |   \n");
}
void hading()
{
	printf("\t\t\ttik-tac-toe\n");
}
/*void tryx()
{
	gotoxy(25,4);
	printf("x");
	gotoxy(0,15);
	
}*/
void choose()
{
	printf("choose x and y for player 1 and 2\n");
	printf("player 1 enter your choice ");
	scanf("%c",&p1);
	fflush(stdin);
	printf("player 2 enter your choice ");
	scanf("%c",&p2);
	printf("\n");
}
void askchoice()
{
	f++;
	if(f == 1||f == 3||f == 5||f ==7||f ==9)
	{
	  gotoxy(0,17);
	  printf("player 1 enter your choice - ");
	  scanf("%d",&choiceno);
	  list[i] = choiceno;
	  p1choice[p1i] = choiceno;
	  p1i++;
	  check();
	  //winning(p1choice,p1);
    }
    
	if(f == 2||f == 4||f ==6 ||f == 8)
	{
	  gotoxy(52,17);
	  printf("player 2 enter your choice - ");
	  scanf("%d",&choiceno);
	  list[i] = choiceno;
	  p2choice[p2i] = choiceno;
	  p2i++;
	  check();
	  //winning(p2choice,p2);
    }

}
void winners()
{
	//gotoxy(28,40);
	winning(p1choice,p1);
	winning(p2choice,p2);
}
void begin()
{
	int s;
	for(s = 0;s<=9;s++,i++)
	{
		askchoice();
		switch(choiceno)
		{
			case 1:
				{
					gotoxy(25,8);
					if(isodd(f))
					{
						printf("%c",p2);
					}
					else
					{
						printf("%c",p1);
					}
					winners();
					break;
				}
			case 2:
				{
					gotoxy(29,8);
					if(isodd(f))
					{
						printf("%c",p2);
					}
					else
					{
						printf("%c",p1);
					}
					winners();
					break;
				}
            case 3:
				{
					gotoxy(32,8);
					if(isodd(f))
					{
						printf("%c",p2);
					}
					else
					{
						printf("%c",p1);
					}
					winners();
					break;
				}
			case 4:
				{
					gotoxy(25,10);
					if(isodd(f))
					{
						printf("%c",p2);
					}
					else
					{
						printf("%c",p1);
					}
					winners();
					break;
				}
			case 5:
				{
					gotoxy(29,10);
					if(isodd(f))
					{
						printf("%c",p2);
					}
					else
					{
						printf("%c",p1);
					}
					winners();
					break;
				}
			case 6:
				{
					gotoxy(32,10);
					if(isodd(f))
					{
						printf("%c",p2);
					}
					else
					{
						printf("%c",p1);
					}
					winners();
					break;
				}
			case 7:
				{
					gotoxy(25,12);
					if(isodd(f))
					{
						printf("%c",p2);
					}
					else
					{
						printf("%c",p1);
					}
					winners();
					break;
				}
			case 8:
				{
					gotoxy(29,12);
					if(isodd(f))
					{
						printf("%c",p2);
					}
					else
					{
						printf("%c",p1);
					}
					winners();
					break;
				}
			case 9:
				{
					gotoxy(32,12);
					if(isodd(f))
					{
						printf("%c",p2);
					}
					else
					{
						printf("%c",p1);
					}
					winners();
					break;
				}
			default:
				gotoxy(28,26);
				printf("invalid input");
				getch();
				exit(1);
				break;
				
		}
		
	}
	/*if(s==9)
	{
		gotoxy(40,21);
		printf("DRAW");
		getch();
		exit(1);
	}*/

}

main()
{
	hading();
	choose();
	layout();
	begin();
}
