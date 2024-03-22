struct compte {
    string nom<50>;
    string prenom<50>;
    string email<100>;
    string pays<50>;
};

struct abonnement {
    string nom<50>;
    struct compte comptes<>;
    int prix<>;         
    int max_compte<>;   
};

struct abonnement_compte {
    struct compte compte<>;
    struct abonnement abonnement<>;
};

program ABONNEMENT_PROG {
    version ABONNEMENT_VERSION {
        abonnement GET_ABONNEMENT(string) = 1;
        void ADD_COMPTE(compte) = 2;
        compte GET_COMPTE(string) = 3;
        void ADD_ABONNEMENT(abonnement) = 4;
        void ADD_ABONNER(abonnement_compte) = 5;
        void suppr_compte(compte)= 6;
    } = 1;
} = 0x31240000;
