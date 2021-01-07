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
    string input_menu[20];
    string display_menu[30];
    string insert_menu[20];
    string del_menu[30];
    string find_data_menu[20];
    string gui_no_date_menu[30];
    string menu[12];
    string func_menu[5];
    string Star[5];
    string C;
    string menu_head;
    string menu_end;
};

LS LS_DF;
LS LSD;


int main(int argc, char *argv[]) {

//都命令参数修改
    gui_color();
//加载语言
    loadLS();

    //启动动画
    StartAN();

    while (true) {
        //gui 界面
        //menu菜单
        gui_menu();
        //func 功能
        func();
        //清除
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
    //输出菜单开头
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t" << LSD.menu_head << endl;
    do {
        cout << "\t\t\t\t\t|\t";
        cout << LSD.menu[i];
        cout << "\t   |" << endl;
        i++;
    } while (!LSD.menu[i].empty());
    cout << "\t\t\t\t\t" << LSD.menu_end << endl;
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

    LS_DF.C = "请选择[0-7]：";

    string func_menu[] = {
            "你没有录入人数\n",
            "排序成功\n"
    };

    string input_menu[] = {
            "1.录入学生信息\n",
            "输入第%d个学员的信息\n",
            "输入学生编号:\n",
            "输入学员姓名:\n",
            "输入学员性别:\n",
            "输入学员语文成绩:\n",
            "输入学员数学成绩:\n",
            "输入学员英语成绩:\n"
    };

    string display_menu[] = {
            "班级学员信息列表",
            "\t编号\t姓名\t性别\t语文成绩\t数学成绩\t英语成绩\t平均值",
            " 位学生已被录入",
    };

    string insert_menu[] = {
            "输入新插入学员队信息\n",
            "输入学生编号:",
            "输入学员姓名:",
            "输入学员性别:",
            "输入学员语文成绩:",
            "输入学员数学成绩:",
            "输入学员英语成绩:",
            "是否继续输入?(Y/N)"
    };

    string del_menu[] = {
            "输入要删除学员的编号:"
    };

    string find_data_menu[] = {
            "输入编号：",
            "班级学员信息列表\n",
            "编号\n",
            "姓名\n",
            "性别\n",
            "语文成绩\n",
            "数学成绩\n",
            "英语成绩\n",
            "任意按键退出\n",
            "没有找到\n"
    };

    string gui_no_date_menu[] = {
            " 秒自动返回\n"
    };

    memcpy(LS_DF.menu, menu, sizeof(menu));
    memcpy(LS_DF.Star, Star, sizeof(Star));
    memcpy(LS_DF.func_menu, func_menu, sizeof(func_menu));
    memcpy(LS_DF.input_menu, input_menu, sizeof(input_menu));
    memcpy(LS_DF.display_menu, display_menu, sizeof(display_menu));
    memcpy(LS_DF.insert_menu, insert_menu, sizeof(insert_menu));
    memcpy(LS_DF.del_menu, del_menu, sizeof(del_menu));
    memcpy(LS_DF.find_data_menu, find_data_menu, sizeof(find_data_menu));
    memcpy(LS_DF.gui_no_date_menu, gui_no_date_menu, sizeof(gui_no_date_menu));
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

    LS_DF.C = "Please input[0-7]：";

    string func_menu[] = {
            "You didn't enter the number of people.\n",
            "Sorted successfully.\n"
    };

    string input_menu[] = {
            "1. Input student information\n",
            "Enter the information for %d student\n",
            "Enter student number:\n",
            "Enter student name:\n",
            "Enter student gender:\n",
            "Input students' language scores:\n",
            "Input students' math scores:\n",
            "Input students' English scores:\n"
    };

    string display_menu[] = {
            "Class student information list",
            "No\tname\tgender\tChinese score\tmath score\tEnglish scoree\taverage value",
            " student has been entered",
    };

    string insert_menu[] = {
            "Enter new team information",
            "Enter student number:",
            "Enter student name:",
            "Enter student gender:",
            "Input students' language scores:",
            "Input students' math scores:",
            "Input students' English scores:",
            "Continue to input?(Y/N)"
    };

    string del_menu[] = {
            "Enter the number of the student you want to delete:"
    };

    string find_data_menu[] = {
            "Input number:",
            "Class student information list\n",
            "number\n",
            "name\n",
            "score\n",
            "grade scores of Chinese\n",
            "Mathematics achievement\n",
            "English achievement\n",
            "Press any key to exit\n",
            "Can't find\n"
    };

    string gui_no_date_menu[] = {
            " Second auto return\n"
    };

    memcpy(LS_DF.menu, menu, sizeof(menu));
    memcpy(LS_DF.Star, Star, sizeof(Star));
    memcpy(LS_DF.func_menu, func_menu, sizeof(func_menu));
    memcpy(LS_DF.input_menu, input_menu, sizeof(input_menu));
    memcpy(LS_DF.display_menu, display_menu, sizeof(display_menu));
    memcpy(LS_DF.insert_menu, insert_menu, sizeof(insert_menu));
    memcpy(LS_DF.del_menu, del_menu, sizeof(del_menu));
    memcpy(LS_DF.find_data_menu, find_data_menu, sizeof(find_data_menu));
    memcpy(LS_DF.gui_no_date_menu, gui_no_date_menu, sizeof(gui_no_date_menu));
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
            gui_no_date(LSD.func_menu[0]);
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
            gui_no_date(LSD.func_menu[1]);
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
            str[j] = '-';
        }
        str[j - 2] = '>';
        str[j - 1] = '\0';
        cout << str;
        Sleep(50);
    }
    Sleep(1000);
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
        cout << LSD.display_menu[0] << endl << LSD.display_menu[1] << endl;
        for (i = 0; i < now_no; i++) {
            stu[i].sum = stu[i].score1 + stu[i].score2 + stu[i].score3;
            stu[i].ave = stu[i].sum / 3;
            printf("\t%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n", stu[i].no, stu[i].name, stu[i].sex, stu[i].score1,
                   stu[i].score2, stu[i].score3, stu[i].ave);
        }
        fflush(stdin);
        // printf("\t\t按任意键返回主菜单.");
        cout << "\t\t" << LSD.find_data_menu[8];
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
        int i = 0;
        cout << "\n\t\t" << LSD.insert_menu[i];
        i++;
        cout << "\n" << LSD.insert_menu[i];
        i++;
        scanf("%d", &stu[now_no].no);
        fflush(stdin);
        cout << "\n" << LSD.insert_menu[i];
        i++;
        fflush(stdin);
        gets(stu[now_no].name);
        cout << "\n" << LSD.insert_menu[i];
        i++;
        fflush(stdin);
        gets(stu[now_no].sex);
        cout << "\n" << LSD.insert_menu[i];
        i++;
        fflush(stdin);
        scanf("%f", &stu[now_no].score1);
        cout << "\n" << LSD.insert_menu[i];
        i++;
        fflush(stdin);
        scanf("%f", &stu[now_no].score2);
        cout << "\n" << LSD.insert_menu[i];
        i++;
        fflush(stdin);
        scanf("%f", &stu[now_no].score3);
        printf("\n\n");
        now_no = now_no + 1;
        sort();
        fflush(stdin);
        cout << "\n" << LSD.insert_menu[i];
        i++;
        ch = getchar();
        system("cls");
    } while (ch != 'n');
}

