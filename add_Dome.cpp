// This program illustrates using the getline function
//to read character data into a string object.
#include <iostream>
#include <string> // Header file needed to use string objects
#include <stdio.h>
using namespace std;
int main()
{
	
	
    string name[20];
    
    char  buf[50];
	char name2[50];
	int id;
    int i=-1;
    //-1 ��һ�� i++  i=1; 
    do{
    	i++;
    	//��ȡÿһ�� 
    	getline(cin,name[i]);
    	
    	//�������ĵ�һ������ 0 �ͼ�������
		//�����0 ��˵�� ���˱��������� 
	}while(name[i][0] != 0);
	
	printf("%d\n",i);
	
	//��� ��ӡ���� 
	int n=i;
//	for(i=0;i<n;i++){
//		//printf("%s\n",name[i]);
//		cout<<name[i];
//	}
	
	
	
	
	//���ո�����ݽ��н��� 
	sscanf("123456 abcdedf 26","%[^a-z] %s %d",buf,name2,&id);
	printf("%s %s %d\n",buf,name2,id);
	
    return 0;
}
