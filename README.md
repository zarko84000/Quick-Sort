# Quick-Sort

Tri rapide :

Principe : Soit T un tableau à trier. On se donne un élément quelconque du tableau (en général le
premier à gauche) nommé pivot. On effectue une partition du tableau consistant à réorganiser les
éléments de T de la façon suivante : T[1]...T[m − 1], T[m], T[m + 1]...T[n] . T[m] contient le pivot
choisi. T[1]...T[m − 1] sont les éléments de T inférieurs à T[m] et T[m + 1]..T[.n] sont ceux qui
sont supérieurs au pivot. Notez que les valeurs T[1]...T[m−1] et T[m+1]...T[n] ne sont pas
nécessairement triées. Puisque T[m]
Pour les trier on réitère récursivement ce qui a été fait sur T sur chacun de ces sous-tableaux.
L’algorithme est alors le suivant :

Algorithme : TriRapide_recu(T,a,b);
  si a < b alors;
    m=Partitionnement(T,a,b);
    TriRapide_recu(T,a,m-1);
    TriRapide_recu(T,m+1,b);
fin;

Un algorithme de partitionnement possible est le suivant : Soit T un tableau d’entiers et soient a et b
les deux indices entre lesquels nous souhaitons réaliser le partitionnement. On choisi comme pivot
T[b], on considère un indice i tel que pour tout a<=k<i on a T[k]<pivot : au début on peut initialiser
i à a. On considère un autre indice j, i<=j<b tel que pour tout k (i<=k<j) on a T[k]>= pivot : au
début on peut initialiser j à i.

Pour chaque valeur j (comprise entre i et b-1), si T[j]<pivot alors on échange T[i] et T[j] et on
incrément i et j; sinon on incrémente seulement j. De cette façon, à tout moment, pour tous les
indices k compris entre 0 et i-1, on a T[k]<pivot. Et pour pour tout les indices k compris entre i et j1, on T[k]>=pivot. Enfin il faut échanger T[i] et T[b] et retourner i.
