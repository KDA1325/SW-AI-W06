#include <stdio.h>
#include <string.h>

int main()
{
    char id[51];
    
    scanf("%s", id);

    // trigraph ??! ignored, use -trigraphs to enable [-Wtrigraphs] 오류 발생 
    // 일반적인 환경에선 문제가 되지 않지만, VSC + Docker + Ubuntu 조합 환경에선 GCC가 경고를 에러처럼 취급 
    // printf("%s??!", id);
    printf("%s??""!", id);

    return 0;
}