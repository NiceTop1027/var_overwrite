#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void init() {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

int main(){
    init();
    char buf[0x10];
    int idx = 0;
    printf("나탑이 : 우으앍! 너무 어려워요!! 도와주세요!\n");
    printf("input : ");
    read(0, buf, 0x100);
    
    if(idx){
        system("/bin/sh");
    }
    else{
        printf("나탑이 : 아.. 이거 너무 어려워요.. 괜찮아요! 기회는 많으니까요!\n");
    }
    return 0;
}
