#include <graphics.h>
#include <conio.h>
#include <math.h>
#define Width 640
#define Height 480
#define PI 3.14

int main(){
	initgraph(Width,Height);
	
	int x,y,r=200;
	int c;
	for(double i=0;i<PI*2;i+=0.00001){
		x=(int)r*cos(i)+320+0.5;
		y=(int)r*sin(i)+240+0.5;
		c=(i*255)/(2*PI);
		setlinecolor(RGB(c,0,0));
		line(320,240,x,y);
	}

	_getch();
	closegraph();
	return 0;
}