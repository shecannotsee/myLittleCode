#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<iostream>
 
void dofile(char *in_fname,char *pwd,char *out_fname);/*���ļ����м��ܵľ��庯��*/

/*����main()�����������в���*/
int main(int argc,char *argv[]){
    char in_fname[30];/*�û������Ҫ���ܵ��ļ���*/
    char out_fname[30];
    char pwd[8];/*������������*/
    
    if(argc!=4){/*�ݴ�����*/
        printf("In-fname:");
        std::cin>>in_fname;/*�õ�Ҫ���ܵ��ļ���*/
        
        printf("Password:");
        std::cin>>pwd;/*�õ�����*/
        
        printf("Out-file:");
        std::cin>>out_fname;/*�õ����ܺ���Ҫ���ļ���*/
        
        
        dofile(in_fname,pwd,out_fname);
    }   
    else{/*��������в�����ȷ,��ֱ�����г���*/
        strcpy(in_fname,argv[1]);
        strcpy(pwd,argv[2]);
        strcpy(out_fname,argv[3]);
        dofile(in_fname,pwd,out_fname);
    }
}
 
 
/*�����Ӻ�����ʼ*/
void dofile(char *in_fname,char *pwd,char *out_file){
    FILE *fp1,*fp2;
    register char ch;
    int j=0;
    int j0=0;
    
    fp1=fopen(in_fname,"rb");
    if(fp1==NULL){
        printf("cannot open in-file./n");   
        exit(1);/*������ܴ�Ҫ���ܵ��ļ�,���˳�����*/
    }
    fp2=fopen(out_file,"wb");
    if(fp2==NULL){
        printf("cannot open or create out-file./n");
        exit(1);/*������ܽ������ܺ���ļ�,���˳�*/
    }
    while(pwd[++j0]);
    ch=fgetc(fp1);
    
    /*�����㷨��ʼ*/
    while(!feof(fp1)){
        fputc(ch^pwd[j>=j0?j=0:j++],fp2);/*����д��fp2�ļ�*/
        ch=fgetc(fp1);
    }
    fclose(fp1);/*�ر�Դ�ļ�*/
    fclose(fp2);/*�ر�Ŀ���ļ�*/
}
 
/*�������*/