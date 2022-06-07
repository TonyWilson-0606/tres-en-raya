#include <stdio.h>
#include <conio.h>
void marco();
void entorno();
void descripcion();
void opcion();
void ganador();
void ganador2();

int main()
{
	clrscr();
	marco();
	entorno();
	descripcion();
	opcion();
	getch();
}


void marco()
{
	int i;
	
	for(i=53;i<=69;i++)
	{
		gotoxy(i,2);
		printf("_");
	}
	
		for(i=53;i<=69;i++)
	{
		gotoxy(i,4);
		printf("_");
	}
	
	
	for(i=3;i<=4;i++)
	{
		gotoxy(53,i);
		printf("|");
	}
	
	for(i=3;i<=4;i++)
	{
		gotoxy(69,i);
		printf("|");
	}	
	
	gotoxy(55,3);
	printf("Tres en raya");
}




void entorno()
{
    int i;
	gotoxy(40,7);
	printf("1");
	
	gotoxy(60,7);
	printf("2");
	
	gotoxy(78,7);
	printf("3");
	
	gotoxy(40,14);
	printf("4");
	
	gotoxy(60,14);
	printf("5");
    
	gotoxy(78,14);
	printf("6");
    
	gotoxy(40,21);
	printf("7");
    
	gotoxy(60,21);
	printf("8");
    
	gotoxy(78,21);
	printf("9");
    
	for(i=7;i<=25;i++)
	{
   		gotoxy(50,i);
		printf("*");
	}
	for(i=7;i<=25;i++)
	{
		gotoxy(70,i);
		printf("*");
	}
	for(i=35;i<=85;i++)
	{
		gotoxy(i,12);
		printf("*");
	}
	for(i=35;i<=85;i++)
	{
		gotoxy(i,20);
		printf("*");
	}

}


void descripcion()
{
	gotoxy(2,2);
	printf("Descripcion");
	
	gotoxy(2,4);
	printf("Los dos jugadores");

	gotoxy(2,5);
	printf("deberan escribir el");
	
	gotoxy(2,6);
	printf("numero en el que quiere");
	
	gotoxy(2,7);
	printf("que se coloque su ficha");

}


