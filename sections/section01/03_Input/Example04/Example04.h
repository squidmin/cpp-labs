#pragma once

#include <string>
#include <optional>

class Example04 {
public:
    std::optional<int> verify_is_integer(const std::string& input);
    void run();
};
