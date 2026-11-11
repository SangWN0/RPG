#pragma once
#include <cstdint>
#include <string_view>

enum class ActionID { RED, BLUE, GREEN, YELLOW, PURPLE };

enum class TargetType { SingleEnemy, AllEnemies, Self, SingleAlly, AllAllies };

struct Action {
    std::string_view name;
    std::uint16_t damage_multiplier;
    TargetType target_type;
}

class action {
    public:
    
    private:
};