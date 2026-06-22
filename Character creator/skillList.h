#pragma once
#include "skill.h"
#include <vector>
using namespace std;

// Constructor: Skill(name, originClass, level, duration, cooldown, effect)
vector<Skill> allSkills = {
    // ===== BARBARE =====
    Skill("Rage", "Barbare", 1, "3 tours", "6 tours", "Bonus de 1 aux tests de force, dégâts bonus 1d4"),
    Skill("Défense naturelle", "Barbare", 1, "Passif", "X", "Donne un bonus de CON/2 à la protection naturelle"),
    Skill("Témérité", "Barbare", 2, "1 tour", "2 tours", "Avantage sur tous les jets d'attaque mais ennemis gagnent aussi l'avantage"),
    Skill("Colérique", "Barbare", 2, "Passif", "X", "La rage dure 3 tours de plus"),
    Skill("Frénésie", "Barbare", 3, "Passif", "X", "Si tue un ennemi, peut se déplacer et attaquer un autre par une action rapide"),
    Skill("Action colérique", "Barbare", 5, "Passif", "X", "Accorde une action simple supplémentaire"),
    Skill("Déplacement rapide", "Barbare", 5, "Passif", "X", "Déplacement augmenté de 2 cases"),
    Skill("Instinct sauvage", "Barbare", 6, "Passif", "X", "Avantage sur les jets d'initiative"),
    Skill("Rage inébranlable", "Barbare", 7, "Passif", "X", "Avantage sur les jets de sauvegarde contre les effets négatifs"),
    Skill("Critique sanglant", "Barbare", 9, "1 attaque", "X", "Check DD attaque * 1.5 pour faire un critique"),
    Skill("Force primale", "Barbare", 10, "Passif", "X", "Le score de force augmente de 4"),

    // ===== BARDE =====
    Skill("Inspiration", "Barde", 1, "Inst", "3 tours", "La cible rajoute 1d8 + CHAR à sa prochaine attaque"),
    Skill("Prestidigitateur", "Barde", 1, "Passif", "X", "Si une action est réalisée de manière stylée, le personnage ajoute CHAR/2 au jet"),
    Skill("Chant reposant", "Barde", 2, "Un repos court", "X", "Améliore la récupération de PE/PV des alliés lors d'un repos court de 1d8 + CHAR"),
    Skill("Source d'inspiration", "Barde", 3, "Inst", "Partagé avec Inspiration", "Inspire tout le monde autour dans un rayon de 1 carré"),
    Skill("Expertise", "Barde", 5, "X", "Usage unique", "Le personnage choisit une capacité et double ses effets"),
    Skill("Inspiration+", "Barde", 6, "Passif", "X", "La classe du dé d'inspiration est améliorée (d12)"),
    Skill("Ambianceur", "Barde", 7, "3 tours", "6", "Le personnage peut rendre toute check de charisme plus simple par une action rapide (+3)"),
    Skill("Expertise Barde 9", "Barde", 9, "X", "Usage unique", "Le personnage choisit une capacité et double ses effets"),
    Skill("Inspiration++", "Barde", 10, "Passif", "X", "La classe du dé d'inspiration est améliorée (d20)"),

    // ===== DRUIDE =====
    Skill("Communication animale", "Druide", 1, "Passif", "X", "Peut parler avec les animaux"),
    Skill("Voix de Gaia", "Druide", 2, "Passif", "X", "Avantage sur les checks de WIS"),
    Skill("Expert en potions", "Druide", 3, "HC", "3/jour", "Capable de créer diverses potions"),
    Skill("Ami de la faune", "Druide", 5, "Passif", "X", "Peut apprivoiser n'importe quelle bête (check INT, DD 5 + WIS)"),
    Skill("Arpenteur sauvage", "Druide", 6, "Passif", "X", "Peut se déplacer sur les terrains difficiles sans difficulté"),
    Skill("Compréhension ancestrale", "Druide", 7, "Passif", "X", "Comprend tous les langages du plan d'origine, avantage sur INT pour codes"),
    Skill("Choisi par Gaia", "Druide", 9, "Passif", "X", "Attaques magiques Vitales de +INT sur 10+"),
    Skill("Tatouage shamanique", "Druide", 10, "Passif", "X", "TBD"),

    // ===== GUERRIER =====
    Skill("Arme de prédilection", "Guerrier", 1, "Passif", "X", "Fait 1d4 dégâts bonus avec son arme de prédilection"),
    Skill("Frappe éclair", "Guerrier", 2, "Inst", "3", "Peut se déplacer jusqu'à 3 cases et attaquer par une action simple"),
    Skill("Attaque en puissance", "Guerrier", 3, "Inst", "2", "Porte un coup qui fait le double des dégâts (ennemi peut esquiver)"),
    Skill("Manifestation de l'aura", "Guerrier", 5, "Passif", "X", "Peut percevoir l'aura et déterminer émotions"),
    Skill("Entretien minutieux", "Guerrier", 6, "Passif", "X", "Équipements restent en parfait état et revendables au prix d'achat"),
    Skill("Instinct supérieur", "Guerrier", 7, "Passif", "1 combat", "Si dégâts mortels, jet DD15-CONS/2 pour rester à 1HP"),
    Skill("Amateur d'arme de prédilection", "Guerrier", 9, "Passif", "X", "Fait 1d12 dégâts bonus avec l'arme de prédilection"),
    Skill("Utilisateur d'aura", "Guerrier", 10, "Inst", "X", "Peut ajouter points sur jets d'attaque, sauvegarde et dégâts"),
    Skill("Maitrise de l'aura", "Guerrier", 15, "Inst", "3 tours", "Peut modifier résultat après l'avoir vu et reroll un dé"),

    // ===== MAGE =====
    Skill("Contrôle arcanique", "Mage", 1, "Passif", "X", "Peut créer des sorts basiques à partir de son mana"),
    Skill("Concentration", "Mage", 2, "Inst", "3 tours", "Récupère WIS PE par une action rapide"),
    Skill("Language runique", "Mage", 3, "Passif", "X", "Capable de comprendre les runes et caster des sorts rituels"),
    Skill("Bloquage magique", "Mage", 5, "Passif", "X", "Peut annuler une attaque physique (check INT, DD 8 + attaque)"),
    Skill("Mana renforcé", "Mage", 6, "Passif", "X", "Ajoute INT/2 à tous les sorts"),
    Skill("Progression méthodique", "Mage", 7, "Passif", "X", "Ne peut pas gagner moins de la moitié de son dé de PE"),
    Skill("Compréhension magique approfondie", "Mage", 9, "Passif", "X", "Tous les sorts coûtent 20% moins cher"),
    Skill("Focus arcanique", "Mage", 10, "Inst", "4 tours", "Se concentre et gagne l'avantage, effets doublés"),
    Skill("Mot de Pouvoir", "Mage", 11, "Inst", "6 tours", "Persuade une cible intelligente d'effectuer un ordre"),

    // ===== MOINE =====
    Skill("Inspiration Moine", "Moine", 1, "Inst", "3 tours", "La cible rajoute 1d8 + CHAR à sa prochaine attaque"),
    Skill("Prestidigitateur Moine", "Moine", 1, "Passif", "X", "Si une action est réalisée de manière stylée, ajoute CHAR/2 au jet"),
    Skill("Chant reposant Moine", "Moine", 2, "Un repos court", "X", "Améliore la récupération de PE/PV des alliés"),
    Skill("Source d'inspiration Moine", "Moine", 3, "Inst", "Partagé avec Inspiration", "Inspire tout le monde autour"),
    Skill("Expertise Moine", "Moine", 5, "X", "Usage unique", "Le personnage choisit une capacité et double ses effets"),
    Skill("Inspiration+ Moine", "Moine", 6, "Passif", "X", "La classe du dé d'inspiration est améliorée (d12)"),
    Skill("Ambianceur Moine", "Moine", 7, "3 tours", "6", "Peut rendre toute check de charisme plus simple (+3)"),
    Skill("Expertise Moine 9", "Moine", 9, "X", "Usage unique", "Le personnage choisit une capacité et double ses effets"),
    Skill("Inspiration++ Moine", "Moine", 10, "Passif", "X", "La classe du dé d'inspiration est améliorée (d20)"),

    // ===== PALADIN =====
    Skill("Inspiration Paladin", "Paladin", 1, "Inst", "3 tours", "La cible rajoute 1d8 + CHAR à sa prochaine attaque"),
    Skill("Prestidigitateur Paladin", "Paladin", 1, "Passif", "X", "Si une action est réalisée de manière stylée, ajoute CHAR/2 au jet"),
    Skill("Chant reposant Paladin", "Paladin", 2, "Un repos court", "X", "Améliore la récupération de PE/PV des alliés"),
    Skill("Source d'inspiration Paladin", "Paladin", 3, "Inst", "Partagé avec Inspiration", "Inspire tout le monde autour"),
    Skill("Expertise Paladin", "Paladin", 5, "X", "Usage unique", "Le personnage choisit une capacité et double ses effets"),
    Skill("Inspiration+ Paladin", "Paladin", 6, "Passif", "X", "La classe du dé d'inspiration est améliorée (d12)"),
    Skill("Ambianceur Paladin", "Paladin", 7, "3 tours", "6", "Peut rendre toute check de charisme plus simple (+3)"),
    Skill("Expertise Paladin 9", "Paladin", 9, "X", "Usage unique", "Le personnage choisit une capacité et double ses effets"),
    Skill("Inspiration++ Paladin", "Paladin", 10, "Passif", "X", "La classe du dé d'inspiration est améliorée (d20)"),

    // ===== RANGER =====
    Skill("Inspiration Ranger", "Ranger", 1, "Inst", "3 tours", "La cible rajoute 1d8 + CHAR à sa prochaine attaque"),
    Skill("Prestidigitateur Ranger", "Ranger", 1, "Passif", "X", "Si une action est réalisée de manière stylée, ajoute CHAR/2 au jet"),
    Skill("Chant reposant Ranger", "Ranger", 2, "Un repos court", "X", "Améliore la récupération de PE/PV des alliés"),
    Skill("Source d'inspiration Ranger", "Ranger", 3, "Inst", "Partagé avec Inspiration", "Inspire tout le monde autour"),
    Skill("Expertise Ranger", "Ranger", 5, "X", "Usage unique", "Le personnage choisit une capacité et double ses effets"),
    Skill("Inspiration+ Ranger", "Ranger", 6, "Passif", "X", "La classe du dé d'inspiration est améliorée (d12)"),
    Skill("Ambianceur Ranger", "Ranger", 7, "3 tours", "6", "Peut rendre toute check de charisme plus simple (+3)"),
    Skill("Expertise Ranger 9", "Ranger", 9, "X", "Usage unique", "Le personnage choisit une capacité et double ses effets"),
    Skill("Inspiration++ Ranger", "Ranger", 10, "Passif", "X", "La classe du dé d'inspiration est améliorée (d20)"),

    // ===== ROUBLARD =====
    Skill("Attaque Furtive", "Roublard", 1, "Passif", "X", "Si cible ne réalise pas la présence, rajoute +DEX aux dégâts"),
    Skill("Action Rusée", "Roublard", 2, "Passif", "X", "Peut utiliser une action rapide pour Dasher, se Cacher ou Désengager"),
    Skill("Instinct des rues", "Roublard", 3, "Passif", "X", "Ne peut pas être surpris, avantage sur première esquive"),
    Skill("Evasion", "Roublard", 5, "Passif", "X", "Peut esquiver les attaques (check DEX)"),
    Skill("Multilingue", "Roublard", 6, "Passif", "X", "Connaît les bases de toutes les langues vivantes"),
    Skill("Agile", "Roublard", 7, "Passif", "X", "Vitesse de déplacement augmentée de 2 cases"),
    Skill("Pistache", "Roublard", 9, "Passif", "X", "Très convainquant et excellent menteur"),
    Skill("Empoisonneur", "Roublard", 10, "X", "1 short rest", "Peut créer poisons et potions"),

    // ===== SOUS-CLASSE: BARBARE - VOIE DE LA RAGE =====
    Skill("Peau de rage", "Voie de la Rage", 4, "Passif", "X", "La protection naturelle est doublée"),
    Skill("Rage inextinguible", "Voie de la Rage", 6, "Passif", "X", "La rage dure 3 tours de plus"),
    Skill("Soif de sang", "Voie de la Rage", 8, "Passif", "X", "Se soigne de 10% des dégâts infligés (max 20% vie par tour)"),
    Skill("Rage de vivre", "Voie de la Rage", 12, "Inst", "1 combat", "Consume tours de rage pour survivre à dégâts mortels"),

    // ===== SOUS-CLASSE: BARBARE - VOIE DU LEADER =====
    Skill("Rage du Leader", "Voie du Leader", 4, "Passif", "X", "Partage effets basiques de la rage avec alliés (rayon 5 carrés)"),
    Skill("Rage Charismatique", "Voie du Leader", 6, "1 tour", "2 tours", "Peut ajouter sa Constitution à son Charisme"),
    Skill("Cri de Guerre", "Voie du Leader", 8, "3 tours", "6 tours", "Tous les alliés enragés augmentent jets d'attaque"),
    Skill("Rage against the Machine", "Voie du Leader", 12, "Passif", "X", "Toutes compétences passives de rage partagées aux alliés"),

    // ===== SOUS-CLASSE: BARDE - VOIE DE L'ORATEUR =====
    Skill("Charme", "Voie de l'Orateur", 4, "Inst", "3", "Essayer de charmer une cible intelligente (DD CHAR)"),
    Skill("Contre-Charme", "Voie de l'Orateur", 8, "Inst", "3", "Annuler un effet psychologique de la cible"),
    Skill("Mot de Persuasion", "Voie de l'Orateur", 12, "Inst", "6 tours", "Persuader une cible d'effectuer un ordre (un mot)"),

    // ===== SOUS-CLASSE: BARDE - VOIE DE LA MUSIQUE MARTIALE =====
    Skill("Instrumentiste amateur", "Voie de la Musique Martiale", 4, "Passif", "X", "Capable d'utiliser tous types d'instruments"),
    Skill("Inspiration musicale", "Voie de la Musique Martiale", 6, "Inst", "Inspiration", "Utiliser instrument pour inspirer par une action rapide"),
    Skill("Instrumentiste professionnel", "Voie de la Musique Martiale", 8, "Passif", "X", "Se spécialise dans un instrument (effets doublés)"),
    Skill("Concert endiablé", "Voie de la Musique Martiale", 12, "Inst", "1 combat", "Toute créature intelligente visée doit faire jet de Sagesse"),

    // ===== SOUS-CLASSE: DRUIDE - VOIE DE LA HORDE =====
    Skill("Compagnon spirituel", "Voie de la Horde", 4, "Permanent", "5 niveaux", "Choisir une créature apprivoisée comme compagnon"),
    Skill("Communion avec la nature", "Voie de la Horde", 6, "Passif", "X", "Les bêtes sauvages cherchent à aider le personnage"),
    Skill("Appel de la Meute", "Voie de la Horde", 8, "Inst", "Un combat", "Appelle toutes les bêtes à proximité"),
    Skill("Chef de Meute", "Voie de la Horde", 12, "Passif", "X", "Partage compétences et effets avec créatures contrôlées"),

    // ===== SOUS-CLASSE: DRUIDE - VOIE DE LA NATURE =====
    Skill("Magie Sauvage", "Voie de la Nature", 4, "Var", "X", "Accès à la magie sauvage (Vitaux, Terre ou physiques)"),
    Skill("Ami de la flore", "Voie de la Nature", 6, "Passif", "X", "Peut parler avec les plantes et les apprivoiser"),
    Skill("Sage de la nature", "Voie de la Nature", 8, "Passif", "X", "Sorts de nature coûtent 20% de PE moins cher"),
    Skill("Corps de plantes", "Voie de la Nature", 12, "3 tours", "1 combat", "Corps devient hybride plante-créature"),

    // ===== SOUS-CLASSE: DRUIDE - VOIE DE LA TRANSFORMATION =====
    Skill("Wildshape", "Voie de la Transformation", 4, "Lvl/2h", "2 charges", "Peut se transformer en créature déjà vue"),
    Skill("Télépathie spirituelle", "Voie de la Transformation", 6, "Passif", "X", "Capable de parler sous forme transformée"),
    Skill("Entre tradition et modernité", "Voie de la Transformation", 8, "Permanent", "Long rest", "Enchanter équipements pour transformation"),
    Skill("Transformation Habile", "Voie de la Transformation", 12, "Passif", "X", "Peut utiliser compétences même en Wildshape"),

    // ===== SOUS-CLASSE: GUERRIER - VOIE DE L'EPÉISTE =====
    Skill("Parade", "Voie de l'Epéiste", 4, "Inst", "X", "Jet de dextérité pour parer attaques (DD = attaque)"),
    Skill("Parade de projectile", "Voie de l'Epéiste", 6, "Inst", "X", "Peut parer les projectiles physiques"),
    Skill("Goûts affinés", "Voie de l'Epéiste", 8, "Passif", "X", "Jets d'attaque avec arme de finesse gagnent +5"),
    Skill("Utilisation fine de l'aura", "Voie de l'Epéiste", 12, "Passif", "X", "Peut renvoyer projectiles et provoquer attaque d'opportunité"),

    // ===== SOUS-CLASSE: GUERRIER - VOIE DE LA BRUTE =====
    Skill("Bloquage", "Voie de la Brute", 4, "Inst", "X", "Jet de Force pour parer attaques (DD = attaque)"),
    Skill("Goûts de brute", "Voie de la Brute", 8, "Passif", "X", "Jets d'attaque avec arme de force gagnent +5"),
    Skill("Utilisation fine aura Brute", "Voie de la Brute", 12, "Passif", "X", "Peut renvoyer projectiles et provoquer attaque d'opportunité"),

    // ===== SOUS-CLASSE: MAGE - VOIE DE L'ELÉMENTALISTE =====
    Skill("Elémentaliste amateur", "Voie de l'Elémentaliste", 4, "Inst", "3", "Mana s'anime, capable magie Vent, Feu, Eau, Terre"),
    Skill("Choisi par les éléments", "Voie de l'Elémentaliste", 6, "Passif", "X", "Jets magiques d'éléments présents avec avantage"),
    Skill("Spécialisation", "Voie de l'Elémentaliste", 8, "Inst", "3", "Choisir élément, dégâts +INT/2, coût -30%"),
    Skill("Incarnation Elementaire", "Voie de l'Elémentaliste", 12, "6 tours", "1 short rest", "Prend caractéristiques d'un élémentaire"),

    // ===== SOUS-CLASSE: MAGE - VOIE DE L'OCCULTISTE =====
    Skill("Occultiste amateur", "Voie de l'Occultiste", 4, "Passif", "X", "Capable magie occulte (Obscure ou Vitale)"),
    Skill("Mana agressif", "Voie de l'Occultiste", 6, "Passif", "X", "Sorts d'attaques +INT/2 dégâts, défense +INT/2 protect"),
    Skill("Arcaniste Occulte", "Voie de l'Occultiste", 8, "Passif", "X", "Sorts vitaux +INT dégâts, obscurs plus efficaces, coût -30%"),
    Skill("Contresort", "Voie de l'Occultiste", 8, "Passif", "X", "En réaction, payer coût sort lancé pour l'annuler"),
    Skill("Inca", "Voie de l'Occultiste", 12, "Passif", "1 combat", "Prend Forme Spectrale en cas dégâts mortels"),

    // ===== SOUS-CLASSE: ROUBLARD - VOIE DE L'ASSASSIN =====
    Skill("Assassinat", "Voie de l'Assassin", 4, "Passif", "X", "Gagne avantage sur dégâts d'une attaque furtive"),
    Skill("Fantôme de la nuit", "Voie de l'Assassin", 6, "Var", "X", "Peut disparaître dans ombres si déjà caché"),
    Skill("Viser les points faibles", "Voie de l'Assassin", 8, "Passif", "X", "Dégâts de l'attaque sournoise doublés"),
    Skill("Poison de l'esprit", "Voie de l'Assassin", 12, "3 tours", "1 tour", "Poison qui rend la cible confuse"),

    // ===== SOUS-CLASSE: ROUBLARD - VOIE DU DÉBROUILLARD =====
    Skill("Gosse des rues", "Voie du Débrouillard", 4, "Passif", "X", "Connaît emplacements marchés noirs, rabais 10%"),
    Skill("Crocheteur professionnel", "Voie du Débrouillard", 6, "Inst", "Inspiration", "Peut automatiquement crocheter verrous non magiques"),
    Skill("Changeforme", "Voie du Débrouillard", 8, "24h", "Short rest", "Peut se faire passer pour quelqu'un d'autre"),
    Skill("Sérum de vérité", "Voie du Débrouillard", 12, "10 minutes", "X", "Crée puissant sérum de vérité"),
};

// Helper functions
vector<Skill> getSkillsForLevelUp(const string& className, int level) {
    vector<Skill> result;
    for (const auto& skill : allSkills) {
        if (skill.getOriginClass() == className && skill.getLevel() == level) {
            result.push_back(skill);
        }
    }
    return result;
}

vector<Skill> getClassSkills(const string& className) {
    vector<Skill> result;
    for (const auto& skill : allSkills) {
        if (skill.getOriginClass() == className) {
            result.push_back(skill);
        }
    }
    return result;
}