/*

@Filename: ex802.c

@Author: Ju Chengdong

@Version: 1.0

@Date: 2021-03-18

@Description: File Character Statistics

*/

 

#include<stdio.h>

#include <stdlib.h>

#include <string.h>

 

int main(void){

    int statisticsFromFile(int *num, char *fileName, char *mode);



/*

 * 定义数组num，包含三个元素：

 * 第1个元素表示字母个数；

 * 第2个元素表示数字个数；

 * 第3个元素表示其他字符个数

 */

    int num[3]={0,0,0};

    char fileName[] = "ex802.txt";



    /*读取文件并分类统计字符个数*/

    statisticsFromFile(num, fileName, "r");



    /*输出显示各类字符个数*/

    printf("letter:%d\n",num[0]);

    printf("number:%d\n",num[1]);

    printf("other:%d",num[2]);



    return 0;

}

 

/*

 * 函数名称：statisticsFromFile

 * 函数功能：读取文件并分类统计字符个数，统计结果保存在形参数组num中

 * 形式参数：int *，一维整型数组首地址

 * 形式参数：char *fileName，文件路径及名称

 * 形式参数：char *mode，文件使用方式

 * 返 回 值：int型，若文件打开异常，返回 -1；否则返回读取文件的字符数

 */

int statisticsFromFile(int *num, char *fileName, char *mode){

    // 请编程实现本函数
    FILE *fp = fopen(fileName, mode);
    if(fp == NULL)
        return -1;
    char ch=fgetc(fp);
    while(!feof(fp))//此函数用来判断是否是文件结束，是返回1，不是返回0
    {
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            num[0]++;
        else if(ch >= '0' && ch <= '9')
            num[1]++;
        else
            num[2]++;
        ch=fgetc(fp);//从in中读字符
    }

    return num[0] + num[1] + num[3];

}
