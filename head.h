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
    char menu0[50];
   	char menu1[50];
};



//********************����ȫ�ֱ���
//�κ��ļ�������ʹ�õ����� 
LS LS_CN;
LS LS_EU;
LS LS_DF;



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












