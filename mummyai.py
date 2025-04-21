from collections import deque

# 🛡️🗡️ LIST – Ankhor’s inventory of weapons
inventory = [
    "Plasma Khopesh", 
    "Obsidian Spear", 
    "Scarab Drone", 
    "Laser Sling", 
    "Abyssal Chakram"
]

# 👑 SET – Unique champions Ankhor has defeated
defeated_champions = {
    "Red Minotaur", 
    "Phantom of Phobos", 
    "Knight of Dust", 
    "Titan of Tharsis", 
    "Queen Anubia"
}

# 📍 TUPLE – Immutable coordinates of Ankhor’s secret bases (x, y, z)
secret_bases = (
    (42, -17, 900),       # Olympus Mons hideout
    (130, 2, -44),        # Valles Marineris cave
    (4, 20, 15),            # Pyramid Nexus Core
)

# 👾 DICTIONARY – Martian monsters and their weaknesses
monsters = {
    "Sand Leech": "electricity",
    "Solar Wyrm": "cold plasma",
    "Dust Revenant": "heka (magic)",
    "Echo Serpent": "silence",
    "Cinder Golem": "liquid nitrogen"
}

# ⚔️ STACK – Battle history (LIFO – Last In, First Out)
battle_log = [
    "Fought Dust Revenant in the Obsidian Arena, using the staff of Osiris that he stole from the gods in the underworld, AKA planet Pluto.",
    "Defeated Knight of Dust at the Red Citadel, preventing Alexander the Great's robotic body from being awakened.",
    "Escaped from Cinder Golem in the Fire Canyons with the help of some Christian crusaders from Earth"
]

# 📬 QUEUE – Mission requests (FIFO – First In, First Out)
mission_requests = deque([
    "Message from the Temple of Thoth: Escort priest through psychic storm",
    "Message from Princess Bastiva: Why aren't you responding to my messages? If you don't go out with me like you promised, I'll make Venus declare war on Mars!",
    "Message from Horus-X: The asteroid irrigation spaceship has been captured by the Mongols, and is heading towards New Karnak."
])



print("📖️ MUMMY.AI REPORT SYSTE4\n")
print("✨ Year 1240 A.D. — Egyptian Martian Colony, Planet Mars ✨")
print("""
Around 5 B.C., the Egyptians discovered how to travel through space using pyramid portals known as *Pydoors*.
Now, in the year 1240 A.D., the Egyptian colony has fully inhabited the Red Planet, developing agriculture, communication, and advanced AI.

You are *Cleo-P*, a robotic maid designed to assist the legendary warrior Ankhor. 🛡️
Though Ankhor is a decorated champion of the Olympus Mons arenas, he is notoriously disorganized.

After defeating the Eight Sphinxes of Vastitas Borealis, Ankhor invested his prize fortune to build you, his personal assistant.
Your mission: catalog and manage all of Ankhor’s stats, missions, and gear using sacred Martian data structures.
""")

# 🗡️ LIST - Inventory of weapons
print("\n🧰 Weapon Inventory (List):")
for weapon in inventory:
    print(f"  - {weapon}")

# 👑 SET - Defeated champions (unique)
print("\n🏆 Defeated Champions (Set):")
for champion in defeated_champions:
    print(f"  - {champion}")

# 📍 TUPLE - Secret base coordinates
print("\n📍 Secret Base Coordinates (Tuple):")
for coords in secret_bases:
    print(f"  - Location at (x={coords[0]}, y={coords[1]}, z={coords[2]})")

# 👾 DICTIONARY - Monsters and weaknesses
print("\n👹 Martian Monsters and their Weaknesses (Dictionary):")
for monster, weakness in monsters.items():
    print(f"  - {monster}: Weakness = {weakness}")

# ⚔️ STACK - Battle history (LIFO)
print("\n📜 Battle History (Stack - Last In, First Out):")
for battle in reversed(battle_log):  # Reversed to show top of the stack
    print(f"  - {battle}")

# 📬 QUEUE - Mission requests (FIFO)
print("\n📨 Incoming Mission Requests (Queue - First In, First Out):")
for msg in mission_requests:
    print(f"  - {msg}")
