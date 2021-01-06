#include <iostream>
#include <windows.h>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;

//��������
void StartAN();

//��ս���
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


//��ս���
void gui_cls() {
    system("cls");
}


void gui_color() {
    system("color 30");
    //���ô�С
    system("mode con cols=120 lines=40");
    //���Ŀ���̨����
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
    LS_DF.menu_head = " ============�˵�==========";
    LS_DF.menu_end = " ==========================";
    string menu[] = {
            //  "=====�˵�=====",
            "1.���ѧ������",
            "2.����ѧ������",
            "3.ɾ��ѧ����Ϣ",
            "4.����ѧ����Ϣ",
            "5.ͳ��ѧ����Ϣ",
            "6.��ʾѧ����Ϣ",
            "7.�޸�ϵͳ����",
            "0.�˳�����ϵͳ"
    };

    string Star[] = {
            "Ytian����ĥϵͳ����ο����С�������\n",
            "Ytian�ѵ��Դ��� ��������������\n",
            "Ytian��ʼ�������ݿ⡣������\n",
            "Ytian����ʹ�úڶ�ս�� �ƽ�У԰����������\n",
            "������ ���ĵȴ���������\n"
    };

    LS_DF.C = "��ѡ��[0-5]��";

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
            "Ytian is thinking about how to start the system��������\n",
            "Yitian turns on the computer, ha ha ha������\n",
            "Ytian started building the database��������\n",
            "Ytian tries to crack the campus network with black hole War Star��������\n",
            "Wait patiently after loading��������\n"
    };
    LS_DF.C = "Please input[0-5]��";
    memcpy(LS_DF.menu, menu, sizeof(menu));
    memcpy(LS_DF.Star, Star, sizeof(Star));
    return LS_DF;
}

//load
void loadLS() {
    //string str;
    char remind_input[10];
    fflush(stdin);
    cout << "��ѡ������(Please select language)\n�������Ĭ��CN" << endl << "������EU/CN:";
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


//������
void func() {
    char select;
    cout << "\t\t" << LSD.C;
    select = getchar();
    gui_cls();

    if (select > '1' && select < '7') {
        if (arr_l() < 1) {
            gui_no_date("��û��¼������ ");
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
            gui_no_date("����ɹ� ");
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
            // Sleep(100);//����ָ100����
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

    //cout<<" e";//ע����ĸeҪ��ǰһ��
}


void input()//ԭʼ����¼��ģ��
{
    int i = 0;
    char ch;
    do {
        printf("\t\t\t\t1.¼��ѧԱ��Ϣ\n�����%d��ѧԱ����Ϣ\n", i + 1);
        printf("\n����ѧ�����:");
        scanf("%d", &stu[i].no);
        fflush(stdin);
        printf("\n����ѧԱ����:");
        fflush(stdin);
        gets(stu[i].name);
        printf("\n����ѧԱ�Ա�:");
        fflush(stdin);
        gets(stu[i].sex);
        printf("\n����ѧԱ�ɼ�:");
        fflush(stdin);
        scanf("%f", &stu[i].score1);
        printf("\n����ѧԱ�ɼ�:");
        fflush(stdin);
        scanf("%f", &stu[i].score2);
        printf("\n����ѧԱ�ɼ�:");
        fflush(stdin);
        scanf("%f", &stu[i].score3);
        printf("\n\n");
        i++;
        now_no = i;
        //printf("%d",now_no);
        fflush(stdin);
        printf("�Ƿ��������?(Y/N)");
        ch = getchar();
        system("cls");
    } while (ch != 'n');
    system("cls");
}

void sort()//�������ݺ���
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

void display()//��ʾ���ݺ���
{
    int i;
    char as;
    float ave;
    do {
        printf("\t\t�༶ѧԱ��Ϣ�б�\n");
        printf("\t���\t����\t�Ա�\t�ɼ�\t�ɼ�\t�ɼ�\tƽ��ֵ\n");
        for (i = 0; i < now_no; i++) {
            stu[i].sum = stu[i].score1 + stu[i].score2 + stu[i].score3;
            stu[i].ave = stu[i].sum / 3;
            printf("\t%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n", stu[i].no, stu[i].name, stu[i].sex, stu[i].score1,
                   stu[i].score2, stu[i].score3, stu[i].ave);
        }
        fflush(stdin);
        printf("\t\t��������������˵�.");
        as = getchar();
        goto exit;
    } while (as != 'n');
    exit:
    system("cls");
}

void insert()//�������ݺ���
{
    char ch;
    do {
        printf("\n\t\t�����²���ѧԱ����Ϣ\n");
        printf("\n����ѧ�����:");
        scanf("%d", &stu[now_no].no);
        fflush(stdin);
        printf("\n����ѧԱ����:");
        fflush(stdin);
        gets(stu[now_no].name);
        printf("\n����ѧԱ�Ա�:");
        fflush(stdin);
        gets(stu[now_no].sex);
        printf("\n����ѧԱ�ɼ�:");
        fflush(stdin);
        scanf("%f", &stu[now_no].score1);
        printf("\n����ѧԱ�ɼ�:");
        fflush(stdin);
        scanf("%f", &stu[now_no].score2);
        printf("\n����ѧԱ�ɼ�:");
        fflush(stdin);
        scanf("%f", &stu[now_no].score3);
        printf("\n\n");
        now_no = now_no + 1;
        sort();
        fflush(stdin);
        printf("�Ƿ��������?(Y/N)");
        ch = getchar();
        system("cls");
    } while (ch != 'n');
}

void del()//ɾ�����ݺ���
{
    int inum, i, j;
    printf("����Ҫɾ��ѧԱ�ı��:");
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
    cout << "�����ţ�";
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
        printf("\t\t�༶ѧԱ��Ϣ�б�\n");
        printf("\t���\t����\t�Ա�\t�ɼ�\t�ɼ�\t�ɼ�\tƽ��ֵ\n");
        printf("\t%d\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n", stu[i].no, stu[i].name, stu[i].sex, stu[i].score1,
               stu[i].score2, stu[i].score3, stu[i].ave);
        cout << "���ⰴ���˳�";
        getchar();
    } else {
        gui_no_date("û���ҵ� ");
    }

}


void gui_no_date(string str) {

    int i = 0;
    for (i = 3; i > 0; i--) {
        cout << "\n\n\n\n\t\t\t\t" << str << " " << i << " ���Զ�����";
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
    cout << "�Ѿ�¼�� " << arr_l() << " λѧ��" << endl;
    fflush(stdin);
    printf("\t\t��������������˵�.");
    getchar();
}