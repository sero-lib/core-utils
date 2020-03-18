//
// Created by john on 3/17/20.
//

#ifndef SERO_GLFW_KEYS_HPP
#define SERO_GLFW_KEYS_HPP

#include <core-utils/keys.hpp>
#include <optional>

namespace sero::core::utils {
    [[nodiscard]] std::optional<Keys> glfw_key_to_sero(int value) noexcept;
} // namespace sero::core::utils

#endif //SERO_GLFW_KEYS_HPP
