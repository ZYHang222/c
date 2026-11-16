char* toLowerCase(char* s) {
 for(int i=0;s[i]!='\0';i++){
   if(s[i]>=97&&s[i]<=122) s[i]+=32;
 } 
 return s  ;
}