#include <graphics.h>

#include <conio.h>



#define Width 640

#define Height 500



void drawHead();

void drawBody();

void drawLeg();





int main(){

	initgraph(Width,Height);

	//���ñ�����ɫ����ɫֵ����˵��ɫ���ƻ�����RGB��ɫ

	setbkcolor(RGB(250,250,210));

	cleardevice();

	//����ԭ��

	setorigin(Width/2,Height/2);

	drawBody();

	drawHead();

	drawLeg();

	_getch();

	//�رջ���

	closegraph();

	return 0;

}



void drawHead(){



	//��ͷ������,��Բ�ǵľ���

	//���������ɫһ��Ҫ����ͼ��ǰ

	setfillcolor(RGB(30,144,255));

	fillroundrect(-120,-200,120,0,220,300);

	//����

	setfillcolor(WHITE);

	fillellipse(-90,-130,90,-10);

	//���۾�

	setcolor(BLACK);

	setfillcolor(WHITE);

	fillroundrect(-45,-160,0,-100,40,50);

	fillroundrect(0,-160,45,-100,40,50);



	//������

	setfillcolor(BLACK);

	fillcircle(-16,-115,5);

	fillcircle(16,-115,5);



	//������,����

	setlinecolor(BLACK);

	line(-72,-90,-30,-80);

	line(-72,-70,-30,-70);

	line(-72,-50,-30,-60);



	line(72,-90,30,-80);

	line(72,-70,30,-70);

	line(72,-50,30,-60);



	//������

	line(0,-90,0,-40);



	//������

	setfillcolor(RED);

	fillcircle(0,-100,10);



	//�����

	//setarccolor(BLACK);

	arc(-50,-70,50,-40,110.3,75);	

	//��Χ��

	setcolor(RED);

	setfillcolor(RED);

	fillroundrect(-90,-23,90,0,10,30);

	//��������

	setfillcolor(YELLOW);

	fillcircle(0,5,20);

	//����װ��

	setlinecolor(BLACK);

	line(-18,0,18,0);

	setfillcolor(BLACK);

	fillcircle(0,8,3);

	line(0,8,0,25);

}



void drawBody(){

	

	//������

	setcolor(BLACK);

	setfillcolor(RGB(30,144,255));

	fillrectangle(-90,0,90,140);

	//����

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

	//���ڴ�Բ

	setfillcolor(WHITE);

	fillcircle(0,40,70);

	setlinecolor(BLACK);

	line(-50,40,50,40);

	arc(-50,-10,50,90,110,75.35);

	//����

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
