#include <stdio.h>
#include <conio.h>
void marco();
void entorno();
void descripcion();
void opcion1();
void opcion2();

int main()
{
	clrscr();
	marco();
	entorno();
	descripcion();
	
	opcion1();
	opcion2();
	
	opcion1();
	opcion2();
	
	opcion1();
	opcion2();
	
	opcion1();
	opcion2();
	
	opcion1();
	
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


void opcion1()
{
	int m1,j1,x1,x2,x3,x4,x5,x6,x7,x8,x9;
	x1=0;
	x2=0;
	x3=0;
	x4=0;
	x5=0;
	x6=0;
	x7=0;
	x8=0;
	x9=0;
	
//jugador 1	
	textcolor(9);
	for(m1=2;m1<=14;m1++)
	{
		gotoxy(m1,14);
		printf("_");
	}

	textcolor(9);	
	for(m1=2;m1<=14;m1++)
	{
		gotoxy(m1,19);
		printf("_");
	}	
	
	textcolor(9);
	for(m1=15;m1<=19;m1++)
	{
		gotoxy(1,m1);
		printf("|");
	}
	
	textcolor(9);
	for(m1=15;m1<=19;m1++)
	{
		gotoxy(16,m1);
		printf("|");
	}
	gotoxy(4,15);
	printf("Jugador 1");
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

	else if(x1==1 && x2==2 && x3==3)
	{
		printf("tu mama");
	}
	
	else if(x4==4 && x5==5 && x6==6)
	{
		printf("tu mama");
	}
	else if(x7==7 && x8==8 && x9==9)
	{
		printf("tu mama");
	}
	else if(x1==1 && x4==4 && x7==7)
	{
		printf("xd");
	}
	else if(x2==2 && x5==5 && x8==8)
	{
		printf("xd");
	}
	else if(x3==3 && x6==6 && x9==9)
	{
		printf("xd");
	}
	else if(x1==1 && x5==5 && x9==9)
	{
		printf("xd");
	}
	else if(x3==3 && x5==5 && x7==7)
	{
		printf("xd");
	}
}

void opcion2()
{
	int m2,j2,o1,o2,o3,o4,o5,o6,o7,o8,o9;
	
//jugador 2
	
	textcolor(5);
	for(m2=2;m2<=14;m2++)
	{
		gotoxy(m2,19);
		printf("_");
	}
	
	textcolor(5);
	for(m2=2;m2<=14;m2++)
	{
		gotoxy(m2,24);
		printf("_");
	}	
	
	textcolor(5);
	for(m2=19;m2<=24;m2++)
	{
		gotoxy(1,m2);
		printf("|");
	}

	textcolor(5);
	for(m2=19;m2<=24;m2++)
	{
		gotoxy(16,m2);
		printf("|");
	}
	gotoxy(4,20);
	printf("Jugador 2");

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
    if(o1==1 && o2==2 && o3==3)
    {
    	printf("xD");
	}
}

