#include <graphics.h>
#include <conio.h>

#define Width 640
#define Height 480

int main(){
	initgraph(Width,Height);
	float ball_x,ball_y;//小球的坐标
	float ball_vx,ball_vy;//小球的速度
	float radius=20;//半径
	ball_x=Width/2;
	ball_y=Height/2;
	ball_vx=1;
	ball_vy=1;

	//方块
	char c=0;
	float bar_x,bar_y;
	bar_x=Width/2;
	bar_y=Height-100;

		//FlushBatchDraw();
	//开始批量绘图
	BeginBatchDraw();
	
	
	while(1){
		setcolor(BLACK);
		setfillcolor(BLACK);
		fillcircle(ball_x,ball_y,radius);
		ball_x=ball_x+ball_vx;
		ball_y=ball_y+ball_vy;
		//设置小球碰壁之后反弹
		if(ball_x<radius||ball_x>=Width-radius){
			ball_vx=-ball_vx;//改变小球运动方向
		}
		if(ball_y<radius||ball_y>=Height-radius){
			ball_vy=-ball_vy;
		}
		setcolor(RED);//设置小球边框颜色
		setfillcolor(CYAN);//设置填充颜色
		fillcircle(ball_x,ball_y,radius);//创建一个小球
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
		//睡眠
		Sleep(3);
	}
	EndBatchDraw();

	_getch();
	closegraph();
	return 0;
}
