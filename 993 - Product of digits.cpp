#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int testCase;
    int number;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d", &number);
        if (number== 0)
        {
            printf("10\n");
            continue;
        }
        else if (number< 10)
        {
            printf("%d\n", number);
            continue;
        }
        int d = 1;
        int result=0;

        for (int i = 9; i > 1; --i)
        {
            while (number % i == 0)
            {
                number /= i;
                result += i * d;
                d *= 10;
            }
        }
        if (number== 1)
            printf("%d\n", result);
        else
            printf("-1\n");
    }
    return 0;
}
