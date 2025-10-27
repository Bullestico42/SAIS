#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// void    print_withouspace(const char *tab)
// {
//     int i;
//     while (tab[i]) {
//         printf("%c", tab[i]);
//         i++;
//     }
// }

void    print_salad(int salad, const char *tab[]) {
    int i, x = 0;

    while (x < salad) {
        while (tab[i]) {
            printf("%s", tab[i]);
        i++;
        printf("\n");
        }
        printf("\n\n");
        x++;
        i = 0;
    }
}

int main(int ac, char **av) {
    
    if (ac != 2)
        return (printf("METS SALAD"), 0);
    int salad = atoi(av[1]);
    if (salad < 1)
        return (printf("METS SALAD"), 0);
    const char *tab[] = {
        "            aaassssaa",
        "         aasssallladaaass",
        "      aaasssalllladddeeaass",
        "    aasssalllllaaddddeeeaass",
        "   aaasssallllladddddeeedaass",
        "  aasssallllllaaaddddddeeaass",
        " aaasssalllllllaaadddddddeeaass",
        " aasssallllllllaaadddddddeeaass",
        "aasssalllllllllaaadddddddeeaass",
        "aasssalllllllllaaaadddddddeeaass",
        "aasssalllllllllaaaadddddddeeaass",
        " aasssalllllllllaaadddddddeeaass",
        "  aaasssalllllllaaadddddddeeaass",
        "   aasssalllllllaaadddddddeeaass",
        "     aaasssalllllaaaddddeeaass",
        "      aasssalllllaaaadddeaass",
        "        aaasssallaaaass",
        "            aaasssaa", NULL
    };
    print_salad(salad, tab);
}
