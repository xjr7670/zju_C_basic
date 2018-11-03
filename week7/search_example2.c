#include <stdio.h>

int amount[] = {1, 5, 10, 25, 50};
char *name[] = {"penny", "nickel", "dime", "quarter", "half_dollar"};

struct {
    int amount;
    char *name;
} coins[] = {
    {1, "penny"},
    {5, "nickel"},
    {10, "dime"},
    {25, "quarter"},
    {50, "half_dollar"}
};

int search(int key, int a[], int len)
{
    int ret = -1;
    for (int i = 0; i < len; i++) {
        if (key == a[i]) {
            ret = i;
            break;
        }
    }
    return ret;
}

int main()
{
   int k = 10;

   for (int i = 0; i < sizeof(coins)/sizeof(coins[0]); i++) {
       if (k == coins[i].amount) {
           printf("%s\n", coins[i].name);
           break;
       }
   }
   return 0;
}
