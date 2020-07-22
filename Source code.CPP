#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
	clrscr();
	int gdriver=DETECT,gmode;
	int x;
	initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");

	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(0,100,"press any key to view moving car");

	getch();

	for(x=-150;x<=600;x+=10)
	{
		setcolor(15);
		outtextxy(0,0,"car is move-");
		setcolor(10);

		rectangle(50+x,300,220+x,380);

		rectangle(70+x,315,125+x,350);
		rectangle(145+x,315,200+x,350);

		setfillstyle(10,10);
		floodfill(51+x,330,10);
		floodfill(219+x,310,10);

		arc(135+x,419,54,125,147);

		line(50+x,300,25+x,345);
		line(25+x,345,25+x,380);
		line(25+x,380,50+x,380);

		line(220+x,300,270+x,345);
		line(270+x,345,270+x,380);
		line(270+x,380,220+x,380);

		circle(75+x,395,15);
		circle(220+x,395,15);

		delay(100);

		cleardevice();
	}
	setcolor(15);
	outtextxy(20,20,"Thanks for watching...");
	outtextxy(20,70,"Follow me on linkedin,github,twitter");
	outtextxy(20,100,"- @Chetanguptamrt");
	getch();
	closegraph();
}