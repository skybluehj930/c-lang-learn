#include <stdio.h>

int main() {
    char msg[16] = "Hello World!";
    /* ��ҹ��� ��ȯ */
    for (int i = -1; msg[++i] - 33;)msg[i] - 32 ? msg[i] ^= 32 : 0;

    puts(msg);
}