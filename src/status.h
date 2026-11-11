#pragma once
#include <action.h>
#include <character.h>
#include <cstdint>

//activates counter attack status.
class status {
    public:
        bool dodge();
        bool counter();
        bool continuous_heal();
    private:
        std::uint8_t duration;
};
