#include <stdio.h>
#include <stdint.h>

int main()
{
    printf("5강 시작!\n");

    // 정수, 실수 구분해야 한다.
    // 메모리의 크기를 지정할 수 있다.
    // sizeof
    // 정수 형태의 자료형들 char, short, int, long, long long

    char number1;                // number1에 char의 형태로 데이터 저장하게 선언
    short number2;               // number2
    int number3;                 // number3
    long number4;                // number4
    long long number5;           // number5

    printf("char 데이터의 크기: %llu\n", sizeof(char));   //바이트의 크기
    printf("short 데이터의 크기: %llu\n", sizeof(short));
    printf("int 데이터의 크기: %llu\n", sizeof(int));
    printf("long 데이터의 크기: %llu\n", sizeof(long));
    printf("long long 데이터의 크기: %llu\n", sizeof(long long));

    // 왜 int랑 long이랑 사이즈가 같을까?

    int16_t num1 = 1;           // 8 X 2 = 2바이트
    int32_t num2 = 1;           // 8 X 4 = 4바이트
    int64_t num3 = 1;           // 8 X 8 = 8바이트

    printf("int16_t 데이터의 크기: %llu\n", sizeof(int16_t));
    printf("int32_t 데이터의 크기: %llu\n", sizeof(int32_t));
    printf("int64_t 데이터의 크기: %llu\n", sizeof(int64_t));

    // 오버플로우
    // 부호가 있는 정수, 없는 정수 -> MSB 0, 1 (0: 양수    1: 음수)
    // unsigned << 양수만 표현한다. 2^7 -> 2^8. 125개만큼 더 표현 가능
    // 레벨 데이터 표현, 정수 형태의 자료형: char, short, int, long, long long
    
    //int: 21억 -> 공간 충분
    // 최대레벨 999,999 -> 작은 크기의 데이터를 큰 곳에 저장해서 공간낭비
    // 확장 가능성, 21억보다 커진다면?
    // 데미지: 9,999억, 21억 2^4x8

    char Level = 1;     // 0000 0001
    printf("현재 레벨: %d\n", Level);
    Level = 1 + 128;    // 0111 1111  127 // 1000 0000   -1
    printf("현재 레벨: %d\n", Level);

    unsigned char Level2 = 1;

    // 음수를 표현하는 방법 고찰.

    // 부호를 표현하는숫자만 0, 1로 바꾸기
    // -5 비트로 표현
    // 5 + (-5) = 0
    // 1000101    -5
    // 0000101     5    

    // 두 수를 더하면 0이 되어야한다
    // 
    // 0000101
    // 1111010
    // 1111111 + 1
    // 1 0000 0000
    // 
    // 비트를 모두 반대로 하고 1을 더한다 -> 2의 보수법

    // 2바이트 short [0000 0000][0000 0001] 1
    //              [1111 1111][1111 1111] -1
    // 소수점 X

    // 소수점 O
    // float, double, long double

    float n1 = 0.00123f;           // 4바이트
    double n2 = 0.00123f;          // 8바이트
    long double n3 = 0.00123f;     // 8바이트

    printf("float 데이터의 크기: %llu\n", sizeof(float));
    printf("double 데이터의 크기: %llu\n", sizeof(double));
    printf("long double 데이터의 크기: %llu\n", sizeof(long double));

    // 4x8 비트 공간에서 실수를 표현하려면?
    // (정수)소수점(실수)
    // [정수][소수점] [0][   7   ][    8    ] -> 24.4 -> 표현할 수 있는 가지수가 너무 적다.
    // 1.000000000125
    // 고정 소수점
    // 
    // float: 부동소수점, 둥둥 떠다니다 

    // 13000         -> 1.3 x 10000(10^4) -> 2진수로 변환하는 로직: IEEE754
    // -13000        -> [1][몇 제곱 증가되었는가?][유효숫자는 얼마인가?]
    // 0.0123        -> 1.23 x 10^-2
    // -0.0123       -> -1.23 x 10^-2

    // 컴퓨터는 10진수를 안쓰고 2진수를 쓴다
    // 고정 소수점: 소수를 표현하기에는 공간이 너무 적다
    // 부동 소수점: 2^? + 유효숫자 표기, 소수점이 정확하지 않다
    // 컴퓨터에서 실수를 표현하는 방식은 정확하지 않다

    //특정 조건을 만족하면 실행하라

    double n4 = 0.3f;
    double n5 = 0.4f;
    double n6 = 0.7f;

    // 실험실 결과 추론 코드로 결과를 유추 가능
    // 물리현상을 추론하기 위해 시뮬레이션
    // 특정 자리수까지만 사용하겠다
    // 자리수가 어디까지 정확한지를 표현하고 있다.
    // float, double -> 소수점을 표현하는 정확성이 다르다.
    // 소수점이 명확하게 표현되고있지 않다
    // 소수점의 계산으로 결과값을 유추하는 코드는 문제가 있을 수 있다

    if(n6 == n4+n5)
    {
        printf("같음\n");
    }

    else
    {
        printf("다름\n");
    }


    // 문자를 표현하는 방법

    char character1 = 97;         // 내부 공간을 8개 쓴다       0110 0001
    short character2 = 97;        // 16               []       0110 0001
    int character3 = 97;          // 32               [][][]   0110 0001
    double character4 = 97;       // %c가 왜 안 될까요?

    // 똑같은 데이터를 사용해도 어떻게 쓰느냐에 따라서 결과가 다르다
       
    printf("%c\n", character1);
    printf("%c\n", character2);    // 문자 표현에 공간이 낭비되고 있다
    printf("%c\n", character3);    // 문자 표현에 공간이 낭비되고 있다
    //printf("%c\n", character4);     정확한 97이 아니라서 문자를 표현하지 못했다

    // 그래서 한글은?
    // 자음 + 모음, 자음 + 모음 + 모음 / 모음만 X
    // 조합형? 
    // 완성형? 가 -> 1, char -> 128 -> 한글을 표현하기에는 너무 부족하다
    // EUC_KR 2350 한글로 표현? -> 펲시콜라(펩이 없음) -> CP 949 모든한글 대응
    // (2바이트)ANSI

    // 일본어는?
    // 히라가나, 가타카나, 한자

    // (3바이트)UFT-8 유니코드, 통일성
    // [EUC_KR] 인코딩 되어 코드를 UFT-8 바꾸는 API
    // 한글을 표현하는 방식에 대해서 조사, 인코딩 0100 1101(2) 한글 디코딩

    // 코드의 흐름 (반복문, 조건문)
}
