#include <iostream>
#include <windows.h>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;

//启动动画
void StartAN();

//清空界面
void gui_cls();

void gui_color();

void gui_menu();

void loadLS();

void func();

void find_data();

void input();

void sort();

void display();

void insert();

void del();

void average();

void array_long();

int now_no = 0;

int arr_l();

void gui_no_date(string str);


#define MAX 1000


struct student {
    int no;
    char name[20];
    char sex[4];
    float score1;
    float score2;
    float score3;
    float sort;
    float ave;
    float sum;
};
struct student stu[MAX], *p;


struct LS {
    string menu[12];
    string Star[5];
    string C;
    string menu_head;
    string menu_end;
};

LS LS_DF;
LS LSD;


int main(int argc, char *argv[]) {

    gui_color();

    loadLS();
    StartAN();
    while (true) {
        gui_menu();
        //cin>>select;
        func();
        gui_cls();
    }
    return 0;
}


//清空界面
void gui_cls() {
    system("cls");
}


void gui_color() {
    system("color 30");
    //设置大小
    system("mode con cols=120 lines=40");
    //更改控制台编码
    //system("chcp 65001");
}

void gui_menu() {
    int i = 0;
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t" << LSD.menu_head << endl;
    do {
        cout << "\t\t\t|\t";
        cout << LSD.menu[i];
        cout << "\t   |" << endl;
        i++;
    } while (!LSD.menu[i].empty());
    cout << "\t\t\t" << LSD.menu_end << endl;
}


LS loadLS_CN() {
    LS_DF.menu_head = " ============菜单==========";
    LS_DF.menu_end = " ==========================";
    string menu[] = {
            //  "=====菜单=====",
            "1.添加学生数据",
            "2.查找学生数据",
            "3.删除学生信息",
            "4.排序学生信息",
            "5.统计学生信息",
            "6.显示学生信息",
            "7.修改系统语言",
            "0.退出教务系统"
    };

    string Star[] = {
            "Ytian在琢磨系统该如何开启中。。。。\n",
            "Ytian把电脑打开了 哈哈哈哈。。。\n",
            "Ytian开始构建数据库。。。。\n",
            "Ytian尝试使用黑洞战星 破解校园网。。。。\n",
            "加载完 耐心等待。。。。\n"
    };

    LS_DF.C = "请选择[0-5]：";

    memcpy(LS_DF.menu, menu, sizeof(menu));
    memcpy(LS_DF.Star, Star, sizeof(Star));
    return LS_DF;
}


LS loadLS_EU() {
    LS_DF.menu_head = " ===============Menu===============";
    LS_DF.menu_end = " ==================================";
    string menu[] = {
            //  "========Menu======",
            "1.Add  student data",
            "2.Find student data",
            "3.Del  student data",
            "4.Sort student data",
            "5.Statistics   data",
            "6.Display      data",
            "7.set system  lang",
            "0.     EXIT       "
    };

    string Star[] = {
            "Ytian is thinking about how to start the system。。。。\n",
            "Yitian turns on the computer, ha ha ha。。。\n",
            "Ytian started building the database。。。。\n",
            "Ytian tries to crack the campus network with black hole War Star。。。。\n",
            "Wait patiently after loading。。。。\n"
    };
    LS_DF.C = "Please input[0-5]：";
    memcpy(LS_DF.menu, menu, sizeof(menu));
    memcpy(LS_DF.Star, Star, sizeof(Star));
    return LS_DF;
}

//load
void loadLS() {
    //string str;
    char remind_input[10];
    fflush(stdin);
    cout << "请选择语言(Please select language)\n随便输入默认CN" << endl << "请输入EU/CN:";
    cin >> remind_input;
    strcpy(remind_input, strupr(remind_input));
    if (strcmp(remind_input, "CN") == 0)
        LSD = loadLS_CN();
    else if (strcmp(remind_input, "EU") == 0)
        LSD = loadLS_EU();
    else
        LSD = loadLS_CN();
    gui_cls();
}


//主功能
void func() {
    char select;
    cout << "\t\t" << LSD.C;
    select = getchar();
    gui_cls();

    if (select > '1' && select < '7') {
        if (arr_l() < 1) {
            gui_no_date("你没有录入人数 ");
            goto exit2;
        }
    }

    switch (select) {
        case '1':
            //input();
            insert();
            break;
        case '2':
            find_data();
            break;
        case '3':
            del();
            break;
        case '4':
            sort();
            gui_no_date("排序成功 ");
            break;
        case '5':
            array_long();
            break;
        case '6':
            display();
            break;
        case '7':
            loadLS();
            break;
        case '0':
            exit(0);
            break;
    }
    exit2:
    system("cls");
}


void StartAN() {

    int j = 0;
    int l = 100;
    int i = 0;
    char str[l];

    for (i = 0; i < l; i++) {
        system("cls");

        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl
             << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl
             << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        if (i < 30) cout << LSD.Star[0];
        if (i > 29 && i < 50) cout << LSD.Star[1];
        if (i > 49 && i < 70) cout << LSD.Star[2];
        if (i > 69 && i < 90) cout << LSD.Star[3];
        if (i > 89) cout << LSD.Star[4];

        printf("[%d/%d]", i, l);
        for (j = 0; j < i; j++) {
            // Sleep(100);//这里指100毫秒
            //printf("\b");
            str[j] = '-';
        }
        str[j - 2] = '>';
        str[j - 1] = '\0';
        cout << str;
        Sleep(50);
    }
    Sleep(1000);
    system("cls");

    //cout<<" e";//注意字母e要往前一格
}


