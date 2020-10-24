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

TEST(BowlingScore, DummyTest)
{
    TEST_ASSERT_EQUAL(2+2,5);
}
