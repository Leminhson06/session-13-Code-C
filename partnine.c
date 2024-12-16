#include <stdio.h>

int main() {
    char str[1000]; 
    char ch; 

    printf("Nhập một chuỗi bất kỳ: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    printf("Nhập ký tự cần xóa: ");
    scanf(" %c", &ch);
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
    printf("Chuỗi sau khi xóa ký tự '%c': %s\n", ch, str);

    return 0;
}