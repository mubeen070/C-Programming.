#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int d1, d2, sum, i, j, point, loses[50] = {0}, wins[50] = {0};
    int totalWins = 0, totalLoses = 0;
    float totalWinRate = 0, totalLoseRate = 0;
    srand(time(NULL));
    for (i = 1; i <= 1000; i++)
    {
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;
        sum = d1 + d2;
        switch (sum)
        {
        case 2:
        case 3:
        case 12:
            loses[1]++;
            break;
        case 7:
        case 11:
            wins[1]++;
            break;
        default:
            point = sum;
            j = 1;
            do
            {
                d1 = rand() % 6 + 1;
                d2 = rand() % 6 + 1;
                sum = d1 + d2;
                point == sum ? ++wins[j] : 0;
                sum == 7 ? ++loses[j] : 0;
                j++;
            } while (sum != point && sum != 7);
            break;
        }
    }
    printf("%6s%8s%10s%9s%11s\n", "ROLL", "WINS", "WIN-RATE", "LOSES", "LOSE-RATE");
    for (i = 1; i < 26; i++)
    {
        printf("%6d%8d%9.1f%%%9d%10.1f%%\n", i, wins[i], (float)wins[i] / 10, loses[i], (float)loses[i] / 10);
        totalWins += wins[i];
        totalLoses += loses[i];
        totalWinRate += (float)wins[i] / 10;
        totalLoseRate += (float)loses[i] / 10;
    }
    printf("TOTAL: %8d%8.1f%%%9d%10.1f%%\n", totalWins, totalWinRate, totalLoses, totalLoseRate);
    return 0;
]