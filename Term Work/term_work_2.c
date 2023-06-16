/* Using pointer write a function that receives a character string and a character as argument and delete all occurrences of this character in the string. The function should return the corrected string with no holes. */ 
  
 #include <stdio.h> 
 #define SIZE 50  
  
 void delete_character(char *, char); 
 main()  
 { 
   char str[SIZE], ch; 
   printf("Enter a input string: "); 
   scanf("%s", str); 
   getchar(); 
   printf("Enter a character to be deleted: "); 
   scanf("%c", &ch); 
   delete_character(str, ch); 
   printf("The string after deletion of %c from string is:\n%s\n", ch, str); 
 } 
  
 void delete_character(char *str, char ch) 
 { 
   char *dest = str; 
   while (*str) 
   { 
     if (*str != ch) 
     { 
       *dest = *str;  
       dest++;       
     } 
     str++;  
   } 
   *dest = '\0'; 
 } 
 
 //OR (alternate Method, Not to be written in journal) 
 /*
 void delete_character(char *str, char ch)  
 { 
   char *temp; 
   while(*str) 
   { 
     if(*str == ch) 
     { 
       temp = str; 
       while(*temp) 
       { 
         *temp = *(temp + 1); 
         temp++; 
       } 
       continue; 
     } 
     str++; 
   } 
 } 
 */
