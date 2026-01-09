# libft

Ma bibliothèque C personnalisée - Projet 42 Paris

## 📋 À propos

Libft est le premier projet de la piscine 42. L'objectif est de recréer des fonctions de la bibliothèque standard C (`libc`) et d'en ajouter d'autres utiles pour la suite du cursus.

C'est un projet fondamental qui m'a permis de comprendre en profondeur le fonctionnement des fonctions de base en C et de me familiariser avec la manipulation de pointeurs et de mémoire.

## ✨ Fonctionnalités

### Fonctions de la libc recréées

#### Strings
- `ft_strlen` - Calcule la longueur d'une chaîne
- `ft_strdup` - Duplique une chaîne
- `ft_strcpy` - Copie une chaîne
- `ft_strncpy` - Copie n caractères d'une chaîne
- `ft_strcat` - Concatène deux chaînes
- `ft_strncat` - Concatène n caractères
- `ft_strlcat` - Concatène avec gestion de taille
- `ft_strchr` - Trouve un caractère dans une chaîne
- `ft_strrchr` - Trouve la dernière occurrence d'un caractère
- `ft_strstr` - Trouve une sous-chaîne
- `ft_strnstr` - Trouve une sous-chaîne sur n caractères
- `ft_strcmp` - Compare deux chaînes
- `ft_strncmp` - Compare n caractères de deux chaînes
- `ft_atoi` - Convertit une chaîne en entier
- `ft_strnew` - Alloue une nouvelle chaîne
- `ft_strmap` - Applique une fonction à chaque caractère
- `ft_strmapi` - Applique une fonction avec index
- `ft_strequ` - Compare deux chaînes (égalité)
- `ft_strnequ` - Compare n caractères (égalité)
- `ft_strsub` - Extrait une sous-chaîne
- `ft_strjoin` - Joint deux chaînes
- `ft_strtrim` - Supprime les espaces en début/fin
- `ft_strsplit` - Divise une chaîne selon un délimiteur

#### Mémoire
- `ft_memset` - Remplit une zone mémoire avec un octet
- `ft_bzero` - Met à zéro une zone mémoire
- `ft_memcpy` - Copie une zone mémoire
- `ft_memccpy` - Copie jusqu'à un caractère
- `ft_memmove` - Copie avec gestion de chevauchement
- `ft_memchr` - Trouve un octet dans une zone mémoire
- `ft_memcmp` - Compare deux zones mémoire
- `ft_memalloc` - Alloue de la mémoire
- `ft_memdel` - Libère de la mémoire

#### Caractères
- `ft_isalpha` - Vérifie si c'est une lettre
- `ft_isdigit` - Vérifie si c'est un chiffre
- `ft_isalnum` - Vérifie si c'est alphanumérique
- `ft_isascii` - Vérifie si c'est ASCII
- `ft_isprint` - Vérifie si c'est imprimable
- `ft_toupper` - Convertit en majuscule
- `ft_tolower` - Convertit en minuscule

#### Écriture
- `ft_putchar` - Affiche un caractère
- `ft_putstr` - Affiche une chaîne
- `ft_putendl` - Affiche une chaîne + retour à la ligne
- `ft_putnbr` - Affiche un nombre
- `ft_putchar_fd` - Affiche un caractère sur un file descriptor
- `ft_putstr_fd` - Affiche une chaîne sur un file descriptor
- `ft_putendl_fd` - Affiche une chaîne + retour à la ligne sur fd
- `ft_putnbr_fd` - Affiche un nombre sur un file descriptor

### Fonctions bonus

- `ft_lstnew` - Crée un nouvel élément de liste chaînée
- `ft_lstdelone` - Supprime un élément de liste
- `ft_lstdel` - Supprime une liste entière
- `ft_lstadd` - Ajoute un élément au début
- `ft_lstiter` - Itère sur une liste
- `ft_lstmap` - Applique une fonction à chaque élément

## 🚀 Compilation

```bash
make
```

Cela génère la bibliothèque statique `libft.a`.

## 💻 Utilisation

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello 42!");
    ft_putendl(str);
    ft_strdel(&str);
    return (0);
}
```

Pour compiler avec libft :

```bash
gcc main.c -L. -lft -I.
```

## 📁 Structure

```
libft/
├── libft.h          # Header avec tous les prototypes
├── Makefile         # Fichier de compilation
├── ft_*.c           # Implémentation des fonctions
└── README.md        # Ce fichier
```

## 🎯 Ce que j'ai appris

Ce projet m'a permis de :
- Comprendre en profondeur les fonctions de base de la libc
- Maîtriser la manipulation de pointeurs et de mémoire
- Apprendre à gérer les cas limites et erreurs
- Comprendre les listes chaînées
- Utiliser Makefile pour compiler un projet

## 📝 Notes

- Toutes les fonctions respectent le comportement de la libc originale
- Gestion correcte des pointeurs NULL
- Pas de fuites mémoire
- Code normé selon le standard 42

## 🔗 Liens

- [École 42](https://www.42.fr/)
- [42 Paris](https://www.42.fr/paris/)

---

**Projet réalisé dans le cadre du cursus 42 Paris**