void opcion()
{
//jugador 1
	int i,m1,j1,m2,j2,x1,x2,x3,x4,x5,x6,x7,x8,x9,o1,o2,o3,o4,o5,o6,o7,o8,o9;
	
	for(m1=2;m1<=14;m1++)
	{
		gotoxy(m1,14);
		printf("_");
	}

	
	for(m1=2;m1<=14;m1++)
	{
		gotoxy(m1,19);
		printf("_");
	}	
	
	for(m1=15;m1<=19;m1++)
	{
		gotoxy(1,m1);
		printf("|");
	}

	for(m1=15;m1<=19;m1++)
	{
		gotoxy(16,m1);
		printf("|");
	}
	

	
	
//jugador 2
	
	for(m2=2;m2<=14;m2++)
	{
		gotoxy(m2,19);
		printf("_");
	}
	
	for(m2=2;m2<=14;m2++)
	{
		gotoxy(m2,24);
		printf("_");
	}	
	
	for(m2=19;m2<=24;m2++)
	{
		gotoxy(1,m2);
		printf("|");
	}

	for(m1=19;m1<=24;m1++)
	{
		gotoxy(16,m1);
		printf("|");
	}
	
	gotoxy(4,15);
	printf("Jugador 1");
	
	gotoxy(4,20);
	printf("Jugador 2");

	for(i=1;i<=9;i++)
	{
		//1	
		textcolor(9);
		gotoxy(6,17);
		scanf("%i",&j1);
	//confi j1
		if(j1==1)
		{
			gotoxy(40,9);
			printf("X");
			
			x1=1;
		}
	
	    else if(j1 == 2)
	    {
	        gotoxy(60,9);
	        printf("X");
	        
	        x2=2;
	    }
	    else if(j1 == 3)
	    {
	        gotoxy(78,9);
	        printf("X");
	        
	        x3=3;
		}
	    else if(j1== 4)
	    {
	        gotoxy(40,16);
	        printf("X");
		        
    	    x4=4;
		}
	    else if(j1 == 5)
	    {
	        gotoxy(60,16);
	        printf("X");
	        
	        x5=5;
		}
	    else if(j1 == 6)
	    {
	        gotoxy(78,16);
	        printf("X");
	        
	        x6=6;
		}
	    else if(j1 == 7)
	    {
	        gotoxy(40,23);
	        printf("X");
	        
	        x7=7;
	    }
	    else if(j1 == 8)
	    {
	        gotoxy(60,23);
	        printf("X");
	        
	        x8=8;
	    }
	    else if(j1 == 9)
	    {
	        gotoxy(78,23);
	        printf("X");
	        
	        x9=9;
	    }	
	
	//uwu	
		textcolor(5);
		gotoxy(6,22);
		scanf("%i",&j2);
	//confi 2
	    if(j2 == 1)
	    {
	        gotoxy(40,9);
	        printf("O");
		
			o1=1;
	    }
	    else if(j2 == 2)
	    {
	        gotoxy(60,9);
	        printf("O");
	        
	        o2=2;
	    }
	    else if(j2 == 3)
	    {
	        gotoxy(78,9);
	        printf("O");
	        
	        o3=3;
	    }
	    else if(j2 == 4)
	    {
	        gotoxy(40,16);
	        printf("O");
	        
	        o4=4;
	    }
	    else if(j2 == 5)
	    {
	        gotoxy(60,16);
	        printf("O");
	        
	        o5=5;
	    }
	    else if(j2 == 6)
	    {
	        gotoxy(78,16);
	        printf("O");
	        
	        o6=6;
	    }
	    else if(j2 == 7)
	    {
	        gotoxy(40,23);
    	    printf("O");
	        
	        o7=7;
	    }
	    else if(j2 == 8)
	    {
	        gotoxy(60,23);
	        printf("O");
	        
	        o8=8;
	    }
	    else if(j2 == 9)
	    {
	        gotoxy(79,23);
	        printf("O");
	        
	        o9=9;
	    }
	    //ganador
	    if(x1 == 1 && x2 == 2 && x3 == 3)
        {
			clrscr();
			ganador();
		}
    else if(x4 == 4 && x5 == 5 && x6 == 6)
        {
			clrscr();
			ganador();
        }
    else if(x7 == 7 && x8 == 8 && x9 == 9)
        {
			clrscr();
			ganador();
        }
    else if(x1 == 1 && x4 == 4 && x7 == 7)
        {
			clrscr();
			ganador();
        }
    else if(x2 == 2 && x5 == 5 && x8 == 8)
        {
			clrscr();
			ganador();
        }
    else if(x3 == 3 && x6 == 6 && x9 == 9)
        {
			clrscr();
			ganador();
        }
    else if(x1 == 1 && x5 == 5 && x9 == 9)
        {
			clrscr();
			ganador();
        }
    else if(x3 == 3 && x5 == 5 && x7 == 7)
        {
			clrscr();
			ganador();
        }
    
    else if(o1 == 1 && o2 == 2 && o3 == 3)
        {
			clrscr();
			ganador2();
        }
    else if(o4 == 4 && o5 == 5 && o6 == 6)
        {
			clrscr();
			ganador2();
        }
    else if(o7 == 7 && o8 == 8 && o9 == 9)
        {
			clrscr();
			ganador2();
        }
    else if(o1 == 1 && o4 == 4 && o7 == 7)
        {
			clrscr();
			ganador2();
        }
    else if(o2 == 2 && o5 == 5 && o8 == 8)
        {
			clrscr();
			ganador2();
        }
    else if(o3 == 3 && o6 == 6 && o9 == 9)
        {
			clrscr();
			ganador2();
        }
    else if(o1 == 1 && o5 == 5 && o9 == 9)
        {
			clrscr();
			ganador2();
        }
    else if(o3 == 3 && o5 == 5 && o7 == 7)
        {
			clrscr();
			ganador2();
        }
	}
}

