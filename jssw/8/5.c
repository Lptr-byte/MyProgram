/*

@Filename: ex801.c

@Author: Ju Chengdong

@Version: 1.0

@Date: 2021-03-18

@Description: File Character Reading and Writing

*/

 

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

 

int main(int argc,char *argv[]){

    /*（1）声明函数及变量*/

    int writeToFile(char *str, char *fileName, char *mode);



    char str[100];

    char fileName[] = "ex801.txt";



    /*（2）获取键盘输入字串*/

    fgets(str, 100, stdin);

    //gets(str); //将回车看作字串输入结束标志，字串中可以有空格

    //scanf("%s", str); //将空格看作字串输入结束标志，字串中不能有空格



    /*（3）将字串写入文件*/

    int charNum = writeToFile(str, fileName, "w");

    if(charNum < 0){

        //printf("write error");//用于调试

        return -1;

    }



    return 0;

}

 

/*

 * 函数名称：writeToFile

 * 函数功能：将字串写入文件

 * 形式参数：char *str，一维字符数组（字符串）首地址

 * 形式参数：char *fileName，待写入的文件路径及名称

 * 形式参数：char *mode，文件使用方式

 * 返 回 值：int型，若文件打开异常，返回 -1；否则返回写入到文件的字符数

 */

int writeToFile(char *str, char *fileName, char *mode){

    // 请编程实现本函数
    FILE *fp = fopen(fileName, mode);
    if(!fp)
        return -1;
    for(int i = 0; i < (int)strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            fprintf(fp, "%c", str[i] - 'a' + 'A');
        else if(str[i] >= 'A' && str[i] <'Z')
            fprintf(fp, "%c", str[i] - 'A' + 'a');
        else
            fprintf(fp, "%c", str[i]);
    }

    return strlen(str);

}
