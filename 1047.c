#include <stdio.h>
#include <math.h>
int main()
{
    int startHour, startMin, endHour, endMin, gameHour, gameMin;
    scanf("%d %d %d %d", &startHour, &startMin, &endHour, &endMin);

    if (startHour >= endHour)
    {
        gameHour = (24 - startHour) + endHour;
    }
    else
    {
        gameHour = endHour - startHour;
    }

    if (endMin < startMin)
    {
        gameMin = (endMin + 60) - startMin;
        gameHour--;
    }
    else
    {
        gameMin = endMin - startMin;
    }

    if (gameHour >= 24 && gameMin > 0)
    {
        gameHour = gameHour - 24;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", gameHour, gameMin);

    return 0;
}
