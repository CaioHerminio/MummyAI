// 🤖MUMMY AI -  C++ edition

#include <iostream>
#include <set>
#include <deque>
#include <vector>
#include <tuple>
#include <map>

using namespace std;

int main() {
    // 🛡️🗡️ LIST – Ankhor’s inventory of weapons
    vector<string> inventory = {
        "Plasma Khopesh", 
        "Obsidian Spear", 
        "Scarab Drone", 
        "Laser Sling", 
        "Abyssal Chakram"
    };

    // 👑 SET – Unique champions Ankhor has defeated
    set<string> defeated_champions = {
        "Red Minotaur", 
        "Phantom of Phobos", 
        "Knight of Dust", 
        "Titan of Tharsis", 
        "Queen Anubia"
    };

    // 📍 TUPLE – Immutable coordinates of Ankhor’s secret bases (x, y, z)
    vector<tuple<int, int, int>> secret_bases = {
        make_tuple(42, -17, 900),       // Olympus Mons hideout
        make_tuple(130, 2, -44),        // Valles Marineris cave
        make_tuple(4, 20, 15)           // Pyramid Nexus Core
    };

    // 👾 DICTIONARY – Martian monsters and their weaknesses
    map<string, string> monsters = {
        {"Sand Leech", "electricity"},
        {"Solar Wyrm", "cold plasma"},
        {"Dust Revenant", "heka (magic)"},
        {"Echo Serpent", "silence"},
        {"Cinder Golem", "liquid nitrogen"}
    };

    // ⚔️ STACK – Battle history (LIFO – Last In, First Out)
    vector<string> battle_log = {
        "Fought Dust Revenant in the Obsidian Arena, using the staff of Osiris that he stole from the gods in the underworld, AKA planet Pluto.",
        "Defeated Knight of Dust at the Red Citadel, preventing Alexander the Great's robotic body from being awakened.",
        "Escaped from Cinder Golem in the Fire Canyons with the help of some Christian crusaders from Earth"
    };

    // 📬 QUEUE – Mission requests (FIFO – First In, First Out)
    deque<string> mission_requests = {
        "Message from the Temple of Thoth: Escort priest through psychic storm",
        "Message from Princess Bastiva: Why aren't you responding to my messages? If you don't go out with me like you promised, I'll make Venus declare war on Mars!",
        "Message from Horus-X: The asteroid irrigation spaceship has been captured by the Mongols, and is heading towards New Karnak."
    };

    // Printing the report
    cout << "📖️ MUMMY.AI REPORT SYSTEM\n";
    cout << "✨ Year 1240 A.D. — Egyptian Martian Colony, Planet Mars ✨\n";
    cout << "\nAround 5 B.C., the Egyptians discovered how to travel through space using pyramid portals known as *Pydoors*.\n";
    cout << "Now, in the year 1240 A.D., the Egyptian colony has fully inhabited the Red Planet, developing agriculture, communication, and advanced AI.\n\n";
    cout << "You are *Cleo-P*, a robotic maid designed to assist the legendary warrior Ankhor. 🛡️\n";
    cout << "Though Ankhor is a decorated champion of the Olympus Mons arenas, he is notoriously disorganized.\n";
    cout << "After defeating the Eight Sphinxes of Vastitas Borealis, Ankhor invested his prize fortune to build you, his personal assistant.\n";
    cout << "Your mission: catalog and manage all of Ankhor’s stats, missions, and gear using sacred Martian data structures.\n";

    // 🗡️ LIST - Inventory of weapons
    cout << "\n🧰 Weapon Inventory (List):\n";
    for (const auto& weapon : inventory) {
        cout << "  - " << weapon << endl;
    }

    // 👑 SET - Defeated champions (unique)
    cout << "\n🏆 Defeated Champions (Set):\n";
    for (const auto& champion : defeated_champions) {
        cout << "  - " << champion << endl;
    }

    // 📍 TUPLE - Secret base coordinates
    cout << "\n📍 Secret Base Coordinates (Tuple):\n";
    for (const auto& coords : secret_bases) {
        cout << "  - Location at (x=" << get<0>(coords) << ", y=" << get<1>(coords) << ", z=" << get<2>(coords) << ")\n";
    }

    // 👾 DICTIONARY - Monsters and weaknesses
    cout << "\n👹 Martian Monsters and their Weaknesses (Dictionary):\n";
    for (const auto& monster : monsters) {
        cout << "  - " << monster.first << ": Weakness = " << monster.second << endl;
    }

    // ⚔️ STACK - Battle history (LIFO)
    cout << "\n📜 Battle History (Stack - Last In, First Out):\n";
    for (auto it = battle_log.rbegin(); it != battle_log.rend(); ++it) {
        cout << "  - " << *it << endl;
    }

    // 📬 QUEUE - Mission requests (FIFO)
    cout << "\n📨 Incoming Mission Requests (Queue - First In, First Out):\n";
    for (const auto& msg : mission_requests) {
        cout << "  - " << msg << endl;
    }

    return 0;
}
