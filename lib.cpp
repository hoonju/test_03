#pragma once

#include <string>
#include <vector>

#include "./random.hpp"

namespace libTest {
class libTest {
private:
    // std::string m_name{"no_name"};
    std::string m_name{};
    
public:
    libTest(const std::string& name = "hey?")
    : m_name(name)
    {}
    auto name() -> std::string {
        return m_name;
    }
};

class Message {
private:
    std::vector<std::string> __msgs = {"Hello!", "Hi!", "Howdy?"};
    libmath::Random __rgen;

public:
    auto One() -> std::string {

        auto size = __msgs.size();
        return __msgs[__rgen.One(0, size)];
    }


};
}