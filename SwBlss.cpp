
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
//conio是Console Input/Output（控制台输入输出）的简写，其中定义了通过控制台进行数据输入和数据输出的函数，
//主要是一些用户通过按键盘产生的对应操作，比如getch()函数等等。
#include <conio.h>
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
   	char menu[20][50];
   	char sr[2][50];
   	char choice[60];
};

//该结构体用于 学生数据 
struct Date {
	//姓名 
	char name[50];
	//学号 
	long int id;
	//成绩 
	int sum[3];
};

//********************定义全局变量
//任何文件都可以使用的数据 
LS LS_CN;
LS LS_EU;
LS LS_DF;

char kg[] = "\t\t";
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
//功能模块
void func();
//功能 学生信息添加 
void func_add();
//功能 学生消息查找
void func_lookup();
//功能 学生信息删除 
void func_Delete();
//功能 学生消息排序
void func_sort();
//功能 学生消息统计
void func_stat();
//功能 学生消息显示
void func_disp();
//功能 学生消息修改
void func_modify(); 
//功能 关于我们 
void func_Abou();
//功能 退出 
void func_Exit();
using namespace std;


int main(int argc, char** argv) {
	//局部	变量
	int i; 
	//让使用者确定语言
	lang_if(); 
	//cout<<LS_DF.menu0<<endl;
	
	//程序死循环 这样子程序就不会在执行完就退出了 
	while(1){

	//绘画菜单 
	gui_menu();
	
	//进行功能判断
	func();
	}
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
	strcpy(La.menu[i],"查找");
	i++;
	strcpy(La.menu[i] ,"删除");
	i++;
	strcpy(La.menu[i],"排序");
	i++;
	strcpy(La.menu[i],"显示");
	i++;
	strcpy(La.menu[i],"修改");
	i++; 
	strcpy(La.menu[i] ,"关于");
	//strcpy(La.YXlang ,"你选择了中文");
	strcpy(La.YXlang ,"欢迎使用广西外国语学院学生管理系统——四维变量团队开发");
	strcpy(La.sr[0] ,"请输入");
	strcpy(La.sr[1] ,"选择功能");
	strcpy(La.choice ,"你选择了功能：");
	
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
	strcpy(La.menu[i],"Lookup");
	i++;
	strcpy(La.menu[i] ,"DELETE");
	i++;
	strcpy(La.menu[i] ,"Abou");
	strcpy(La.menu[i],"Sort");
	i++;
	strcpy(La.menu[i],"Statistics");
	i++;
	strcpy(La.menu[i],"Display");
	i++;
	strcpy(La.menu[i],"Modify");
	i++;
	strcpy(La.menu[i] ,"About");
	//strcpy(La.YXlang ,"You chose English");
	strcpy(La.YXlang ,"Welcome to 广西外国语学院 Student management system");
	strcpy(La.sr[0] ,"Please enter");
	strcpy(La.sr[1] ,"Select function");
	strcpy(La.choice ,"You chose the feature：");
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
	char remind[] =  "请选择语言(Please select language)\n随便输入默认 中文";
	
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
	gui_cls();
	if (strcmp(remind_input,"CN") == 0){
		LS_DF = LS_CN; 
	}else if (strcmp(remind_input,"EU") == 0){
		LS_DF = LS_EU; 
	}else{
		LS_DF = LS_CN; 
		cout<<"默认中文"<<endl;
	}
		
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 //编绘菜单 
void gui_menu(){
	gui_cls();
	
	cout<<LS_DF.YXlang<<endl;
	int n=1,i=n;
	while(LS_DF.menu[i][0]!=0){
		if(i!=n)
			cout<<endl;
		cout<<kg<<i<<"."<<LS_DF.menu[i];
		i++;
	}
	//退出在最后一个 
	cout<<endl<<kg<<"0."<<LS_DF.menu[0];
	//提醒输出大小
	printf("\n%s【0-%d】%s：",LS_DF.sr[0],i-1,LS_DF.sr[1]); 
}
//清空界面 
void gui_cls(){
	system("cls");
}
void gui_color(){
	system("color 30"); 
}
 
//主功能 
void func(){
	int func_id;
	scanf("%d",&func_id);
	//cin >> func_id;
	gui_cls();
	cout<<LS_DF.choice<<func_id;
	switch(func_id){
		case 1:
			func_add();
			break;
		case 2:
			func_Delete();
			break;
		case 3:
			func_Abou();
			break;
		case 0:
			func_Exit();
			break;
		default:
			break;
		
	} 
	
}
//功能 学生信息添加 
void func_add(){
	char qd,km;
	double cj,zcj[100];
	printf("\n请确认是否添加学生成绩(Y为是，N为否)：");
	scanf("%s",&qd);
	if(qd=='Y'||qd=='y')
	{
		printf("\n请录入学生成绩：\n");
		scanf("%lf",&cj);
		printf("请输入该学生录入的科目：\n");
		scanf("%s",&km);
	
		printf("学生成绩将添加进系统名单\n");
		//添加入库 
	}//else{
//		printf("请重新录入学生成绩、科目\n");
//	//返回第七行 
//		printf("请确认是否全部录入完毕？(Y为是，N为否)\n");
//		scanf("%s",&qd);
//		if(qd=='Y'||qd=='y'){
//		printf("学生成绩录入完毕，即将返回上一级。");
//		//返回上一级	
//		}
	else
		printf("输入任意键回到主菜单.\n");
		
	getch();
	
} 
//功能 学生信息删除 
void func_Delete(){
	
}
//功能 学生消息排序
void func_sort(){
	
}
//功能 学生消息统计
void func_stat(){
	
}

//功能 学生消息显示
void func_disp(){
	
}

//功能 学生消息修改
void func_modify(){
	
} 


//功能 关于我们 
void func_Abou(){
	
}
//功能 退出 
void func_Exit(){
	
}
