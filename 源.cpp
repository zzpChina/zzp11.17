#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
	//for(int i=0;i<i+1;i++){
//	char ch =_getch();
//	printf("¼üÅÌÊäÈëµÄÊÇ%c",ch=='a');
//	}
	char c=0;
	while(c!='a'){
		if(_kbhit()){
			c=_getch();
		}
		else{
			c=',';
		}
		printf("%c",c);
	}
	return 0;
}