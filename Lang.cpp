#include "head.h"





void loaLang_CN(){
	strcpy(LS_CN.menu0 ,"�˳�");
	strcpy(LS_CN.menu1 ,"���");
}

void loaLang_EU(){
	strcpy(LS_CN.menu0 ,"EXIT");
	strcpy(LS_CN.menu1 ,"ADD");
}

//�������� 
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
	
	
	//�������� 
	char remind[] =  "��ѡ������(Please select language)-\n";
	
	char remind_sancf[] = "������EU/CN:";
	
	char remind_input[10];
	//int remind_input;
	//������� 
	std::cout<<remind<<remind_sancf;
	//�û����� 
	std::cin>>remind_input;
	
	//��������; 
	//loadLang(remind_input);
	if (strcmp(remind_input,"CN") ==0 ){
		cout<<"��ѡ��������"<<endl;
		LS_DF = LS_CN; 
		
		return 0;
	}
	
	
	gui_cls();
}