void input()//原始数据录入模块
{
    int i = 0;
    char ch;
    do {
        printf("\t\t\t\t1.录入学员信息\n输入第%d个学员的信息\n", i + 1);
        printf("\n输入学生编号:");
        scanf("%d", &stu[i].no);
        fflush(stdin);
        printf("\n输入学员姓名:");
        fflush(stdin);
        gets(stu[i].name);
        printf("\n输入学员性别:");
        fflush(stdin);
        gets(stu[i].sex);
        printf("\n输入学员成绩:");
        fflush(stdin);
        scanf("%f", &stu[i].score1);
        printf("\n输入学员成绩:");
        fflush(stdin);
        scanf("%f", &stu[i].score2);
        printf("\n输入学员成绩:");
        fflush(stdin);
        scanf("%f", &stu[i].score3);
        printf("\n\n");
        i++;
        now_no = i;
        //printf("%d",now_no);
        fflush(stdin);
        printf("是否继续输入?(Y/N)");
        ch = getchar();
        system("cls");
    } while (ch != 'n');
    system("cls");
}

void sort()//排序数据函数
{
    struct student temp;
    int i, j;
    for (i = 1; i < now_no; i++) {
        for (j = 1; j <= now_no - i; j++) {
            if (stu[j - 1].ave < stu[j].ave) {
                temp = stu[j];
                stu[j] = stu[j - 1];
                stu[j - 1] = temp;
            }
        }
    }

}

void display()//显示数据函数
{
    int i;
    char as;
    float ave;
    do {
        printf("\t\t班级学员信息列表\n");
        printf("\t编号\t姓名\t性别\t成绩\t成绩\t成绩\t平均值\n");
        for (i = 0; i < now_no; i++) {
            stu[i].sum = stu[i].score1 + stu[i].score2 + stu[i].score3;
            stu[i].ave = stu[i].sum / 3;
            printf("\t%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n", stu[i].no, stu[i].name, stu[i].sex, stu[i].score1,
                   stu[i].score2, stu[i].score3, stu[i].ave);
        }
        fflush(stdin);
        printf("\t\t按任意键返回主菜单.");
        as = getchar();
        goto exit;
    } while (as != 'n');
    exit:
    system("cls");
}

void insert()//插入数据函数
{
    char ch;
    do {
        printf("\n\t\t输入新插入学员队信息\n");
        printf("\n输入学生编号:");
        scanf("%d", &stu[now_no].no);
        fflush(stdin);
        printf("\n输入学员姓名:");
        fflush(stdin);
        gets(stu[now_no].name);
        printf("\n输入学员性别:");
        fflush(stdin);
        gets(stu[now_no].sex);
        printf("\n输入学员成绩:");
        fflush(stdin);
        scanf("%f", &stu[now_no].score1);
        printf("\n输入学员成绩:");
        fflush(stdin);
        scanf("%f", &stu[now_no].score2);
        printf("\n输入学员成绩:");
        fflush(stdin);
        scanf("%f", &stu[now_no].score3);
        printf("\n\n");
        now_no = now_no + 1;
        sort();
        fflush(stdin);
        printf("是否继续输入?(Y/N)");
        ch = getchar();
        system("cls");
    } while (ch != 'n');
}

void del()//删除数据函数
{
    int inum, i, j;
    printf("输入要删除学员的编号:");
    fflush(stdin);
    scanf("%d", &inum);
    for (i = 0; i < now_no; i++) {
        if (stu[i].no == inum) {
            for (j = i; j < now_no; j++) {
                stu[i] = stu[i + 1];
            }
            now_no = now_no - 1;
        }
        break;
    }
    system("cls");
}


void find_data() {
    int no = 0, i = 0;
    bool b = false;
    cout << "输入编号：";
    fflush(stdin);
    cin >> no;
    fflush(stdin);
    while (stu[i].no != 0) {
        if (no == stu[i].no) {
            b = true;
//            cout<<b<<endl;
//            getchar();
            break;
        }
        i++;
    }
    if (b) {
        printf("\t\t班级学员信息列表\n");
        printf("\t编号\t姓名\t性别\t成绩\t成绩\t成绩\t平均值\n");
        printf("\t%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n", stu[i].no, stu[i].name, stu[i].sex, stu[i].score1,
               stu[i].score2, stu[i].score3, stu[i].ave);
        cout << "任意按键退出";
        getchar();
    } else {
        gui_no_date("没有找到 ");
    }

}


void gui_no_date(string str) {

    int i = 0;
    for (i = 3; i > 0; i--) {
        cout << "\n\n\n\n\t\t\t\t" << str << " " << i << " 秒自动返回";
        Sleep(1000);
        gui_cls();
    }

}

int arr_l() {
    int i = 0;
    while (stu[i].no != 0) {
        i++;
    }
    return i;
}

void array_long() {
    cout << "已经录入 " << arr_l() << " 位学生" << endl;
    fflush(stdin);
    printf("\t\t按任意键返回主菜单.");
    getchar();
}