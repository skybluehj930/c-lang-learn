#include <stdio.h>


/*
    n��° ��Ʈ ���� ���Ƿ� �����ϴ� ��ƿ��Ƽ ���α׷� ����
    (ù��° �ڸ��� 0��°�� ���)
*/

// flags������ n��° ��Ʈ ���� 1�� ���� ���� ��ȯ
int bit_on(int flags, int n)
{
    return flags |= 1 << n;
}

// flags������ n��° ��Ʈ ���� 0���� ���� ���� ��ȯ
int bit_off(int flags, int n)
{
    return flags &= ~(1 << n);
}

// flags������ n��° ��Ʈ ���� ����(toggle)��Ų ���� ��ȯ
int bit_toggle(int flags, int n)
{
    return flags ^= 1 << n;
}

// 10���� 2������ ���
void dec_to_bin(unsigned n) {
    unsigned a = 0x80000000;
    for (int i = 0; i < 32; i++) {
        if ((a & n) == a)
            printf("1");
        else
            printf("0");
        a >>= 1;
    }
    printf("\n");
}


int main() {



    int flags = 0;                   // 00000000

    flags = bit_on(flags, 3);        // 00001000
    printf("flags������ 3��° ��Ʈ ���� 1�� ��ȯ: ");
    dec_to_bin(flags);

    flags = bit_on(flags, 5);        // 00101000
    printf("flags������ 5��° ��Ʈ ���� 1�� ��ȯ: ");
    dec_to_bin(flags);

    flags = bit_toggle(flags, 4);    // 00111000
    printf("flags������ 4��° ��Ʈ ���� ����: ");
    dec_to_bin(flags);

    flags = bit_off(flags, 3);       // 00110000
    printf("flags������ 3��° ��Ʈ ���� ����: ");
    dec_to_bin(flags);

}