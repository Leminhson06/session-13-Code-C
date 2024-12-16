#include <stdio.h>

int main(){
    char str[1000];
    printf("Nhap mot chuoi bat ki: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if( len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    int text = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if(isspace(str[i])) {
            text = 1;
        } else if (text && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            text = 0;
        } else {
            text = 0;
        }
    }
    printf("Chuoi sau khi viet hoa chu cai dau: %s\n", str);

    return 0;
}