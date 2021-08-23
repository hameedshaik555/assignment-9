
#include <stdio.h>
int main()
{
   FILE * file1=fopen("hai.txt","r");
   FILE * file2=fopen("myfile.txt","a");
    char ch1,ch2;
   if(file1==NULL||file2==NULL)
   {
       printf("file not present");
       return 0;
   }
   else
   {
       while((ch1=fgetc(file1)!=EOF)&&(ch2=fgetc(file2)!=EOF))
       {
           
           if(ch1!=ch2)
           {
               printf("file not same");
               return(0);
           }
       }
       printf("file are same\n");
       
   }
   fclose(file1);
   fclose(file2);
   
   
   return 0;
}
