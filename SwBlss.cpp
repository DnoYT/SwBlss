
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
//conio��Console Input/Output������̨����������ļ�д�����ж�����ͨ������̨���������������������ĺ�����
//��Ҫ��һЩ�û�ͨ�������̲����Ķ�Ӧ����������getch()�����ȵȡ�
#include <conio.h>
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
//�ýṹ������ ����
 struct LS {
 	char YXlang[50];
   	char menu[20][50];
   	char sr[2][50];
   	char choice[60];
};

//�ýṹ������ ѧ������ 
struct Date {
	//���� 
	char name[50];
	//ѧ�� 
	long int id;
	//�ɼ� 
	int sum[3];
};

//********************����ȫ�ֱ���
//�κ��ļ�������ʹ�õ����� 
LS LS_CN;
LS LS_EU;
LS LS_DF;

char kg[] = "\t\t";
//********************ע�ắ�� 
//ʩչ��ôдc û����Ǹ�����ѧc��д��
void CHelloWorld();
//�������ݽṹ�� ��ǰ�ù������ڲ��� 
void saveConfig();
//��ȡ���� 
void readConfig();
//�������� 
void loadLang();
void loaLang_EU();
void loaLang_CN();
int lang_if();
//gui������������滭����//
void gui_cls();
void gui_menu(); 
void gui_color();
//����ģ��
void func();
//���� ѧ����Ϣ��� 
void func_add();
//���� ѧ����Ϣ����
void func_lookup();
//���� ѧ����Ϣɾ�� 
void func_Delete();
//���� ѧ����Ϣ����
void func_sort();
//���� ѧ����Ϣͳ��
void func_stat();
//���� ѧ����Ϣ��ʾ
void func_disp();
//���� ѧ����Ϣ�޸�
void func_modify(); 
//���� �������� 
void func_Abou();
//���� �˳� 
void func_Exit();
using namespace std;


int main(int argc, char** argv) {
	//�ֲ�	����
	int i; 
	//��ʹ����ȷ������
	lang_if(); 
	//cout<<LS_DF.menu0<<endl;
	
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
//ԭLang�ļ�
void loaLang_CN(){
//	strcpy(LS_CN.menu0 ,"�˳�");
//	strcpy(LS_CN.menu1 ,"���");
	LS La;
	int i=0;
	strcpy(La.menu[i] ,"�˳�");
	i++;
	strcpy(La.menu[i] ,"���");
	i++;
	strcpy(La.menu[i],"����");
	i++;
	strcpy(La.menu[i] ,"ɾ��");
	i++;
	strcpy(La.menu[i],"����");
	i++;
	strcpy(La.menu[i],"��ʾ");
	i++;
	strcpy(La.menu[i],"�޸�");
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
	strcpy(La.YXlang ,"Welcome to ���������ѧԺ Student management system");
	strcpy(La.sr[0] ,"Please enter");
	strcpy(La.sr[1] ,"Select function");
	strcpy(La.choice ,"You chose the feature��");
	LS_EU = La;
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
		cout<<"Ĭ������"<<endl;
	}
		
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 //���˵� 
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
	//�˳������һ�� 
	cout<<endl<<kg<<"0."<<LS_DF.menu[0];
	//���������С
	printf("\n%s��0-%d��%s��",LS_DF.sr[0],i-1,LS_DF.sr[1]); 
}
//��ս��� 
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
//���� ѧ����Ϣ��� 
void func_add(){
	char qd,km;
	double cj,zcj[100];
	printf("\n��ȷ���Ƿ����ѧ���ɼ�(YΪ�ǣ�NΪ��)��");
	scanf("%s",&qd);
	if(qd=='Y'||qd=='y')
	{
		printf("\n��¼��ѧ���ɼ���\n");
		scanf("%lf",&cj);
		printf("�������ѧ��¼��Ŀ�Ŀ��\n");
		scanf("%s",&km);
	
		printf("ѧ���ɼ�����ӽ�ϵͳ����\n");
		//������ 
	}//else{
//		printf("������¼��ѧ���ɼ�����Ŀ\n");
//	//���ص����� 
//		printf("��ȷ���Ƿ�ȫ��¼����ϣ�(YΪ�ǣ�NΪ��)\n");
//		scanf("%s",&qd);
//		if(qd=='Y'||qd=='y'){
//		printf("ѧ���ɼ�¼����ϣ�����������һ����");
//		//������һ��	
//		}
	else
		printf("����������ص����˵�.\n");
		
	getch();
	
} 
//���� ѧ����Ϣɾ�� 
void func_Delete(){
	
}
//���� ѧ����Ϣ����
void func_sort(){
	
}
//���� ѧ����Ϣͳ��
void func_stat(){
	
}

//���� ѧ����Ϣ��ʾ
void func_disp(){
	
}

//���� ѧ����Ϣ�޸�
void func_modify(){
	
} 


//���� �������� 
void func_Abou(){
	
}
//���� �˳� 
void func_Exit(){
	
}
