#include <stdio.h>

int main() {
    int score_int = 90.5;
    printf("กรณีที่ 1 (int): score = %d\n", score_int);

    float score_float = 90.5f;
    printf("กรณีที่ 2 (float): score = %.1f\n", score_float);

    return 0;
}

//int จะเก็บค่าแค่จำนวนเต็ม
//float จะสามารถเก็บค่า ได้แม้กระทั้ง ทศนิยม