#include <stdio.h>
int main(){
   FILE * fp;
   if (fp = fopen("hai.txt", "a")){
      printf("File opened successfully ");
      char arr[]="hameed";
      fprintf(fp,arr);
      
      
      
   }
   else
   printf("Error");
   fclose(fp);
   return 0;
}
