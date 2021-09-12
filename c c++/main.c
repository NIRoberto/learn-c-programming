

#include<stdio.h>
#define message_for(a,b) \
printf(#a " and " #b)

int main(void){
   printf("My name is:");
   message_for(Robert,Niyitanga);
   message_for(dfs,cake);
   message_for(fds,bombo);

   return 0;
}