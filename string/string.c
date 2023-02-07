#include <stdio.h>

int main() {

    // Hello Word!
    char msg_last_null[16] = {
        72, 101, 108, 108, 111, 32, 87, 111,
        114, 100, 33, 0, 0, 0, 0, 0
    };

    // Hello Word!!!!!!
    char msg_last_notnull[16] = {
        72, 101, 108, 108, 111, 32, 87, 111,
        114, 100, 33, 33, 33, 33, 33, 33
    };

    puts(msg_last_null); // last buffer null
    puts(msg_last_notnull); // last buffer not null

}