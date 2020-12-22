//头文件组
//该代码指向 head.h 大概意思就是加载 head.h 文件里的c代码
//这样子写简单 
//********************加载工具包 

//c++工具包 
#include <iostream> 
//c工具包 
#include <cstdio>
//工具库 
#include <cstdlib>
//加载 字符串 编剧库
//对字符串进行复制粘贴 
#include <cstring> 


//********************注册结构体 
//该结构体目前用于测试保存数据 
typedef struct {
     char c;
     int h;
     short n;
     long m;
     float f;
     double d1;
     char *s;
     double d2;
}st;





//该结构体用于 语言
 struct LS {
 	char YXlang[50];
    char menu0[50];
   	char menu1[50];
   	char menu[20][50];
};



//********************定义全局变量
//任何文件都可以使用的数据 
LS LS_CN;
LS LS_EU;
LS LS_DF;
char kg[] = "\t\t\t";


//********************注册函数 
//施展怎么写c 没错就是给你们学c的写的
void CHelloWorld();
//保存数据结构体 当前该功能用于测试 
void saveConfig();
//读取数据 
void readConfig();
//加载语言 
void loadLang();
void loaLang_EU();
void loaLang_CN();
int lang_if();

//gui函数——界面绘画函数//
void gui_cls();
void gui_menu(); 
void gui_color();


using namespace std;



int main(int argc, char** argv) {
	//局部	变量
	int i; 

	//让使用者确定语言
	lang_if(); 
	//cout<<LS_DF.menu0<<endl;
	

	//程序死循环 这样子程序就不会在执行完就退出了 

	//绘画菜单 
	gui_menu();
		
	//CHelloWorld();用c语言输出HelloWorld 
	return 0;
}







//原Lang文件

void loaLang_CN(){
//	strcpy(LS_CN.menu0 ,"退出");
//	strcpy(LS_CN.menu1 ,"添加");
	LS La;
	int i=0;
	strcpy(La.menu[i] ,"退出");
	i++;
	strcpy(La.menu[i] ,"添加");
	i++;
	strcpy(La.menu[i] ,"删除");
	i++;
	strcpy(La.menu[i] ,"关于");
	strcpy(La.YXlang ,"你选择了中文");
	strcpy(La.YXlang ,"欢迎使用广西外国语学院学生管理系统——四维变量团队开发");
	printf() 
	strcpy(La.YXlang ,"请输入");
	LS_CN = La;
}

void loaLang_EU(){
//	strcpy(LS_EU.menu0 ,"EXIT");
//	strcpy(LS_EU.menu1 ,"ADD");
	LS La;
	
	int i=0;
	strcpy(La.menu[i] ,"EXIT");
	i++;
	strcpy(La.menu[i] ,"ADD");
	i++;
	strcpy(La.menu[i] ,"DELETE");
	i++;
	strcpy(La.menu[i] ,"Abou");
	strcpy(La.YXlang ,"You chose English");
	strcpy(La.YXlang ,"欢迎使用广西外国语学院学生管理系统——四维变量团队开发");
	
	LS_EU = La;
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
	char remind[] =  "请选择语言(Please select language)\n";
	
	char remind_sancf[] = "请输入EU/CN:";
	
	char remind_input[10];
	//int remind_input;
	//程序输出 
	std::cout<<remind<<remind_sancf;
	//用户输入 
	std::cin>>remind_input;
	
	//加载语言; 
	//loadLang(remind_input);
	
	
	
	//小写转大写
	 strcpy(remind_input , strupr(remind_input));
	
	//的输入值进行判断 
	if (strcmp(remind_input,"CN") ==0 ){
		gui_cls();
		LS_DF = LS_CN; 
		cout<<LS_DF.YXlang<<endl;
		return 0;
	}
	
	if (strcmp(remind_input,"EU") ==0 ){
		gui_cls();
		LS_DF = LS_EU; 
		cout<<LS_DF.YXlang<<endl;
		return 0;
	}
	
	
		gui_cls();
		LS_DF = LS_CN; 
		cout<<"默认中文"<<endl;
	gui_cls();
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 //编绘菜单 
void gui_menu(){
	
	
	int n=1,i=n;
	while(LS_DF.menu[i][0]!=0){
		if(i!=n)
			cout<<endl;
		cout<<kg<<i<<"."<<LS_DF.menu[i];
		i++;
	}
	cout<<endl<<kg<<"0."<<LS_DF.menu[0];
}

//清空界面 
void gui_cls(){
	system("cls");
}


void gui_color(){
	system("color 30"); 
}
 
 
