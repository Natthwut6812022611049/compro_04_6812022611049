#include <stdio.h>

int main() {
    char firstInitial = 'N';
    int age = 18;
    float weight = 67.5f;
    char gender = 'M';

    printf("ตัวอักษรตัวแรกของชื่อ: %c\n", firstInitial);
    printf("อายุ: %d ปี\n", age);
    printf("น้ำหนัก: %.1f กก.\n", weight);
    printf("เพศ: %c\n", gender);

    return 0;
}