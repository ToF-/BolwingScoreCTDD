#include "unity_fixture.h"

TEST_GROUP_RUNNER(BowlingScore)
{
    RUN_TEST_CASE(BowlingScore, ScoreForZeroThrowsIsZero);
    RUN_TEST_CASE(BowlingScore, ScoreForAverageRollsIsSumOfRolls);
    RUN_TEST_CASE(BowlingScore, RollAfterASpareIsCountedTwice);
    RUN_TEST_CASE(BowlingScore, ASumOfTenBetweenTwoFrameDoesNotResultInASpare);
}
