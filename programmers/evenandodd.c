
/*
//삼항연산자
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    return num%2==0 ? "Even":"Odd";
}


//동적메모리 할당
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {

    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(5-num%2);

    if(num%2==0) {
        answer="Even";
    }
    else {
        answer="Odd";
    }
    return answer;
}


*/