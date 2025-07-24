📋 DESCRIPTION

- Ce projet consiste a recréer la fonction standard C printf, en développant une version personnalisée nommée _printf. Cette fonction peut afficher différents types de données formaa
tées dans le terminal, tout comme printf, mais en se concentrant uniquement sur certains spécificateurs de format.

🧠 OBJECTIFS DU PROJECT

- Comprendre et manipuler les fonctions variadiques en C (stdarg.h)

- Utiliser des pointeurs vers des fonctions

- Gérer l'affichage de différents types de données

- Approfondir les structures conditionnelles et les boucles

⚙️ FONCTIONALITÉS PRISE EN CHARGE 

- La fonction _printf prend en charge les spécificateurs de format suivants :

| Spécificateur | Description                            |
| ------------- | -------------------------------------- |
| `%c`          | Affiche un caractère                   |
| `%s`          | Affiche une chaîne de caractères       |
| `%%`          | Affiche le caractère `%`               |
| `%d`, `%i`    | Affiche un entier (positif ou négatif) |


🧩 STRUCTURE DU PROJET

| Fichier                  | Rôle                                                                                                                 |
| ------------------------ | -------------------------------------------------------------------------------------------------------------------- |
| `printf.c`               | Contient la fonction principale `_printf`                                                                            |
| `_file_functions.c`      | Contient toutes les fonctions de gestion des différents formats (`%c`, `%s`, `%d`, etc.)                             |
| `main.h`                 | Fichier d'en-tête : contient les prototypes de toutes les fonctions et la définition de la structure `format_func_t` |
| `_putchar.c` (optionnel) | Fonction utilitaire pour écrire un caractère dans la sortie standard                                                 |


 🔁 FONCTIONNEMENT DE _PRINTF
 
 - Lecture caractère par caractère de la chaîne de format.

 Lorsqu’un % est rencontré :

 Vérification du caractère suivant.

 Si un spécificateur reconnu est trouvé, la fonction correspondante est appelée via un pointeur de fonction.

 Sinon, % et le caractère sont affichés tels quels.

 Les arguments sont récupérés via va_list.

 
 🛠️ Compilation
 
 - Compilation du projet avec :

   gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
   
 👨‍💻 AUTEURS
 Ce projet a été développé conjointement par Thomas Decourt & Dorian Oufer
