#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <bios.h>
#include <time.h>
#include <iostream.h>
#include <math.h>
#include <string.h>
#include <io.h>
#include <sys\stat.h>
#include <fcntl.h>
int fzt=0;
int max(float a,float b){
	if(a>b)
		return a;
	else
		return b;}
int min(float a,float b){
	if(a<b)
		return a;
	else
		return b;}
int main(void){
int gdriver=DETECT, gmode, errorcode;
clrscr();
char stream[10000];
int e,zaq,res,zoq;
int font2;
char c;
if((zaq=open("c:\\borlandc\\bin\\boing.bzt",O_TEXT))!=-1){
	lseek(zaq, 0, SEEK_SET);
	read(zaq,&stream,1);
	close(zaq);}
else{
	zaq=open("C:\\borlandc\\bin\\boing.bzt",O_CREAT | O_TEXT);
	write(zaq,"1",1);
	c='1';
	close(zaq);}
e=c-48;
if((zaq=open("c:\\borlandc\\bin\\boyng.bzt",O_TEXT))!=-1){
	lseek(zaq, 0, SEEK_SET);
	read(zaq,&stream,1);
	close(zaq);}
else{
	zaq=open("C:\\borlandc\\bin\\boyng.bzt",O_CREAT | O_TEXT);
	write(zaq,"8",1);
	strcpy(stream,"8");
	close(zaq);}
long double dif;
dif=_atold(stream);
initgraph(&gdriver,&gmode,"C:\\borlandc\\bgi");
errorcode=graphresult();
if(errorcode!=grOk){
	cout<<"There appears to be a stupid error: "<<grapherrormsg(errorcode);
	getch();
	return 0;}
int i,ran;
setcolor(WHITE);
setcolor(WHITE);
setfillstyle(SOLID_FILL,BLUE);
fillellipse(250,225,50,50);
delay(10);
settextstyle(BOLD_FONT,0,8);
setcolor(MAGENTA);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(320,200,"B  ING");
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(132,200,MAGENTA);
floodfill(320,200,MAGENTA);
floodfill(355,200,MAGENTA);
floodfill(440,200,MAGENTA);
getch();
closegraph();
int q;//int j;
float a1,k1,y1,y1a,x,a,nr,b,y,ya,sp=0,sc=0;
char s[100],s1[100],ch;
int t,ta,userfont,zip;
clock_t time,t1,t2;
textmode(1);
gotoxy(12,10);
ch='x';
nr=1;
_setcursortype(_NOCURSOR);
menu:;
clrscr();
window(1, 1, 40, 25);
gotoxy(12,10);
ch='X';
c='X';
textbackground(BLACK);
textcolor(GREEN);
gotoxy(12,9);
cprintf("New game");
textbackground(BLACK);
textcolor(GREEN);
gotoxy(12,11);
cprintf("Help");
textbackground(BLACK);
textcolor(GREEN);
gotoxy(12,13);
cprintf("Sound:");
gotoxy(12,15);
cprintf("Difficulty");
gotoxy(12,17);
cprintf("Exit");
if(nr==1){
	textbackground(GREEN);
	textcolor(BLACK);
	gotoxy(12,9);
	cprintf("New game");}
if(nr==2){
	textbackground(GREEN);
	textcolor(BLACK);
	gotoxy(12,11);
	cprintf("Help");}
if(nr==3){
	textbackground(GREEN);
	textcolor(BLACK);
	gotoxy(12,13);
	cprintf("Sound:");}
if(e){
	textbackground(BLACK);
	textcolor(YELLOW);
	gotoxy(21,13);
	cprintf("On");}
else{
	textbackground(BLACK);
	textcolor(DARKGRAY);
	gotoxy(21,13);
	cprintf("On");}
if(e){
	textbackground(BLACK);
	textcolor(DARKGRAY);
	gotoxy(26,13);
	cprintf("Off");}
else{
	textbackground(BLACK);
	textcolor(YELLOW);
	gotoxy(26,13);
	cprintf("Off");}
if(nr==4){
	textbackground(GREEN);
	textcolor(BLACK);
	gotoxy(12,15);
	cprintf("Difficulty");}
if(nr==5){
	textbackground(GREEN);
	textcolor(BLACK);
	gotoxy(12,17);
	cprintf("Exit");}
while(ch!='\r'){
	ch='X';
	while(ch!=0x4b&&ch!=0x4d&&ch!=0x48&&ch!=0x50&&ch!='\r')
		ch=getch();
	if(nr==1){
		textbackground(BLACK);
		textcolor(GREEN);
		gotoxy(12,9);
		cprintf("New game");}
	if(nr==2){
		textbackground(BLACK);
		textcolor(GREEN);
		gotoxy(12,11);
		cprintf("Help");}
	if(nr==3){
		textbackground(BLACK);
		textcolor(GREEN);
		gotoxy(12,13);
		cprintf("Sound:");}
	if(e){
		textbackground(BLACK);
		textcolor(YELLOW);
		gotoxy(21,13);
		cprintf("On");}
	else{
		textbackground(BLACK);
		textcolor(DARKGRAY);
		gotoxy(21,13);
		cprintf("On");}
	if(e){
		textbackground(BLACK);
		textcolor(DARKGRAY);
		gotoxy(26,13);
		cprintf("Off");}
	else{
		textbackground(BLACK);
		textcolor(YELLOW);
		gotoxy(26,13);
		cprintf("Off");}
	if(nr==4){
		textbackground(BLACK);
		textcolor(GREEN);
		gotoxy(12,15);
		cprintf("Difficulty");}
	if(nr==5){
		textbackground(BLACK);
		textcolor(GREEN);
		gotoxy(12,17);
		cprintf("Exit");}
	if(ch==0x48){
		if(nr==1)
			nr=5;
		else
			nr--;}
	if(ch==0x50){
		if(nr==1||nr==2||nr==3||nr==4)
			nr++;
		else
			nr=1;}
	if(nr==1){
		textbackground(GREEN);
		textcolor(BLACK);
		gotoxy(12,9);
		cprintf("New game");}
	if(nr==2){
		textbackground(GREEN);
		textcolor(BLACK);
		gotoxy(12,11);
		cprintf("Help");}
	if(nr==3){
		textbackground(GREEN);
		textcolor(BLACK);
		gotoxy(12,13);
		cprintf("Sound:");}
	if(e){
		textbackground(BLACK);
		textcolor(YELLOW);
		gotoxy(21,13);
		cprintf("On");}
	else{
		textbackground(BLACK);
		textcolor(DARKGRAY);
		gotoxy(21,13);
		cprintf("On");}
	if(e){
		textbackground(BLACK);
		textcolor(DARKGRAY);
		gotoxy(26,13);
		cprintf("Off");}
	else{
		textbackground(BLACK);
		textcolor(YELLOW);
		gotoxy(26,13);
		cprintf("Off");}
	if(nr==4){
		textbackground(GREEN);
		textcolor(BLACK);
		gotoxy(12,15);
		cprintf("Difficulty");}
	if(nr==5){
		textbackground(GREEN);
		textcolor(BLACK);
		gotoxy(12,17);
		cprintf("Exit");}}
textbackground(BLACK);
textcolor(CYAN);
if(nr==2){
	clrscr();
	window(5,8,35,18);
	gotoxy(1,13);
	cprintf("  UP and DOWN - move pad\r\n  Q - quit game\r\n  D - destroy ball(the computer      will get a point)\r\n  P - pause\r\n\r\n  Press ENTER to exit Help");
	while(c!='\r')
		c=getch();
	goto menu;}
if(nr==3){
	e=!e;
	c=e+48;
	zaq=creat("C:\\borlandc\\bin\\boing.bzt",S_IREAD|S_IWRITE);
	write(zaq,&c,1);
	goto menu;}
if(nr==4){
	textcolor(MAGENTA);
	clrscr();
	gotoxy(5,7);
	cprintf("  Enter a new difficulty level          and then press ENTER. It can be         any positive real number. Please        note that difficulty levels over        10 are not recommended.\r\n");
	cout<<endl<<"      Current level: "<<dif<<endl<<endl<<"      New level: ";
	_setcursortype(_NORMALCURSOR);
	cin>>dif;
	zoq=creat("C:\\borlandc\\bin\\boyng.bzt",S_IREAD|S_IWRITE);
	gcvt(dif,10,stream);
	write(zoq,stream,strlen(stream));
	textbackground(BLACK);
	_setcursortype(_NOCURSOR);
	clrscr();
	goto menu;}
if(nr==5){
	clrscr();
	return 0;}
	initgraph(&gdriver, &gmode, "c:\\borlandc\\bgi");
	errorcode = graphresult(); /* check for any errors */
	if (errorcode != grOk){
		printf("Graphics error: %s\n", grapherrormsg(errorcode));
		printf("Press any key to halt:");
		getch();
		exit(1);}
setfillstyle(SOLID_FILL,GREEN);
bar(0,50,640,430);
setfillstyle(SOLID_FILL,BROWN);
bar(50,200,55,280);
bar(585,200,590,280);
setfillstyle(SOLID_FILL,BLUE);
fillellipse(320,240,8,8);
y1=200;
c='x';
x=320;
y=240;
randomize();
a=-3;
b=(float(rand()%8-3))/10.000000;
ya=y;
k1=1;
ta=180;
gotoxy(38,3);
settextstyle(0,0,3);
settextjustify(CENTER_TEXT,CENTER_TEXT);
setcolor(YELLOW);
outtextxy(320,15,"0 : 0");
q=5;
settextstyle(0,0,1);
outtextxy(320,300,"Press any key to start");
gotoxy(38,3);
cout<<"3 : 00";
getch();
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
bar(100,290,500,310);
settextstyle(0,0,3);
time=clock();
c='x';
while((clock()-time)/CLK_TCK<ta&&c!='q'){
	setcolor(BLACK);
	line(0,49,640,49);
	line(0,431,640,431);
	y1a=y1;
	if(kbhit())
		c=getch();
	if(c==0x50&&y1<390)
		y1+=10;
	if(c==0x48&&y1>10)
		y1-=10;
	if(c!='q'&&c!='p'&&c!='d')
		c='x';
	setcolor(GREEN);
	setfillstyle(SOLID_FILL,GREEN);
	fillellipse(x,y,8,8);
	if(y1>y1a){
		if(y1-10>=50)
			bar(50,y1-10,55,y1-1);
		setfillstyle(SOLID_FILL,BROWN);
		bar(50,max(y1,50),55,min(y1+80,430));}
	else
		if(y1+90<=430)
			bar(50,y1+81,55,y1+90);
	setfillstyle(SOLID_FILL,BROWN);
	bar(50,max(y1,50),55,min(y1+80,430));
	if(getpixel(x,y+11)!=GREEN&&q!=3){
		b=-fabs(b);
		if(e)
			sound(200);
		q=3;}
	if(getpixel(x,y-11)!=GREEN&&q!=2){
		b=fabs(b);
		if(e)
			sound(200);
		q=2;}
	if((getpixel(x+11,y)==BROWN&&x>320)||(getpixel(x+11,y+11)==BROWN&&x>320)){
		b=3*(y-ya)/50;
		a=-3;
		if(e)
			sound(200);
		q=0;}
	if((getpixel(x-11,y)==BROWN&&x<320)||(getpixel(x-10,y-10)==BROWN&&x<320)){
		b=3*(y-(y1+40))/50;
		a=3;
		if(e)
			sound(200);
		q=0;}
	if(x<10||x>630)
		k1=1000;
	if(c=='p'){
		k1=100;
		c='x';}
	x+=a;
	y+=b;
	randomize();
	ran=rand()%80-40;
	if(ya>y+ran&&x>320){
		ya-=dif/4.0;
		a1=-1;}
	if(ya<y+ran&&x>320){
		a1=1;
		ya+=dif/4.0;}
	setfillstyle(SOLID_FILL,GREEN);
	if(a1>0)
		bar(585,max(ya-41,50),590,max(ya-41-dif/4.0,50));
	else
		bar(585,min(ya+41,430),590,min(ya+41+dif/4.0,430));
	setfillstyle(SOLID_FILL,BROWN);
	bar(585,max(ya-40,50),590,min(ya+40,430));
	setfillstyle(SOLID_FILL,BLUE);
	setcolor(WHITE);
	fillellipse(x,y,8,8);
	t=ta-(floor((clock()-time)/CLK_TCK));
	gotoxy(38,3);
	cout<<t/60<<" : "<<t%60/10<<t%10;
	if(k1==100){
		nosound();
		t1=clock();
		settextstyle(3,0,2);
		setcolor(LIGHTCYAN);
		outtextxy(320,240,"GAME PAUSED");
		settextstyle(0,0,1);
		outtextxy(320,300,"Press ENTER to continue");
		while(c!='\r')
			c=getch();
		c='x';
		k1=1;
		setcolor(GREEN);
		setfillstyle(SOLID_FILL,GREEN);
		bar(100,200,500,400);
		settextstyle(0,0,3);
		t2=clock();
		ta+=(t2-t1)/CLK_TCK;}
	if(c=='d'){
		c='t';
		nosound();
		for(i=1;i<=30;i++){
			setcolor(YELLOW);
			circle(x,y,i);
			setcolor(GREEN);
			circle(x,y,i-5);
			if(e)
				sound((31-i)*100);
			delay(5);}
		nosound();
		setfillstyle(SOLID_FILL,GREEN);
		fillellipse(x,y,30,30);
		setfillstyle(SOLID_FILL,BROWN);
		bar(585,max(ya-40,50),590,min(ya+40,430));
		if(y1>y1a){
			setfillstyle(SOLID_FILL,BROWN);
			bar(50,max(y1,50),55,min(y1+80,430));}
		setfillstyle(SOLID_FILL,BROWN);
		bar(50,max(y1,50),55,min(y1+80,430));
		setcolor(BLACK);
		setfillstyle(SOLID_FILL,BLACK);
		bar(0,0,640,49);
		bar(0,431,640,480);
		settextstyle(0,0,3);
		setcolor(YELLOW);
		strcat(strcat(ltoa(sp,s,10)," : "),ltoa(sc,s1,10));
		outtextxy(320,15,s);
		gotoxy(38,3);
		t=ta-(floor((clock()-time)/CLK_TCK));
		cout<<t/60<<" : "<<t%60/10<<t%10;
		delay(1000);
		t=ta-(floor((clock()-time)/CLK_TCK));
		gotoxy(38,3);
		cout<<t/60<<" : "<<t%60/10<<t%10;
		k1=1000;
		sc++;}
	if(c=='q'){
		nosound();
		t1=clock();
		settextstyle(3,0,2);
		setcolor(RED);
		outtextxy(320,240,"Quit? (Y/N)");
		while(c!='n'&&c!='y')
			c=getch();
		if(c=='y')
			c='q';
		else{
			c='x';
			setcolor(GREEN);
			setfillstyle(SOLID_FILL,GREEN);
			bar(100,200,500,300);
			t2=clock();
			ta+=(t2-t1)/CLK_TCK;
			settextstyle(0,0,3);}}
	if(k1==1000){
		setcolor(GREEN);
		setfillstyle(SOLID_FILL,GREEN);
		fillellipse(x,y,8,8);
		if(c!='t')
			for(i=1;i<=30;i++){
				if(e)
					sound(i*100);
				delay(5);}
		nosound();
		if(x>620)
			sp++;
		if(x<20)
			sc++;
		bar(50,y1,55,y1+80);
		bar(585,ya-40,590,ya+40);
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,BROWN);
		bar(50,200,55,280);
		bar(585,200,590,280);
		setfillstyle(SOLID_FILL,BLUE);
		fillellipse(320,240,8,8);
		x=320;
		y=240;
		k1=1;
		ya=y;
		y1=200;
		a=-3;
		b=(float(rand()%8)-3)/10.000000;
		setfillstyle(SOLID_FILL,BLACK);
		setcolor(BLACK);
		bar(0,0,60,49);
		bar(500,0,640,49);
		bar(0,431,60,480);
		bar(500,431,640,480);
		bar(0,0,640,25);
		setcolor(YELLOW);
		strcat(strcat(ltoa(sp,s,10)," : "),ltoa(sc,s1,10));
		outtextxy(320,15,s);
		t1=clock();
		settextstyle(DEFAULT_FONT,0,1);
		outtextxy(320,300,"Press ENTER to continue");
		settextstyle(DEFAULT_FONT,0,3);
		c='X';
		while(c!='\r')
			c=getch();
		t2=clock();
		ta+=(t2-t1)/CLK_TCK;
		setcolor(GREEN);
		setfillstyle(SOLID_FILL,GREEN);
		bar(100,290,500,310);}
	delay(5);
	nosound();}
