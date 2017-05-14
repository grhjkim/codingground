
#include <stdio.h>
int add(int a, int b)
{
    printf("a = %d, b = %d\n", a, b);
    return a + b;
}
int multi(int a, int b)
{
    int answer = 0;
    int i;
    
    for (i=0; i<b; i++) {
        answer += a;
        
    }

    return answer;
}

int main()
{
    int i = 5;
    int a = ++i;
    int answer;
    printf("a = %5d,\ti = %d\n", a, i);
    
    if ( a <= 6 ) {
        printf("Hello!\n");
    } else {
        printf("Hello~~~\n");
    }
    
    answer = multi(1, 10);
    printf("answer is %d\n", answer);
    answer = multi(2, 10);
    printf("answer is %d\n", answer);
    answer = multi(3, 10);
    printf("answer is %d\n", answer);
    answer = multi(4, 10);
    printf("answer is %d\n", answer);
    answer = multi(5, 10);
    printf("answer is %d\n", answer);
    answer = multi(6, 10);
    printf("answer is %d\n", answer);
    answer = multi(7, 10);
    printf("answer is %d\n", answer);
    answer = multi(8, 10);
    printf("answer is %d\n", answer);
    answer = multi(9, 10);
    printf("answer is %d\n", answer);
    

    return 0;
    
    

}
