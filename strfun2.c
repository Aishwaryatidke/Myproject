#include<stdio.h>
#include"stringh.h"
#define MAX 100


void input(char *str){
	     
       __fpurge(stdin); /*for clearing the buffer of stdin*/
	scanf(" %s", str);
         return;
 }


int strlen1(char *str){
	int i = 0;
	while(str[i] != '\0')
		i++;
	return i;

}

char *strcpy1(char *str2, char *str1){
	int i, len;
	len = strlen1(str1);
	if(len < MAX){
		for(i = 0; str1[i] != '\0'; i++)
			str2[i] = str1[i];
		str2[i] = '\0';
	}
	else{
		int j = 0, i;     /*if the length of str1 is greater than or equal to MAX then */

		for(i = len - MAX; str1[i] != '\0'; i++, j++)
			str2[j] = str1[i];
		str2[j] = '\0';
	}
      return str2;
}

int strncpy1(char *str2, char *str1, int maxlen){
	int i, len, flag = 0;
	len = strlen1(str1);
	if(len >= maxlen){
		for(i = 0; i < maxlen; i++)
			str2[i] = str1[i];
		str2[i] = '\0';
		flag = 1;
	}
	return flag;
}

char *stpcpy1(char *str2, char *str1){
	int i;
	for(i = 0; str1[i] != '\0'; i++)
		str2[i] = str1[i];
	str2[i] = '\0';
        return str2;
}

char *strcat1(char *str3, char *str1, char *str2){
	int i, j;
	for(i=0; str1[i] != '\0'; i++)
		str3[i] = str1[i];
	for(j = 0; str2[j] != '\0'; i++, j++)
		str3[i] = str2[j];
	str3[i] = '\0';
        return str3;
}

int strncat1(char *str3, char *str1, char *str2, int maxlen){
	int i, j, len, flag = 0;
	len = strlen1(str2);
	if(len >= maxlen){
		for(i = 0; str1[i] != '\0'; i++)
			str3[i] = str1[i];
		for(j = 0; j<maxlen; i++,j++)
			str3[i] = str2[j];
		str3[i] = '\0';
		flag = 1;
	}
	return flag;
}

char *strrev1(char *str2, char *str1, int index){
	int i;
	for(i = 0, index--; index >= 0; i++, index--)   /*******/
		str2[i] = str1[index];
	str2[i] = '\0';
        return str2;
}

int strcmp1(char *str1, char *str2){
	int flag = 0, i;
	if(strlen1(str1) == strlen1(str2)){
		for(i = 0; str1[i] != '\0'; i++){
			if(str1[i] != str2[i])
				return flag;
		}
		flag = 1; 	
	}
	return flag;
}

int strncmp1(char *str1, char *str2, int maxlen){
	int flag = 0, i;
	if(strlen1(str1) == strlen1(str2)){

		for(i = 0; i < maxlen; i++){
			if(str1[i] != str2[i])
				return flag;
		}
		flag = 1;   /*return 1 if string matches*/
	}
	return flag;  /*return 0 if not matches*/
}


char *strchr1(char *str1, char ch){
	
        if(str1 == NULL) 
            return NULL;
        if((ch > 255) || (ch < 0))  
             return NULL;
        int i;
        for(i  = 0; i < strlen1(str1); i++){
                if(ch == str1[i])
                  return (char*)&str1[i];
          
          }
        return NULL;
}


char *strrchr1(char *str1, char ch){
	
        if(str1 == NULL) 
            return NULL;
        if((ch > 255) || (ch < 0))  
             return NULL;
        int i;
        for(i  = strlen1(str1); i > 0; i--){
                if(ch == str1[i])
                  return (char*)&str1[i];
          
          }
        return NULL;
}

/*strfreq() function counts the frequency of given character*/
int strfreq(char *str1, char ch){
     
    int i,freq;
    for(i = 0; str1[i] != '\0'; i++){
       if(ch == str1[i])
          freq++;
     }

    return freq;
} 


           
/*strascii() function prints the ASCII value of the given character*/
int strascii(char ch){
      
      int a = (int)ch;
      /*printf("ASCII value of %c : %d\t", ch, ch);*/
      return a;
       

}

char* strlwr1(char *str1){
    
      char *m = str1;
       
      if(str1 == NULL)
        return;
      else{
          int i = 0;
          while( str1[i] != '\0'){
            
            if(str1[i] >= 'A' && str1[i] <= 'Z')
               
               str1[i] = str1[i] + ('a' - 'A');
             
            i++;
         }
    }
        return str1;
} 
          

char* strupr1(char *str1){
    
      
       
      if(str1 == NULL)
        return;
      else{
          int i = 0;
          while( str1[i] != '\0'){
            
            if(str1[i] >= 'a' && str1[i] <= 'z')
               
               str1[i] = str1[i] - ('a' - 'A');
             
            i++;
         }
    }
        return str1;
} 
          



