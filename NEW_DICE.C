#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
 d1();
 d2();
 d3();
 d4();
 d5();
 d6();
void main()
{
int i,n;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");
while(1)
{
printf(" \n 1.roll \n2. exit");
printf("\n your choice:");
scanf("%d",&n);
switch(n)
{
case 1:
{
clrscr();
cleardevice ();
rectangle(100,200,200,300);
randomize();
i=rand()%7;
if(i==1)
{
 d1();
}
else if (i==2)
{
 d2();
}
else if (i==3)
{
 d3();
}
else if (i==4)
{
 d4();
}
else if (i==5)
{
 d5();
}
else if (i==6)
{
 d6();
}
else
{
 d4();
}
break;
}
case 2:
{
exit (0);
}
}
}
}
 d1()
{
circle (150,250,10);
return 0;
}
 d2()
{
circle (125,250,10);
circle (175,250,10);  return 0;
}
 d3()
{
 circle (150,250,10);
 circle (125,225,10);
 circle (175,275,10); return 0;
}
 d4()
{
circle (125,225,10);
 circle (175,275,10);
 circle (125,275,10);
 circle (175,225,10); return 0;
}
 d5()
{
circle (125,225,10);
 circle (175,275,10);
 circle (125,275,10);
 circle (175,225,10);
circle(150,250,10);   return 0;
}
 d6()
 {
 circle (125,225,10);
 circle (175,275,10);
 circle (125,275,10);
 circle (175,225,10);
 circle(175,250,10);
 circle (125,250,10); return 0;
}




