
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

//ͷ�ļ���
//�ô���ָ�� head.h �����˼���Ǽ��� head.h �ļ����c����
//������д�� 
//********************���ع��߰� 

//c++���߰� 
#include <iostream> 
//c���߰� 
#include <cstdio>
//���߿� 
#include <cstdlib>
//���� �ַ��� ����
//���ַ������и���ճ�� 

#include <cstring> 
//conio是Console Input/Output（控制台输入输出）的简写，其中定义了通过控制台进行数据输入和数据输出的函数，
//主要是一些用户通过按键盘产生的对应操作，比如getch()函数等等。
#include <conio.h>


//********************注册结构体 
//该结构体目前用于测试保存数据 

//********************ע��ṹ�� 
//�ýṹ��Ŀǰ���ڲ��Ա������� 

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

//�ýṹ������ ����

 struct LS {
 	char YXlang[50];
    char menu0[50];
   	char menu1[50];
   	char menu[20][50];
   	char sr[2][50];
   	char choice[60];
};




//********************定义全局变量
//任何文件都可以使用的数据 

//********************����ȫ�ֱ���
//�κ��ļ�������ʹ�õ����� 
>>>>>>> 更改语言
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

//********************ע�ắ�� 
//ʩչ��ôдc û�����Ǹ�����ѧc��д��
void CHelloWorld();
//�������ݽṹ�� ��ǰ�ù������ڲ��� 
void saveConfig();
//��ȡ���� 
void readConfig();
//�������� 
>>>>>>> 更改语言
void loadLang();
void loaLang_EU();
void loaLang_CN();
int lang_if();


//gui函数——界面绘画函数//

//gui������������滭����//

void gui_cls();
void gui_menu(); 
void gui_color();



//功能模块
void func();
//功能 学生信息添加 
void func_add();
//功能 学生信息删除 
void func_Delete();
//功能 关于我们 
void func_Abou();
//功能 退出 

//����ģ��
void func();
//���� ѧ����Ϣ���� 
void func_add();
//���� ѧ����Ϣɾ�� 
void func_Delete();
//���� �������� 
void func_Abou();
//���� �˳
void func_Exit();



using namespace std;



int main(int argc, char** argv) {

	//局部	变量
	int i; 

	//让使用者确定语言

	//�ֲ�	����
	int i; 

	//��ʹ����ȷ������

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

	//������ѭ�� �����ӳ���Ͳ�����ִ������˳��� 
	while(1){
	//�滭�˵� 
	gui_menu();
	
	//���й����ж�
	func();
}
	//CHelloWorld();��c�������HelloWorld 

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
	//strcpy(La.YXlang ,"你选择了中文");
	strcpy(La.YXlang ,"欢迎使用广西外国语学院学生管理系统——四维变量团队开发");
	strcpy(La.sr[0] ,"请输入");
	strcpy(La.sr[1] ,"选择功能");
	strcpy(La.choice ,"你选择了功能：");

//ԭLang�ļ�

void loaLang_CN(){
//	strcpy(LS_CN.menu0 ,"�˳�");
//	strcpy(LS_CN.menu1 ,"����");
	LS La;
	int i=0;
	strcpy(La.menu[i] ,"�˳�");
	i++;
	strcpy(La.menu[i] ,"����");
	i++;
	strcpy(La.menu[i] ,"ɾ��");
	i++;
	strcpy(La.menu[i] ,"����");
	//strcpy(La.YXlang ,"��ѡ��������");
	strcpy(La.YXlang ,"��ӭʹ�ù��������ѧԺѧ������ϵͳ������ά�����Ŷӿ���");
	strcpy(La.sr[0] ,"������");
	strcpy(La.sr[1] ,"ѡ����");
	strcpy(La.choice ,"��ѡ���˹��ܣ�");

	
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
	//strcpy(La.YXlang ,"You chose English");

	strcpy(La.YXlang ,"Welcome to 广西外国语学院 Student management system");
	strcpy(La.sr[0] ,"Please enter");
	strcpy(La.sr[1] ,"Select function");
	strcpy(La.choice ,"You chose the feature：");
	LS_EU = La;
}

//加载语言 

	strcpy(La.YXlang ,"Welcome to ���������ѧԺ Student management system");
	strcpy(La.sr[0] ,"Please enter");
	strcpy(La.sr[1] ,"Select function");
	strcpy(La.choice ,"You chose the feature��");
	LS_EU = La;
}

//�������� 
>>>>>>> 更改语言
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
	//�������� 
	char remind[] =  "��ѡ������(Please select language)\n�������Ĭ�� ����";
	
	char remind_sancf[] = "������EU/CN:";
	
	char remind_input[10];
	//int remind_input;
	//������� 
	std::cout<<remind<<remind_sancf;
	//�û����� 
	std::cin>>remind_input;
	
	//��������; 
	//loadLang(remind_input);
	
	//Сдת��д
	 strcpy(remind_input , strupr(remind_input));
	
	//������ֵ�����ж� 

	gui_cls();
	if (strcmp(remind_input,"CN") == 0){
		LS_DF = LS_CN; 
	}else if (strcmp(remind_input,"EU") == 0){
		LS_DF = LS_EU; 
	}else{
		LS_DF = LS_CN; 
		cout<<"默认中文"<<endl;

		cout<<"Ĭ������"<<endl;

	}
		cout<<LS_DF.YXlang<<endl;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
<<<<<<< b42dc21a9e11abb1aefcf75d95fa7fc72ff1a764
 //编绘菜单 
=======
 //���˵� 
>>>>>>> 更改语言
void gui_menu(){
	gui_cls();
	int n=1,i=n;
	while(LS_DF.menu[i][0]!=0){
		if(i!=n)
			cout<<endl;
		cout<<kg<<i<<"."<<LS_DF.menu[i];
		i++;
	}
<<<<<<< b42dc21a9e11abb1aefcf75d95fa7fc72ff1a764
	//退出在最后一个 
	cout<<endl<<kg<<"0."<<LS_DF.menu[0];
	//提醒输出大小
	printf("\n%s【0-%d】%s：",LS_DF.sr[0],i-1,LS_DF.sr[1]); 
}

//清空界面 
=======
	//�˳������һ�� 
	cout<<endl<<kg<<"0."<<LS_DF.menu[0];
	//���������С
	printf("\n%s��0-%d��%s��",LS_DF.sr[0],i-1,LS_DF.sr[1]); 
}

//��ս��� 
>>>>>>> 更改语言
void gui_cls(){
	system("cls");
}


void gui_color(){
	system("color 30"); 
}

























 
//������ 
void func(){
	int func_id;
	scanf("%d",&func_id);
	gui_cls();
	
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
	cout<<LS_DF.choice<<func_id;
}


//���� ѧ����Ϣ���� 

void func_add(){
	int a;
	cout<<"你选择了添加"<<endl;
	getch();
} 


//功能 学生信息删除 

//���� ѧ����Ϣɾ�� 

void func_Delete(){
	
}



//功能 关于我们 

//���� �������� 
>>>>>>> 更改语言
void func_Abou(){
	
}


//功能 退出 
void func_Exit(){
	
}

//���� �˳� 
void func_Exit(){
	
}