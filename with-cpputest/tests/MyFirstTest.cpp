#include "CppUTest/TestHarness.h"

extern "C"
{
#include "BowlingScore.h"
}

TEST_GROUP(BowlingScore)
{
    void setup()
    {
    }

    void teardown()
    {
    }
};

TEST(BowlingScore, ScoreForZeroThrowsIsZero)
{
    int rolls[MAX_ROLLS] = {} ;
    int score = BowlingScore(rolls);
    CHECK_EQUAL(0, score);
}

