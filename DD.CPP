#include <graphics.h>

#include <conio.h>



#define Width 640

#define Height 500



void drawHead();

void drawBody();

void drawLeg();





int main(){

	initgraph(Width,Height);

	//设置背景颜色，颜色值可以说颜色名称或者是RGB颜色

	setbkcolor(RGB(250,250,210));

	cleardevice();

	//设置原点

	setorigin(Width/2,Height/2);

	drawBody();

	drawHead();

	drawLeg();

	_getch();

	//关闭画布

	closegraph();

	return 0;

}



void drawHead(){



	//画头部轮廓,带圆角的矩形

	//设置填充颜色一定要放在图形前

	setfillcolor(RGB(30,144,255));

	fillroundrect(-120,-200,120,0,220,300);

	//画脸

	setfillcolor(WHITE);

	fillellipse(-90,-130,90,-10);

	//画眼睛

	setcolor(BLACK);

	setfillcolor(WHITE);

	fillroundrect(-45,-160,0,-100,40,50);

	fillroundrect(0,-160,45,-100,40,50);



	//画眼球

	setfillcolor(BLACK);

	fillcircle(-16,-115,5);

	fillcircle(16,-115,5);



	//画胡子,画线

	setlinecolor(BLACK);

	line(-72,-90,-30,-80);

	line(-72,-70,-30,-70);

	line(-72,-50,-30,-60);



	line(72,-90,30,-80);

	line(72,-70,30,-70);

	line(72,-50,30,-60);



	//画人中

	line(0,-90,0,-40);



	//画鼻子

	setfillcolor(RED);

	fillcircle(0,-100,10);



	//画嘴巴

	//setarccolor(BLACK);

	arc(-50,-70,50,-40,110.3,75);	

	//画围脖

	setcolor(RED);

	setfillcolor(RED);

	fillroundrect(-90,-23,90,0,10,30);

	//画铃铛儿

	setfillcolor(YELLOW);

	fillcircle(0,5,20);

	//铃铛装饰

	setlinecolor(BLACK);

	line(-18,0,18,0);

	setfillcolor(BLACK);

	fillcircle(0,8,3);

	line(0,8,0,25);

}



void drawBody(){

	

	//画大体

	setcolor(BLACK);

	setfillcolor(RGB(30,144,255));

	fillrectangle(-90,0,90,140);

	//画手

	setcolor(BLACK);

	setfillcolor(RGB(30,144,255));

	int pts[]={-140,30,-120,60,-90,40,-90,1,90,1,90,40,120,60,140,30,90,0,-90,0,-140,31};

	fillpolygon((POINT*)pts,10);

	setcolor(BLACK);

	setfillcolor(WHITE);

	fillcircle(130,50,25);

	setcolor(BLACK);

	setfillcolor(WHITE);

	fillcircle(-130,50,25);

	//画口袋圆

	setfillcolor(WHITE);

	fillcircle(0,40,70);

	setlinecolor(BLACK);

	line(-50,40,50,40);

	arc(-50,-10,50,90,110,75.35);

	//裤衩

	setcolor(BLACK);

	setfillcolor(WHITE);

	fillcircle(0,140,10);

}

void drawLeg(){

	setcolor(BLACK);

	setfillcolor(WHITE);

	fillroundrect(-110,140,0,170,20,30);

	setcolor(BLACK);

	setfillcolor(WHITE);

	fillroundrect(110,140,0,170,20,30);

}
