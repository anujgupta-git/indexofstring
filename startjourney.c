# include<stdio.h>
# include<conio.h>
# include<string.h>
int indexofsubstring(char str[],char s[]);
 int main(){
    int index;
    index= indexofsubstring("abababbaabbababbaa","aabb");
 if(index==-1){
     printf("string not found");
 }
 else{
     printf("string found at %d",index);
 }
 
}
int indexofsubstring(char str[],char s[]){
int i,j,k,l;
l=strlen(s);
for(i=0;str[i+l-1];i++){
    k=i;
    for(j=0;j<=l-1;j++){
        if(str[k]!=s[j]){
            break;
        }
        k++;
    }
    if (j==l)
    {
        /* code */
        return(i);
    }
    
}
return(-1);
}
