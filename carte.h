#ifndef TP4S2POO_CARTE_H
#define TP4S2POO_CARTE_H


class carte {
    friend class jeu_cartes;
    int valeur;
    int forme;
    carte *suivant;
    bool gagnant; // indique quand une carte est gagnante
public:
    carte();
    carte(int forme, int valeur);
    carte(int forme, int valeur, carte *suivant);
    ~carte();
};


#endif
