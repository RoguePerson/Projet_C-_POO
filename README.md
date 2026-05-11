🏦 Simulateur d'Emprunt Immobilier en C++
📖 Description du projet

Ce projet en C++ permet de simuler un emprunt immobilier et de comparer plusieurs offres bancaires en fonction de différents taux d'intérêt et durées de remboursement.

L'utilisateur peut :

💰 Saisir le montant du capital à emprunter.
🏦 Ajouter plusieurs banques (ex. BNP, LCL, Crédit Agricole).
📈 Saisir plusieurs taux d'intérêt annuels.
📅 Saisir plusieurs durées de remboursement (en années).
🧮 Calculer automatiquement les mensualités.
📋 Générer des listes de résultats exploitables dans le programme.

Ce projet a pour objectif de mettre en pratique plusieurs notions importantes du C++ :

🧱 Programmation orientée objet avec la classe Emprunt
📦 Utilisation des vector
➗ Calculs mathématiques avec pow()
🗂️ Organisation des données avec struct
⌨️ Gestion des entrées utilisateur
⚙️ Fonctionnement du calcul

Le programme utilise la formule classique des mensualités d'un prêt amortissable :

M = C × i × (1 + i)^n / ((1 + i)^n - 1)
📝 Avec :
M = mensualité
C = capital emprunté
i = taux mensuel
n = nombre total de mensualités

🧪 Exemple d'utilisation

Capital : 200000
Nombre de banques : 2
Banque 1 : bnp
Banque 2 : lcl
Nombre de taux : 2
Taux 1 : 3.5
Taux 2 : 5
Nombre de durees : 2
Duree 1 : 5
Duree 2 : 10

📊 Résultat du programme
```text

 ________________________________________________
|    Banque     |      bnp      |      lcl      |
|_______________|_______________|_______________|
|   Taux 3.5    |      3.5      |      3.5      |
|_______________|_______________|_______________|
|    Duree 5    |       5       |       5       |
|_______________|_______________|_______________|
|  Mensualité  |    3638.32    |    3638.32    |
|_______________|_______________|_______________|
|   Taux 3.5    |      3.5      |      3.5      |
|_______________|_______________|_______________|
|   Duree 10    |      10       |      10       |
|_______________|_______________|_______________|
|  Mensualité  |    1977.7     |    1977.7     |
|_______________|_______________|_______________|
|    Taux 5     |       5       |       5       |
|_______________|_______________|_______________|
|    Duree 5    |       5       |       5       |
|_______________|_______________|_______________|
|  Mensualité  |    3774.2     |    3774.2     |
|_______________|_______________|_______________|
|    Taux 5     |       5       |       5       |
|_______________|_______________|_______________|
|   Duree 10    |      10       |      10       |
|_______________|_______________|_______________|
|  Mensualité  |    2121.29    |    2121.29    |
|_______________|_______________|_______________|

🧠 Méthodes principales
👤 saisieUtilisateur()

Permet de saisir le capital emprunté.

🏦 saisieBanque()

Permet de saisir les banques, les taux et les durées.

🧮 calculerMensualite(float tauxAnnuel, int duree)

Calcule la mensualité pour un taux et une durée donnés.

📋 genererListes()

Retourne toutes les données sous forme de listes (vector).
