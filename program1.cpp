/*
1. Write a C++ program for drawing graphics
primitives and color it.
*/

#include<iostream>
#include<graphics.h>
#include<stdio.h>
int main()
{
int gdriver = DETECT, gmode;

 char path[] = "c:\\turboc3\\bgi";
 

initgraph(&gdriver, &gmode,path);

//LINE
line(250,200,350,350);
//CIRCLE
setfillstyle(SOLID_FILL,GREEN);
circle(140,150,80);
floodfill(141,150,WHITE);
//RECTANGLE
setfillstyle(SOLID_FILL,RED);
rectangle(400,100,600,200);
floodfill(401,110,WHITE);
//TRIANGLE
setfillstyle(SOLID_FILL,BLUE);
line(140,290,50,450);
line(140,290,230,450);
line(50,450,230,450);
floodfill(141,300,WHITE);

//SQUARE
setfillstyle(SOLID_FILL,YELLOW);
rectangle(400,300,550,450);
floodfill(401,310,WHITE);
getch();
closegraph();
return 0;
}
