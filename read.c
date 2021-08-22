#include <stdio.h>
int main(){
   FILE * file;
   if (file = fopen("hai.txt", "r")){
      printf("File opened ");
      char arr[10];
      while(fscanf(file,"%s",arr)!=EOF)
	  {
	  
      printf("%s\n",arr);
      
      
      }
   }
   else
   printf("Error");
   fclose(file);
   return 0;
}
