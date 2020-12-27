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
    //-1 第一次 i++  i=1; 
    do{
    	i++;
    	//读取每一行 
    	getline(cin,name[i]);
    	
    	//如果输入的第一个不是 0 就继续输入
		//如果是0 就说明 该人必须输入了 
	}while(name[i][0] != 0);
	
	printf("%d\n",i);
	
	//输出 打印测试 
	int n=i;
//	for(i=0;i<n;i++){
//		//printf("%s\n",name[i]);
//		cout<<name[i];
//	}
	
	
	
	
	//按空格对数据进行解析 
	sscanf("123456 abcdedf 26","%[^a-z] %s %d",buf,name2,&id);
	printf("%s %s %d\n",buf,name2,id);
	
    return 0;
}
