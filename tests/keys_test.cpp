//
// Created by john on 3/17/20.
//

#include <core-utils/keys.hpp>

#include <gtest/gtest.h>

using Keys = sero::core::utils::Keys;

TEST(KeyTests, max_correct) {
    ASSERT_EQ(Keys::MAX,Keys::MAX);
}

TEST(KeyTests, glfw_translation) {

}