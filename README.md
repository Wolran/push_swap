# push_swap

### Objectif
Ce projet vous demande de trier des données sur une pile, avec un set d’instructions limité, en moins de coups possibles.

### Règles :
• Le jeu est constitué de 2 piles nommées a et b.\
• Au départ :\
◦ La pile a contient une quantité aléatoire de négatif et/ou des nombres positifs\
qui ne peuvent pas être dupliqués.\
◦ La pile b est vide.\
• Le but du jeu est de trier les nombres de la pile a par ordre croissant.



### Instructions :
`sa` (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.\
\
`sb` (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b.\
\
`ss` : sa et sb en même temps.\
\
`pa` (push a) : Prend le premier élément au sommet de b et le met sur a.\
\
`pb` (push b) : Prend le premier élément au sommet de a et le met sur b.\
\
`ra` (rotate a) : Décale d’une position vers le haut tous les élements de la pile a.\
Le premier élément devient le dernier.\
\
`rb` (rotate b) : Décale d’une position vers le haut tous les élements de la pile b.\
Le premier élément devient le dernier.\
\
`rr` : ra et rb en même temps.\
\
`rra` (reverse rotate a) : Décale d’une position vers le bas tous les élements de\
la pile a. Le dernier élément devient le premier.\
\
`rrb` (reverse rotate b) : Décale d’une position vers le bas tous les élements de\
la pile b. Le dernier élément devient le premier.\
\
`rrr` : rra et rrb en même temps.

## Exemple

```shell
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
```
