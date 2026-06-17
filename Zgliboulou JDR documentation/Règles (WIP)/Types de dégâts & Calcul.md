Liste des éléments (dégâts Magiques si ils proviennent d'un sort):
Eau, Feu, Terre, Air
Liste des autres formes d'énergie (Magiques):
Sainte, Obscure, Vitale, Arcanique
Liste des autres types de dégâts (Physiques):
Tranchant, Impact, Perçant, Véritable

Formule de coût des sorts :
(coût de base - réductions) * (Mult. PE dégâts) * (Mult. PE taille)

| Multiplicateur de dégâts | Modificateur de taille (cases) | Multiplicateur de cout (PE) |
| ------------------------ | ------------------------------ | --------------------------- |
| 1                        | 0                              | 1                           |
| 1.5                      | 1                              | 2                           |
| X >= 2                   | X>2                            | 2^X                         |

Exemple : si un sort coûte 10 de base, que le personnage possède 30% de réduction de coût, qu'on multiplie ses dégâts par 4, et qu'on augmente son rayon de 3 cases, il va couter :                 (10 - 3) * 2^4 * 2^3 = 7 * 16 * 8 = 896 PE.

