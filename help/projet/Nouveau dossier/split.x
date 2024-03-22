struct compte {
    string nom<50>;
    string prenom<50>;
    string email<100>;
    string pays<50>;
    int solde;
};

struct abonnement {
    string nom<50>;
    compte comptes;
    int prix;         
    int max_compte;   
};

struct  modif_solde{
    compte compte;
    int solde
};

program ABONNEMENT_PROG {
    version ABONNEMENT_VERSION {
        abonnement GET_ABONNEMENT(string) = 1;
        void ADD_COMPTE(compte) = 2;
        compte GET_COMPTE(string) = 3;
        void ADD_ABONNEMENT(abonnement) = 4;
        void suppr_compte(compte)= 5;
        void add_solde(modif_solde)= 6;
        void moins_solde(modif_solde)= 7;
    } = 1;
} = 0x31240000;
