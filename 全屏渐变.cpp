#include <graphics.h>
#include <conio.h>
#define Width 640
#define Height 480

int main(){
	initgraph(Width,Height);
	int c;
	for(int i=0;i<Height;i++){
		//��ȡÿ�����ص���ɫֵ
		c=i*255/Height;
		setlinecolor(RGB(0,c,255));
		line(0,i,639,i);//i��y��
	}
	_getch();
	return 0;
}