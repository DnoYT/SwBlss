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
    char menu0[50];
   	char menu1[50];
};



//********************定义全局变量
//任何文件都可以使用的数据 
LS LS_CN;
LS LS_EU;
LS LS_DF;



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












