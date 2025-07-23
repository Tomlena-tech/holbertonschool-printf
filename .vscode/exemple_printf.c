int _printf(const char *format, ...)
{
    va_list args;                            // Pour lire les arguments variables
    int i = 0, count = 0, index_funct = 0;   // i : index dans la chaîne format ; count : nb de caractères affichés ; index_funct : index dans funcs[]
    int (*func)(va_list);                    // Pointeur vers une fonction prenant des arguments variables

    // Tableau liant chaque spécificateur (comme %c, %s, etc.) à la fonction correspondante
    format_func_t funcs[] = {
        {'c', print_char},       // %c → affiche un caractère
        {'s', print_string},     // %s → affiche une chaîne
        {'%', print_percent},    // %% → affiche un %
        {'d', print_int},        // %d → affiche un entier
        {'i', print_int},        // %i → affiche un entier (identique à %d)
        {0, NULL}                // Fin du tableau (specifier == 0 signifie "fin")
    };

    va_start(args, format);     // Initialisation de l'accès aux arguments variadiques

    while (format && format[i])    // Boucle sur chaque caractère de la chaîne format
    {
        if (format[i] != '%')      // Si ce n’est pas un format (donc pas un '%')
        {
            count += _putchar(format[i]);  // Affiche le caractère tel quel
            i++;                           // Avance d’un caractère
            continue;                      // Passe à la prochaine itération
        }

        // Ici, on a trouvé un '%', donc on cherche la fonction associée à format[i + 1]
        i++;                        // On avance vers le caractère après '%'
        func = NULL;               // On réinitialise le pointeur de fonction
        index_funct = 0;           // On repart du début du tableau funcs[]

        // On parcourt le tableau funcs pour trouver le bon specifier
        while (funcs[index_funct].specifier)
        {
            // Si on trouve un specifier qui correspond à format[i],
            // on stocke la fonction correspondante dans `func`
            if (format[i] == funcs[index_funct].specifier)
            {
                func = funcs[index_funct].f;
                break;  // Pas besoin de continuer à chercher
            }
            index_funct++;  // Sinon, on passe au format suivant dans le tableau
        }

        // On ajoute le résultat : soit la fonction existe, soit on affiche '%' + format inconnu
        if (func)
        {
            count += func(args);   // Appelle la bonne fonction de print
        }
        else
        {
            count += _putchar('%');         // Affiche le caractère '%'
            count += _putchar(format[i]);   // Puis affiche le caractère qui suit, même si on ne le reconnaît pas
        }

        i++;  // On avance dans la chaîne format
    }

    va_end(args);    // Termine l'accès aux arguments variadiques

    return count;    // Retourne le nombre total de caractères affichés
}
