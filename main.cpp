//头文件组
//该代码指向 head.h 大概意思就是加载 head.h 文件里的c代码
//这样子写简单 
#include "head.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


 

int main(int argc, char** argv) {

	//程序死循环 这样子程序就不会在执行完就退出了 
	while(1){
		//绘画菜单 
		gui_menu();
	} 
	
	//CHelloWorld();用c语言输出HelloWorld 
	return 0;
}
