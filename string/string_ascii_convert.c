#include <stdio.h>
#include <string.h>
int main() {
    char msg[16] = "Hello World!";
    /* ��ҹ��� ��ȯ */
    int num = 32;
    for (int i = 0; i < strlen(msg); i++) {
        if (msg[i] >= 65 && msg[i] <= 90) msg[i] += num;
        else if (msg[i] >= 97 && msg[i] <= 122) msg[i] -= num;
    }
    puts(msg);
}