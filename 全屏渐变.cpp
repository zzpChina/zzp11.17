#include <graphics.h>
#include <conio.h>
#define Width 640
#define Height 480

int main(){
	initgraph(Width,Height);
	int c;
	for(int i=0;i<Height;i++){
		//获取每个像素的颜色值
		c=i*255/Height;
		setlinecolor(RGB(0,c,255));
		line(0,i,639,i);//i是y轴
	}
	_getch();
	return 0;
}