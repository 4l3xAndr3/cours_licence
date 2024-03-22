#include "split.h" 

// Structures pour stocker les données d'abonnement et de compte
abonnement abonnements[100];
int nombre_abonnements = 0;

compte comptes[100]; 
int nombre_comptes = 0;

// Fonction RPC pour récupérer un abonnement
abonnement *get_abonnement_1_svc(char **nom, struct svc_req *rqstp) {
    for (int i = 0; i < nombre_abonnements; i++) {
        if (strcmp(abonnements[i].nom, *nom) == 0) {
            return &abonnements[i];
        }
    }
    return NULL;
}

// Fonction RPC pour ajouter un compte
void *add_compte_1_svc(compte *cpt, struct svc_req *rqstp) {
    // Ajout du compte au tableau de comptes
    comptes[nombre_comptes++] = *cpt;
    printf("Compte ajouté avec succès.\n");
}

// Fonction RPC pour récupérer un compte
compte *get_compte_1_svc(char **nom, struct svc_req *rqstp) {
    for (int i = 0; i < nombre_comptes; i++) {
        if (strcmp(comptes[i].email, *nom) == 0) {
            return &comptes[i];
        }
    }
    return NULL;
}

// Fonction RPC pour ajouter un abonnement
void *add_abonnement_1_svc(abonnement *abo, struct svc_req *rqstp) {
    // Ajout de l'abonnement au tableau d'abonnements
    abonnements[nombre_abonnements++] = *abo;
    printf("Abonnement ajouté avec succès.\n");
}

// Fonction RPC pour supprimer un compte
void *suppr_compte_1_svc(compte *cpt, struct svc_req *rqstp) {
    // Suppression du compte du tableau de comptes
    for (int i = 0; i < nombre_comptes; ++i) {
        if (strcmp(comptes[i].nom, cpt->nom) == 0) {
            // Déplacer tous les comptes suivants vers l'avant pour remplir le trou
            for (int j = i; j < nombre_comptes - 1; ++j) {
                comptes[j] = comptes[j + 1];
            }
            nombre_comptes--;
            printf("Compte supprimé avec succès.\n");
            return;
        }
    }
    printf("Compte non trouvé.\n");
}

// Fonction RPC pour ajouter du solde à un compte
void *add_solde_1_svc(modif_solde *ms, struct svc_req *rqstp) {
    // Recherche du compte dans le tableau de comptes
    for (int i = 0; i < nombre_comptes; ++i) {
        if (strcmp(comptes[i].nom, ms->compte.nom) == 0) {
            // Ajouter le solde
            comptes[i].solde += ms->solde;
            printf("Solde ajouté avec succès.\n");
            return;
        }
    }
    printf("Compte non trouvé.\n");
}

// Fonction RPC pour soustraire du solde à un compte
void *moins_solde_1_svc(modif_solde *ms, struct svc_req *rqstp) {
    // Recherche du compte dans le tableau de comptes
    for (int i = 0; i < nombre_comptes; ++i) {
        if (strcmp(comptes[i].nom, ms->compte.nom) == 0) {
            // Vérifier si le solde est suffisant
            if (comptes[i].solde >= ms->solde) {
                // Soustraire le solde
                comptes[i].solde -= ms->solde;
                printf("Solde soustrait avec succès.\n");
                return;
            } else {
                printf("Solde insuffisant.\n");
                return;
            }
        }
    }
    printf("Compte non trouvé.\n");
}
