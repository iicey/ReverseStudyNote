#include <stdio.h>
#include <string.h>

int main()
{
    int result=1;
    
    int count=0;
    
    char ch[128]={'\0'};//明文字符数组 
    char cryptograph[128]={'\0'};//密文字符数组 
    
    int i;
    
    while(1)
    {  
          if(result==1)
          {
               printf("请输入要加密的明文:");
               scanf("%s",&ch);        
               count=strlen(ch);
               for(i=0;i<count;i++)
               {
                   cryptograph[i]=ch[i]+i+1;
               }
               cryptograph[i]='\0';
               //输出密文信息 
               printf("加密后的密文是:%s\n",cryptograph); 
          }
          else if(result==2)
          {
              // count=strlen(ch); 
               for(i=0;i<count;i++)
               {
                     ch[i]= cryptograph[i]-i-1;             
               }
               ch[i]='\0';
               printf("解密后的明文是:%s\n",ch);
          }
          else if(result==3)
          {
               break;
          }
          else
          {
              printf("请输入正确命令符:\n");
          }  
          printf("请选择对应的操作:\n\t1.加密\n\t2.解密\n\t3.退出\n");
          printf("请输入命令符:");
          scanf("%d",&result);//获取输入的命令符 
    }
    system("pause");
    return 0;    //程序结束 
}