if(c!='q'){
	gotoxy(38,3);
	cout<<"0 : 00";
	font2=installuserfont("LCOM.CHR");
	setcolor(LIGHTRED);
	setfillstyle(SOLID_FILL,LIGHTCYAN);
	settextstyle(BOLD_FONT,0,4);
	outtextxy(320,200,"GAME OVER");
	floodfill(185,200,LIGHTRED);
	floodfill(230,200,LIGHTRED);
	floodfill(270,200,LIGHTRED);
	floodfill(290,200,LIGHTRED);
	floodfill(340,200,LIGHTRED);
	floodfill(395,200,LIGHTRED);
	floodfill(405,200,LIGHTRED);
	floodfill(455,200,LIGHTRED);
	setcolor(YELLOW);
	settextstyle(font2,0,2);
	if(sp==sc)
		outtextxy(320,260,"DRAW");
	setcolor(RED);
	if(sp>sc)
		outtextxy(320,260,"YOU WIN");
	setcolor(BLUE);
	if(sc>sp)
		outtextxy(320,260,"YOU LOSE");
	setcolor(WHITE);
	c='x';
	settextstyle(DEFAULT_FONT,0,1);
	outtextxy(320,300,"Press ENTER to return to menu");
	while(c!='\r')
		c=getch();}
closegraph();
sp=0;
sc=0;
_setcursortype(_NOCURSOR);
goto menu;
}