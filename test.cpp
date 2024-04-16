#include <gtest/gtest.h>
#include "caesar.h"

// Create a main function to run all the tests
 int main(int argc, char **argv) {
      ::testing::InitGoogleTest(&argc, argv);
      return RUN_ALL_TESTS();
 }

TEST(Caesar, ShiftBy2) {
    char c = 'a';
    int key = 2;
    char result = shift_char(c, key);

    ASSERT_EQ(99, result);
}

TEST(Caesar, ShiftBy0) {
    char c = 'a';
    int key = 0;
    char result = shift_char(c, key);

    ASSERT_EQ('a', result);
}