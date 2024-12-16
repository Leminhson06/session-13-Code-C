#include <stdio.h>

int main(){
    char str[1000];
    int letter = 0;
    int digit = 0;
    int special = 0;
    printf("Nhap mot chuoi bat ki: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            letter++;
        } else if (isdigit(str[i])) {
            digit++;
        } else if (!isspace(str[i])) {
            special++;
        }
    }

    printf("So ky tu la chu cai: %d\n", letter);
    printf("So ky tu la chu so: %d\n", digit);
    printf("So ky tu dac biet: %d\n", special);

    return 0;
}
