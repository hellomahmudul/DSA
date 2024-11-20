#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    int LA[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &LA[i]);
    }
    printf("Enter position: ");
    scanf("%d", &k);
    if (k > n)
    {
        printf("Error!");
    }
    else
    {
        // STEP2: REPEATING THE PROCESS + STEP1:
        for (int i = k; i <= n; i++)
        {
            LA[i] = LA[i + 1]; // STEP2: UPWARDING PROCESSS
        }
        n--; // STEP3: RESETING THE NUMBER OF ARRAY SIZE
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", LA[i]);
        }
    }

    return 0;
}