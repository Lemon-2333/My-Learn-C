#include <stdio.h>
/*懒得打字所以用首字母代替*/
int br(void);
int ic(void);

int main(void){
    br();printf(",");ic();printf("\n");
    ic();printf(",\n");
    br();printf("\n");
}

int br(void){
    printf("B,R");
    return 0;
}

int ic(void){
    printf("I,C");
    return 0;
}