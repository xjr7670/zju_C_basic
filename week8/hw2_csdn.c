#include <stdio.h>
#include <string.h>

void process(char data[], int time[]);  // 用于处理读入数据的函数

int main()
{
    const int size = 1000;
    char data[size];
    char end[] = "END";
    int time[3] = {0};

    do {
        scanf("%s", data);
        process(data, time);            // 每读入一个字符串就进入函数处理，最终返回处理结果为最后一个 #GPRMC 的结果
    } while (strcmp(data, end) != 0);   // 以 END 为终止

    printf("%02d:%02d:%02d\n", time[0], time[1], time[2]);    // 输出时：分：秒

    return 0;
}

void process(char data[], int time[])
{
    int i;
    int test = 0, d1 = 0, d2 = 0, sum = 0;

    if (data[0] == '$' && data[1] == 'G' && data[2] == 'P' && data[3] == 'R' && data[4] == 'M' && data[5] == 'C' && data[6] != '\0') {
        for (i = 1; data[i] != '*'; i++) {  // 将$与*之间的所有做异或运算
            test = test ^ data[i];
        }

        char c1 = data[i+1];
        char c2 = data[i+2];

        if (c1 >= 'A' && c2 <= 'F') {   // 将16进制转换为10进制
            d1 = 10 + (c1 - 'A');
        } else {
            d1 = c1 - '0';
        }

        if (c2 >= 'A' && c2 <= 'F') {
            d2 = 10 + (c2 - 'A');
        } else {
            d2 = c2 - '0';
        }

        sum = d1 * 16 + d2;

        for (i = 7; data[i] != '*'; i++) {
            if (data[i] == ',') {
                break;
            }
        }
        if (data[i+1] == 'A' && sum == test) {  // 直接判断第18个字符是不是A，来确定是否定位
            int hour;
            hour = 10 * (data[7] - '0') + (data[8] - '0');
            time[0] = (hour + 8) % 24;
            time[1] = 10 * (data[9] - '0') + (data[10] - '0');
            time[2] = 10 * (data[11] - '0') + (data[12] - '0');
        }
    }
}
