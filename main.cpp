#include<stdio.h>
#include <graphics.h>
#include <conio.h>

#define Width 640
#define Height 480
//与小球相关的变量
float ball_x,ball_y;
int ball_vx,ball_vy;
int radius;

char c=0;
//砖块相关变量
/*int bar_Width,bar_Height;
int bar_x,bar_y;
int bar_left,bar_right,bar_buttom,bar_top;*/
float bar_x,bar_y;

void initData();
void clean();//清屏
void show();//展示
void autoAnimate();//动画
void animateControl();

void main(){
	initgraph(Width,Height);
	initData();
	BeginBatchDraw();
	while(1){
		clean();
		autoAnimate();
		animateControl();
		show();
		//danimateControl();
		FlushBatchDraw();
		Sleep(3);
	}
	EndBatchDraw();
}
//初始化数据
void initData(){
	ball_x=Width/2;
	ball_y=Height/2;
	ball_vx=1;
	ball_vy=1;
	radius=20;

	/*bar_Width=bar_Width/5;
	bar_Height=Height/6;
	bar_x=bar_Width/2;
	bar_y=bar_Height/2;
	bar_left=bar_x-50;
	bar_right=bar_x+50;
	bar_top=bar_x+120;
	bar_buttom=bar_y+120;*/
	bar_x=Width/2;
	bar_y=Height-100;

}

void clean(){
	setcolor(BLACK);
	setfillcolor(BLACK);
	fillcircle(ball_x,ball_y,radius);
	setcolor(BLACK);
	setfillcolor(BLACK);
	bar(bar_x-30,Height-50,bar_x+30,bar_y+20);
}

void show(){
	setcolor(RED);
	setfillcolor(CYAN);
	fillcircle(ball_x,ball_y,radius);
	setcolor(BLACK);
	setfillcolor(BLUE);
	//setcolor(BLACK);
	bar(bar_x-30,Height-50,bar_x+30,bar_y+20);
}

void autoAnimate(){
	ball_x+=ball_vx;
	ball_y+=ball_vy;
	//触壁反弹
	if(ball_x<=radius||ball_x>=Width-radius){
		ball_vx=-ball_vx;
	}
	if(ball_y<=radius||ball_y>=Height-radius){
		ball_vy=-ball_vy;
	}
}

	void animateControl(){
		if(_kbhit()){
			c=_getch();
		}
		switch(c){
		case 'a':{
					bar_x-=1;
					if(bar_x<=30){
					bar_x=30;
					}
					break;
				 }
		case 'd':{
					bar_x+=1;
					if(bar_x>=Width-30){
						bar_x=Width-30;
					}
					break;
				 }
		
		}
}