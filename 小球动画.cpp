#include <graphics.h>
#include <conio.h>

#define Width 640
#define Height 480

int main(){
	initgraph(Width,Height);
	float ball_x,ball_y;//С�������
	float ball_vx,ball_vy;//С����ٶ�
	float radius=20;//�뾶
	ball_x=Width/2;
	ball_y=Height/2;
	ball_vx=1;
	ball_vy=1;

	//����
	char c=0;
	float bar_x,bar_y;
	bar_x=Width/2;
	bar_y=Height-100;

		//FlushBatchDraw();
	//��ʼ������ͼ
	BeginBatchDraw();
	
	
	while(1){
		setcolor(BLACK);
		setfillcolor(BLACK);
		fillcircle(ball_x,ball_y,radius);
		ball_x=ball_x+ball_vx;
		ball_y=ball_y+ball_vy;
		//����С������֮�󷴵�
		if(ball_x<radius||ball_x>=Width-radius){
			ball_vx=-ball_vx;//�ı�С���˶�����
		}
		if(ball_y<radius||ball_y>=Height-radius){
			ball_vy=-ball_vy;
		}
		setcolor(RED);//����С��߿���ɫ
		setfillcolor(CYAN);//���������ɫ
		fillcircle(ball_x,ball_y,radius);//����һ��С��
		setcolor(BLACK);
		setfillcolor(BLUE);
		fillrectangle(bar_x-30,Height-50,bar_x+30,bar_y+20);
		if(_kbhit()){
			c=_getch();
		}
		switch(c){
		case 'a':bar_x-=1;
					if(bar_x<=30){
					bar_x=30;
					}break;
		case 'd':bar_x+=1;	
					if(bar_x>=Width-30){
						bar_x=Width-30;
					}break;
		
		}
		FlushBatchDraw();
		//˯��
		Sleep(3);
	}
	EndBatchDraw();

	_getch();
	closegraph();
	return 0;
}
