#include "unity_fixture.h"
#include "BowlingScore.h"
TEST_GROUP(BowlingScore);

static uint16_t virtualLeds;

TEST_SETUP(BowlingScore)
{
}

TEST_TEAR_DOWN(BowlingScore)
{
}

TEST(BowlingScore, ScoreForZeroThrowsIsZero)
{

    int rolls[MAX_ROLLS] = {} ;
    int score = BowlingScore(rolls);
    TEST_ASSERT_EQUAL(0, score);
}

TEST(BowlingScore, ScoreForAverageRollsIsSumOfRolls)
{
    int rolls[MAX_ROLLS] = { 3, 6, 2, 5 };
    int score = BowlingScore(rolls);
    TEST_ASSERT_EQUAL(16, score);
}

TEST(BowlingScore, RollAfterASpareIsCountedTwice)
{
    int rolls[MAX_ROLLS] = { 4, 6, 2, 5 };
    int score = BowlingScore(rolls);
    TEST_ASSERT_EQUAL(19, score);
}

TEST(BowlingScore, ASumOfTenBetweenTwoFrameDoesNotResultInASpare)
{
    int rolls[MAX_ROLLS] = { 1, 6, 4, 3 };
    int score = BowlingScore(rolls);
    TEST_ASSERT_EQUAL(14, score);
}
