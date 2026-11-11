#include <iostream>

enum class GameState { Running, Stop };
enum class BattleState { OutOfCombat, PlayerTurn, EnemyTurn };

int main() {

    GameState state = GameState::Running;
    
    while (state == GameState::Running) {
        BattleState turn = BattleState::PlayerTurn;
    }

    return 0;
}