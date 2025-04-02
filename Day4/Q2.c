#include <stdio.h>

int to_code(){
    char ch;
    char prev;
    int count = 1;
  
    ch = getchar();

    if(ch=='\n' || ch==' '){
        printf("n/a");
            return 1;
    }
    
    while (1) {
      
        prev = ch;
        ch =  getchar();
       
        if(count%2==0 && prev!=' '){
            printf("n/a");
            return 1;  
        }

        if(ch=='\n'){
            break;}

        if(ch==' '){
            printf("%x ", prev);}

        count++;

        }

    printf("%x ", prev); 

    return 0;
}

int to_decode(){
  
    int ch;
    int hex_value = 0;
    int dig_count = 0;
    

    while ((ch = getchar()) != '\n') {

        if(ch==' '){
            if(hex_value>127 || dig_count!=2){
                printf("n/a");
                return 1; // Некорректный символ
            }
            printf("%c ", hex_value);
            hex_value = 0; 
            dig_count = 0;
            continue;
        }
       
        // Проверяем hex-цифру
        int digit = -1;
        if (ch >= '0' && ch <= '9') {
            digit = ch - '0';
        } else if (ch >= 'A' && ch <= 'F') {
            digit = ch - 'A' + 10;
        }

        if (digit == -1) {
            printf("n/a");
            return 1; // Некорректный символ
        }

        hex_value = hex_value * 16 + digit;
        dig_count++;
       // printf("%d ", hex_value);
    }

    if(hex_value>127 || dig_count!=2){
        printf("n/a");
        return 1; // Некорректный символ
    }
    printf("%c ", hex_value);

    return 0;
}

int main(){

int mode;

if(scanf("%d", &mode)!=1 || (mode!=0 && mode!=1)){
printf("n/a");
return 1;
}
while (getchar() != '\n' && !feof(stdin));
if(mode == 0){
to_code();
}else{
to_decode();
}

return 0;
}