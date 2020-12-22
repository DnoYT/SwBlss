#include "head.h"





void loaLang_CN(){
	strcpy(LS_CN.menu0 ,"退出");
	strcpy(LS_CN.menu1 ,"添加");
}

void loaLang_EU(){
	strcpy(LS_CN.menu0 ,"EXIT");
	strcpy(LS_CN.menu1 ,"ADD");
}

//加载语言 
void loadLang(char * remind_input){
	
//	switch(remind_input){
//		case "CN": 
//			
//			LS_DF = LS LS_CN;
//			break;
//	}
	
}

int lang_if(){
	gui_color();
	loaLang_CN();
	loaLang_EU();
	
	
	//中文提醒 
	char remind[] =  "请选择语言(Please select language)-\n";
	
	char remind_sancf[] = "请输入EU/CN:";
	
	char remind_input[10];
	//int remind_input;
	//程序输出 
	std::cout<<remind<<remind_sancf;
	//用户输入 
	std::cin>>remind_input;
	
	//加载语言; 
	//loadLang(remind_input);
	if (strcmp(remind_input,"CN") ==0 ){
		cout<<"你选择了中文"<<endl;
		LS_DF = LS_CN; 
		
		return 0;
	}
	
	
	gui_cls();
}
