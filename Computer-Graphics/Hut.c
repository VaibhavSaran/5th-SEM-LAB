#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<ctype.h>
int main(){
 int gd = DETECT,gm;
    initgraph(&gd, &gm, "");
  rectangle(150,180,250,300);
	  rectangle(250,180,420,300);
	  rectangle(180,250,220,300);

	line(200,100,150,180);
	line(200,100,250,180);
	line(200,100,370,100);
	line(370,100,420,180);
	getch();
    closegraph();
    return 0;
}