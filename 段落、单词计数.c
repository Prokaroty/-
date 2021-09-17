#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main()
{
    char c;
    char prev;
    long n_chars=0L;
    int n_lines=0;
    int n_words=0;
    int p_lines=0;
    bool inword=false;
    
    printf("Enter text to be analysed(| to terminate)");
    prev='\n';
    while((c=getchar())!=STOP)
    {
       n_chars++;
       if(c=='\n')
         n_lines++;
       if(isspace(c)&&inword)
         inword=false;
       if(!isspace(c)&&!inword)
         {inword=true; n_words++;}
    }
     
    if(prev!='\n')
    p_lines=1;
    
    printf("Characters=%ld,words=%d,lines=%d,",n_chars,n_words,n_lines); 
    printf("partial lines=%d\n",p_lines);
    return 0;
}