void ganador()
{
//J
	gotoxy(3,4);
	printf("$");
	
	gotoxy(4,4);
	printf("$");
	
	gotoxy(5,4);
	printf("$");
	
	gotoxy(4,5);
	printf("$");
	
	gotoxy(4,6);
	printf("$");
	
	gotoxy(4,7);
	printf("$");
	
	gotoxy(4,8);
	printf("$");
	
	gotoxy(3,8);
	printf("$");
//U
	gotoxy(7,4);
	printf("$");

	gotoxy(7,5);
	printf("$");

	gotoxy(7,6);
	printf("$");

	gotoxy(7,7);
	printf("$");

	gotoxy(7,8);
	printf("$");

	gotoxy(8,8);
	printf("$");

	gotoxy(9,8);
	printf("$");

	gotoxy(9,7);
	printf("$");

	gotoxy(9,6);
	printf("$");

	gotoxy(9,5);
	printf("$");

	gotoxy(9,4);
	printf("$");
//G
	gotoxy(11,4);
	printf("$");

	gotoxy(12,4);
	printf("$");

	gotoxy(13,4);
	printf("$");

	gotoxy(11,5);
	printf("$");

	gotoxy(11,6);
	printf("$");

	gotoxy(12,6);
	printf("$");

	gotoxy(11,7);
	printf("$");

	gotoxy(13,7);
	printf("$");

	gotoxy(11,8);
	printf("$");

	gotoxy(12,8);
	printf("$");

	gotoxy(13,8);
	printf("$");

//A
	gotoxy(15,4);
	printf("$");

	gotoxy(15,5);
	printf("$");

	gotoxy(15,6);
	printf("$");

	gotoxy(15,7);
	printf("$");

	gotoxy(15,8);
	printf("$");

	gotoxy(16,4);
	printf("$");

	gotoxy(16,6);
	printf("$");

	gotoxy(17,4);
	printf("$");

	gotoxy(17,5);
	printf("$");

	gotoxy(17,6);
	printf("$");

	gotoxy(17,7);
	printf("$");

	gotoxy(17,8);
	printf("$");

//D
	gotoxy(19,4);
	printf("$");

	gotoxy(19,5);
	printf("$");

	gotoxy(19,6);
	printf("$");

	gotoxy(19,7);
	printf("$");

	gotoxy(19,8);
	printf("$");

	gotoxy(20,4);
	printf("$");

	gotoxy(20,8);
	printf("$");

	gotoxy(21,5);
	printf("$");

	gotoxy(21,6);
	printf("$");

	gotoxy(21,7);
	printf("$");

//O
	gotoxy(23,4);
	printf("$");

	gotoxy(23,5);
	printf("$");

	gotoxy(23,6);
	printf("$");

	gotoxy(23,7);
	printf("$");

	gotoxy(23,8);
	printf("$");

	gotoxy(24,4);
	printf("$");

	gotoxy(24,8);
	printf("$");

	gotoxy(25,4);
	printf("$");

	gotoxy(25,5);
	printf("$");

	gotoxy(25,6);
	printf("$");

	gotoxy(25,7);
	printf("$");

	gotoxy(25,8);
	printf("$");

//R
	gotoxy(27,4);
	printf("$");

	gotoxy(2,5);
	printf("$");

	gotoxy(27,6);
	printf("$");

	gotoxy(27,7);
	printf("$");

	gotoxy(27,8);
	printf("$");

	gotoxy(28,4);
	printf("$");

	gotoxy(29,5);
	printf("$");

	gotoxy(28,6);
	printf("$");

	gotoxy(29,7);
	printf("$");

	gotoxy(29,8);
	printf("$");

//1

	gotoxy(33,4);
	printf("$");

	gotoxy(33,5);
	printf("$");

	gotoxy(32,5);
	printf("$");

	gotoxy(33,6);
	printf("$");

	gotoxy(33,7);
	printf("$");

	gotoxy(32,8);
	printf("$");

	gotoxy(33,8);
	printf("$");

	gotoxy(34,8);
	printf("$");


//W
	gotoxy(15,10);
	printf("$");

	gotoxy(15,11);
	printf("$");

	gotoxy(15,12);
	printf("$");

	gotoxy(15,13);
	printf("$");

	gotoxy(15,14);
	printf("$");

	gotoxy(16,13);
	printf("$");

	gotoxy(17,10);
	printf("$");

	gotoxy(17,11);
	printf("$");

	gotoxy(17,12);
	printf("$");

	gotoxy(17,13);
	printf("$");

	gotoxy(17,14);
	printf("$");

//I
	gotoxy(20,10);
	printf("$");

	gotoxy(20,11);
	printf("$");

	gotoxy(20,12);
	printf("$");

	gotoxy(20,13);
	printf("$");

	gotoxy(20,14);
	printf("$");

	gotoxy(19,10);
	printf("$");

	gotoxy(21,10);
	printf("$");

	gotoxy(19,14);
	printf("$");

	gotoxy(21,14);
	printf("$");

//N
	gotoxy(23,10);
	printf("$");

	gotoxy(23,11);
	printf("$");

	gotoxy(23,12);
	printf("$");

	gotoxy(23,13);
	printf("$");

	gotoxy(23,14);
	printf("$");

	gotoxy(24,11);
	printf("$");

	gotoxy(25,12);
	printf("$");

	gotoxy(26,10);
	printf("$");

	gotoxy(26,11);
	printf("$");

	gotoxy(26,12);
	printf("$");

	gotoxy(26,13);
	printf("$");

	gotoxy(26,14);
	printf("$");
}





