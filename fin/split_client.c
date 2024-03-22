/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "split.h"


void
abonnement_prog_1(char *host)
{
	CLIENT *clnt;
	abonnement  *result_1;
	char * get_abonnement_1_arg;
	void  *result_2;
	compte  add_compte_1_arg;
	compte  *result_3;
	char * get_compte_1_arg;
	void  *result_4;
	abonnement  add_abonnement_1_arg;
	void  *result_5;
	compte  suppr_compte_1_arg;
	void  *result_6;
	modif_solde  add_solde_1_arg;
	void  *result_7;
	modif_solde  moins_solde_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, ABONNEMENT_PROG, ABONNEMENT_VERSION, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
	printf("test");
	add_compte_1_arg.nom="corre";
	add_compte_1_arg.prenom="alex";
	add_compte_1_arg.email="alex.corre@gmail.com";
	add_compte_1_arg.pays="France";
	add_compte_1_arg.solde=10;
	printf("ajout d'un compte");
	result_2 = add_compte_1(&add_compte_1_arg, clnt);
	if (result_2 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}

	add_abonnement_1_arg.nom="netflix";
    add_abonnement_1_arg.comptes=add_compte_1_arg;
    add_abonnement_1_arg.prix=10;         
    add_abonnement_1_arg.max_compte=3;  
	printf("ajout d'un abonnement");
	result_4 = add_abonnement_1(&add_abonnement_1_arg, clnt);
	if (result_4 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}

	printf("recuperation d'un abonnement");
	result_1 = get_abonnement_1(&get_abonnement_1_arg, clnt);
	if (result_1 == (abonnement *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
		printf("resultat :netflix = %d\n", result_1);
	}


	get_compte_1_arg="alex.corre@gmail.com";
	printf("recuperation d'un compte");
	result_3 = get_compte_1(&get_compte_1_arg, clnt);
	if (result_3 == (compte *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
		printf("resultat :alex.corre@gmail.com = %d\n", result_3);
	}


	printf("suppresion d'un compte");
	result_5 = suppr_compte_1(&suppr_compte_1_arg, clnt);
	if (result_5 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}

	add_solde_1_arg.compte=add_compte_1_arg;
	add_solde_1_arg.solde=10;
	printf("ajout de 10 dans le solde du compte");
	result_6 = add_solde_1(&add_solde_1_arg, clnt);
	if (result_6 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	printf("resultat : 20 = %d\n", result_6);

	moins_solde_1_arg.compte=add_compte_1_arg;
	moins_solde_1_arg.solde=10;
	printf("soustraction de 10 dans le solde du compte");
	result_7 = moins_solde_1(&moins_solde_1_arg, clnt);
	if (result_7 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	printf("resultat : 10 = %d\n", result_7);
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	abonnemenat_prog_1 (host);
exit (0);
}