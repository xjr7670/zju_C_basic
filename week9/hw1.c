#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 找出第一个字符串在第二个字符串中出现的位置
 位置可能有多个（返回所有出现的位置），也可能没有（返回－1）

 思路：
    取得第一个字符串的大小，
    用 strstr() 来找出第一个出现的位置，然后用指针指向这个位置+字符串大小后的位置，就得到剩下的字符串
    然后再用 strstr() 来找出第二个出现的位置，然后指针再移动到这个位置+字符串大小后的位置，如此循环到结尾
*/

int main(int argc, const char * argv[]) {
    
    char c;
    int i=0;
    char str[1000]={'\0'}; 
    char dest[100]={'\0'}; 
    char *q=0;
    char *p=0;
    int b=1; 
    while((c=getchar())!='\n') {
        dest[i]=c;
        i++;       
    }

    i=0;
    while((c=getchar())!='\n') {
        str[i]=c;
        i++;
    }
   
    p=str; 
    
    while((q=strstr(p,dest))!=NULL) {
        char a=*q;  
        *q='\0';    
        printf("%lu ",strlen(str));
        *q=a; 
        p=q+1;
        if(b==1) {
            b=0;
        }
    }
    if(b) {
        printf("-1");
    }
    printf("\n");
    
    return 0;
}