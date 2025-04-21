// 🛡MUMMY AI - JavaScript edition

class Queue {
  constructor() {
    this.items = [];
  }
  enqueue(item) {
    this.items.push(item);
  }
  dequeue() {
    return this.items.shift();
  }
  getItems() {
    return this.items;
  }
}

// 🛡️🗡️ LIST – Ankhor’s inventory of weapons
const inventory = [
  "Plasma Khopesh",
  "Obsidian Spear",
  "Scarab Drone",
  "Laser Sling",
  "Abyssal Chakram"
];

// 👑 SET – Unique champions Ankhor has defeated
const defeated_champions = new Set([
  "Red Minotaur",
  "Phantom of Phobos",
  "Knight of Dust",
  "Titan of Tharsis",
  "Queen Anubia"
]);

// 📍 TUPLE – Immutable coordinates of Ankhor’s secret bases (x, y, z)
const secret_bases = [
  [42, -17, 900],      // Olympus Mons hideout
  [130, 2, -44],       // Valles Marineris cave
  [4, 20, 15]          // Pyramid Nexus Core
];

// 👾 DICTIONARY – Martian monsters and their weaknesses
const monsters = {
  "Sand Leech": "electricity",
  "Solar Wyrm": "cold plasma",
  "Dust Revenant": "heka (magic)",
  "Echo Serpent": "silence",
  "Cinder Golem": "liquid nitrogen"
};

// ⚔️ STACK – Battle history (LIFO – Last In, First Out)
const battle_log = [
  "Fought Dust Revenant in the Obsidian Arena, using the staff of Osiris that he stole from the gods in the underworld, AKA planet Pluto.",
  "Defeated Knight of Dust at the Red Citadel, preventing Alexander the Great's robotic body from being awakened.",
  "Escaped from Cinder Golem in the Fire Canyons with the help of some Christian crusaders from Earth"
];

// 📬 QUEUE – Mission requests (FIFO – First In, First Out)
const mission_requests = new Queue();
mission_requests.enqueue("Message from the Temple of Thoth: Escort priest through psychic storm");
mission_requests.enqueue("Message from Princess Bastiva: Why aren't you responding to my messages? If you don't go out with me like you promised, I'll make Venus declare war on Mars!");
mission_requests.enqueue("Message from Horus-X: The asteroid irrigation spaceship has been captured by the Mongols, and is heading towards New Karnak.");

// 📖 Output Report
console.log("📖️ MUMMY.AI REPORT SYSTEM\n");
console.log("✨ Year 1240 A.D. — Egyptian Martian Colony, Planet Mars ✨");
console.log(`
Around 5 B.C., the Egyptians discovered how to travel through space using pyramid portals known as *Pydoors*.
Now, in the year 1240 A.D., the Egyptian colony has fully inhabited the Red Planet, developing agriculture, communication, and advanced AI.

You are *Cleo-P*, a robotic maid designed to assist the legendary warrior Ankhor. 🛡️
Though Ankhor is a decorated champion of the Olympus Mons arenas, he is notoriously disorganized.

After defeating the Eight Sphinxes of Vastitas Borealis, Ankhor invested his prize fortune to build you, his personal assistant.
Your mission: catalog and manage all of Ankhor’s stats, missions, and gear using sacred Martian data structures.
`);

// 🗡️ LIST - Inventory of weapons
console.log("\n🧰 Weapon Inventory (List):");
inventory.forEach(weapon => console.log(`  - ${weapon}`));

// 👑 SET - Defeated champions
console.log("\n🏆 Defeated Champions (Set):");
for (let champion of defeated_champions) {
  console.log(`  - ${champion}`);
}

// 📍 TUPLE - Secret base coordinates
console.log("\n📍 Secret Base Coordinates (Tuple):");
secret_bases.forEach(coords => {
  console.log(`  - Location at (x=${coords[0]}, y=${coords[1]}, z=${coords[2]})`);
});

// 👾 DICTIONARY - Monsters and weaknesses
console.log("\n👹 Martian Monsters and their Weaknesses (Dictionary):");
for (let monster in monsters) {
  console.log(`  - ${monster}: Weakness = ${monsters[monster]}`);
}

// ⚔️ STACK - Battle history (LIFO)
console.log("\n📜 Battle History (Stack - Last In, First Out):");
[...battle_log].reverse().forEach(battle => {
  console.log(`  - ${battle}`);
});

// 📬 QUEUE - Mission requests (FIFO)
console.log("\n📨 Incoming Mission Requests (Queue - First In, First Out):");
mission_requests.getItems().forEach(msg => {
  console.log(`  - ${msg}`);
});
