//
// Created by john on 3/17/20.
//

#include <core-utils/keys.hpp>
#include <core-utils/glfw_keys.hpp>

#include <gtest/gtest.h>

using Keys = sero::core::utils::Keys;

TEST(KeyTests, valid_nullopt) {
    ASSERT_FALSE(sero::core::utils::glfw_key_to_sero(3000).has_value());
}

TEST(KeyTest, valid_spacebar) {
    ASSERT_EQ(sero::core::utils::glfw_key_to_sero(32).value(), Keys::SPACE);
}
