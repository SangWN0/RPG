#pragma once
#include <stattype.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "action.h"

class character {
    private:
        struct CharacterInfo {
            std::string id;
            std::string name;
            stat hp;
            stat attack;
            stat defense;
            stat luck;
        };

    public:
        //Loads character data from csv.
        std::vector<CharacterInfo> load_character(const std::string& filename) {
            std::ifstream file(filename);

            if (!file.is_open()) {
                std::cerr << "Error: Could not open " << filename << "\n";
            }

            std::vector<CharacterInfo> party;
            std::string line;

            // Read the file one full line at a time
            while (std::getline(file, line)) {
                if (line.empty()) continue;

                std::stringstream ss(line);
                std::string hpStr, atkStr, defStr;
                CharacterInfo temp;

                //split the line by commas
                std::getline(ss, temp.name, ',');
                std::getline(ss, hpStr, ',');
                std::getline(ss, atkStr, ',');
                std::getline(ss, defStr, ',');

                //convert number strings to integers
                temp.hp = std::stoi(hpStr);
                temp.attack = std::stoi(atkStr);
                temp.defense = std::stoi(defStr);

                party.push_back(temp);
            }

            file.close();

            //verify loaded data
            for (const auto& c : party) {
                std::cout << c.name << " | HP: " << c.hp 
                        << " | ATK: " << c.attack << " | DEF: " << c.defense << '\n';
            }
        }
};  