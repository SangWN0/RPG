#pragma once
#include <cstdint>
#include <string_view>
#include <vector>
#include "status.h"

enum class ActionID { RED, BLUE, GREEN, YELLOW, PURPLE };

enum class TargetType { SingleEnemy, AllEnemies, Self, SingleAlly, AllAllies };

struct Action {
    std::string_view id;
    std::string_view name;
    TargetType target_type;

    std::uint16_t damage_multiplier;
};