void ganador2()
{
//J
	gotoxy(3,4);
	printf("$");
	
	gotoxy(4,4);
	printf("$");
	
	gotoxy(5,4);
	printf("$");
	
	gotoxy(4,5);
	printf("$");
	
	gotoxy(4,6);
	printf("$");
	
	gotoxy(4,7);
	printf("$");
	
	gotoxy(4,8);
	printf("$");
	
	gotoxy(3,8);
	printf("$");
//U
	gotoxy(7,4);
	printf("$");

	gotoxy(7,5);
	printf("$");

	gotoxy(7,6);
	printf("$");

	gotoxy(7,7);
	printf("$");

	gotoxy(7,8);
	printf("$");

	gotoxy(8,8);
	printf("$");

	gotoxy(9,8);
	printf("$");

	gotoxy(9,7);
	printf("$");

	gotoxy(9,6);
	printf("$");

	gotoxy(9,5);
	printf("$");

	gotoxy(9,4);
	printf("$");
//G
	gotoxy(11,4);
	printf("$");

	gotoxy(12,4);
	printf("$");

	gotoxy(13,4);
	printf("$");

	gotoxy(11,5);
	printf("$");

	gotoxy(11,6);
	printf("$");

	gotoxy(12,6);
	printf("$");

	gotoxy(11,7);
	printf("$");

	gotoxy(13,7);
	printf("$");

	gotoxy(11,8);
	printf("$");

	gotoxy(12,8);
	printf("$");

	gotoxy(13,8);
	printf("$");

//A
	gotoxy(15,4);
	printf("$");

	gotoxy(15,5);
	printf("$");

	gotoxy(15,6);
	printf("$");

	gotoxy(15,7);
	printf("$");

	gotoxy(15,8);
	printf("$");

	gotoxy(16,4);
	printf("$");

	gotoxy(16,6);
	printf("$");

	gotoxy(17,4);
	printf("$");

	gotoxy(17,5);
	printf("$");

	gotoxy(17,6);
	printf("$");

	gotoxy(17,7);
	printf("$");

	gotoxy(17,8);
	printf("$");

//D
	gotoxy(19,4);
	printf("$");

	gotoxy(19,5);
	printf("$");

	gotoxy(19,6);
	printf("$");

	gotoxy(19,7);
	printf("$");

	gotoxy(19,8);
	printf("$");

	gotoxy(20,4);
	printf("$");

	gotoxy(20,8);
	printf("$");

	gotoxy(21,5);
	printf("$");

	gotoxy(21,6);
	printf("$");

	gotoxy(21,7);
	printf("$");

//O
	gotoxy(23,4);
	printf("$");

	gotoxy(23,5);
	printf("$");

	gotoxy(23,6);
	printf("$");

	gotoxy(23,7);
	printf("$");

	gotoxy(23,8);
	printf("$");

	gotoxy(24,4);
	printf("$");

	gotoxy(24,8);
	printf("$");

	gotoxy(25,4);
	printf("$");

	gotoxy(25,5);
	printf("$");

	gotoxy(25,6);
	printf("$");

	gotoxy(25,7);
	printf("$");

	gotoxy(25,8);
	printf("$");

//R
	gotoxy(27,4);
	printf("$");

	gotoxy(2,5);
	printf("$");

	gotoxy(27,6);
	printf("$");

	gotoxy(27,7);
	printf("$");

	gotoxy(27,8);
	printf("$");

	gotoxy(28,4);
	printf("$");

	gotoxy(29,5);
	printf("$");

	gotoxy(28,6);
	printf("$");

	gotoxy(29,7);
	printf("$");

	gotoxy(29,8);
	printf("$");

//2

	gotoxy(33,4);
	printf("$");

	gotoxy(32,5);
	printf("$");

	gotoxy(34,5);
	printf("$");

	gotoxy(33,6);
	printf("$");

	gotoxy(32,7);
	printf("$");

	gotoxy(32,8);
	printf("$");

	gotoxy(33,8);
	printf("$");

	gotoxy(34,8);
	printf("$");

//W
	gotoxy(15,10);
	printf("$");

	gotoxy(15,11);
	printf("$");

	gotoxy(15,12);
	printf("$");

	gotoxy(15,13);
	printf("$");

	gotoxy(15,14);
	printf("$");

	gotoxy(16,13);
	printf("$");

	gotoxy(17,10);
	printf("$");

	gotoxy(17,11);
	printf("$");

	gotoxy(17,12);
	printf("$");

	gotoxy(17,13);
	printf("$");

	gotoxy(17,14);
	printf("$");

//I
	gotoxy(20,10);
	printf("$");

	gotoxy(20,11);
	printf("$");

	gotoxy(20,12);
	printf("$");

	gotoxy(20,13);
	printf("$");

	gotoxy(20,14);
	printf("$");

	gotoxy(19,10);
	printf("$");

	gotoxy(21,10);
	printf("$");

	gotoxy(19,14);
	printf("$");

	gotoxy(21,14);
	printf("$");

//N
	gotoxy(23,10);
	printf("$");

	gotoxy(23,11);
	printf("$");

	gotoxy(23,12);
	printf("$");

	gotoxy(23,13);
	printf("$");

	gotoxy(23,14);
	printf("$");

	gotoxy(24,11);
	printf("$");

	gotoxy(25,12);
	printf("$");

	gotoxy(26,10);
	printf("$");

	gotoxy(26,11);
	printf("$");

	gotoxy(26,12);
	printf("$");

	gotoxy(26,13);
	printf("$");

	gotoxy(26,14);
	printf("$");
}
