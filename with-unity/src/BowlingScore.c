#include "BowlingScore.h"


int BowlingScore(int *rolls)
{
    int score = 0;
    for(int i=0; i < MAX_ROLLS; i++)
    {
        if((i%2 == 1) && rolls[i] + rolls[i-1] == 10)
            score += rolls[i+1];
        score += rolls[i];
    }
    return score;
}
