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
    char menu0[50];
   	char menu1[50];
   	char menu[20][50];
};



//********************����ȫ�ֱ���
//�κ��ļ�������ʹ�õ����� 
LS LS_CN;
LS LS_EU;
LS LS_DF;
char kg[] = "\t\t\t";


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


using namespace std;



int main(int argc, char** argv) {
	//�ֲ�	����
	int i; 

	//��ʹ����ȷ������
	lang_if(); 
	//cout<<LS_DF.menu0<<endl;
	

	//������ѭ�� �����ӳ���Ͳ�����ִ������˳��� 

	//�滭�˵� 
	gui_menu();
		
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
	strcpy(La.menu[i] ,"ɾ��");
	i++;
	strcpy(La.menu[i] ,"����");
	strcpy(La.YXlang ,"��ѡ��������");
	strcpy(La.YXlang ,"��ӭʹ�ù��������ѧԺѧ������ϵͳ������ά�����Ŷӿ���");
	printf() 
	strcpy(La.YXlang ,"������");
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
	strcpy(La.YXlang ,"��ӭʹ�ù��������ѧԺѧ������ϵͳ������ά�����Ŷӿ���");
	
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
	char remind[] =  "��ѡ������(Please select language)\n";
	
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
		cout<<"Ĭ������"<<endl;
	gui_cls();
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 //���˵� 
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

//��ս��� 
void gui_cls(){
	system("cls");
}


void gui_color(){
	system("color 30"); 
}
 
 