void del()//删除数据函数
{
    int inum, i, j;
    //printf("输入要删除学员的编号:");
    cout << LSD.del_menu[0];
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
    cout << LSD.find_data_menu[0];
    fflush(stdin);
    cin >> no;
    fflush(stdin);
    while (stu[i].no != 0) {
        if (no == stu[i].no) {
            b = true;
            break;
        }
        i++;
    }
    if (b) {
        cout << LSD.display_menu[0] << endl << LSD.display_menu[1] << endl;
        printf("\t%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n", stu[i].no, stu[i].name, stu[i].sex, stu[i].score1,
               stu[i].score2, stu[i].score3, stu[i].ave);
        cout << LSD.find_data_menu[8];
        getchar();
    } else {
        gui_no_date(LSD.find_data_menu[9]);
    }

}


void gui_no_date(string str) {

    int i = 0;
    for (i = 3; i > 0; i--) {
        cout << "\n\n\n\n\t\t\t\t" << str << " " << i << LSD.gui_no_date_menu[0];
        Sleep(1000);
        gui_cls();
    }

}

int arr_l() {
    return now_no;
}

void array_long() {
   cout<<arr_l()<<LSD.display_menu[2];
    fflush(stdin);
    cout << LSD.find_data_menu[8];
    getchar();
}
