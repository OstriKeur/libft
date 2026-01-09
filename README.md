# libft

Ma bibliothèque C personnalisée - Projet 42 Paris

## À propos

Libft est le premier projet de la piscine 42. L'objectif est de recréer des fonctions de la bibliothèque standard C (`libc`) et d'en ajouter d'autres utiles pour la suite du cursus.

C'est un projet fondamental qui m'a permis de comprendre en profondeur le fonctionnement des fonctions de base en C et de me familiariser avec la manipulation de pointeurs et de mémoire.

## Fonctionnalités

### Fonctions de la libc recréées

**Strings**
- `ft_strlen`, `ft_strdup`, `ft_strcpy`, `ft_strncpy`
- `ft_strcat`, `ft_strncat`, `ft_strlcat`
- `ft_strchr`, `ft_strrchr`, `ft_strstr`, `ft_strnstr`
- `ft_strcmp`, `ft_strncmp`, `ft_atoi`
- `ft_strnew`, `ft_strmap`, `ft_strmapi`
- `ft_strequ`, `ft_strnequ`, `ft_strsub`
- `ft_strjoin`, `ft_strtrim`, `ft_strsplit`

**Mémoire**
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`
- `ft_memmove`, `ft_memchr`, `ft_memcmp`
- `ft_memalloc`, `ft_memdel`

**Caractères**
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`
- `ft_isascii`, `ft_isprint`
- `ft_toupper`, `ft_tolower`

**Écriture**
- `ft_putchar`, `ft_putstr`, `ft_putendl`, `ft_putnbr`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Fonctions bonus

- `ft_lstnew`, `ft_lstdelone`, `ft_lstdel`
- `ft_lstadd`, `ft_lstiter`, `ft_lstmap`

## Compilation

```bash
make
```

Cela génère la bibliothèque statique `libft.a`.

## Utilisation

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

## Ce que j'ai appris

- Comprendre en profondeur les fonctions de base de la libc
- Maîtriser la manipulation de pointeurs et de mémoire
- Gérer les cas limites et erreurs
- Comprendre les listes chaînées
- Utiliser Makefile pour compiler un projet

---

**Projet réalisé dans le cadre du cursus 42 Paris**
