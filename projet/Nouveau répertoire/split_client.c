/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "split.h"


void
abonnement_prog_1(char *host)
{
	compte *Compte;
	abonnement  *Abonnement;
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
	abonnement_compte  add_abonner_1_arg;
	void  *result_6;
	compte  suppr_compte_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, ABONNEMENT_PROG, ABONNEMENT_VERSION, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	Compte->nom="corre";
	Compte->prenom="alex";
	Compte->email="alex.corre@gmail.com";
	Compte->pays="France";
	printf("ajout d'un compte");
	result_2 = add_compte_1(&add_compte_1_arg, clnt);
	if (result_2 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}

	Abonnement->nom="netflix";
    Abonnement->comptes=Compte;
    Abonnement->prix=10;         
    Abonnement->max_compte=3;  
	printf("ajout d'un abonnement");
	result_4 = add_abonnement_1(&add_abonnement_1_arg, clnt);
	if (result_4 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	get_abonnement_1_arg = "netflix";
	result_1 = get_abonnement_1(&get_abonnement_1_arg, clnt);
	if (result_1 == (abonnement *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
		printf("resultat :netflix = %d\n", result_1);
	}


	get_compte_1_arg="alex.corre@gmail.com";
	result_3 = get_compte_1(&get_compte_1_arg, clnt);
	if (result_3 == (compte *) NULL) {
		clnt_perror (clnt, "call failed");
	}else{
		printf("resultat :alex.corre@gmail.com = %d\n", result_3);
	}
	
	abonnement_compte.compte =compte;
	result_5 = add_abonner_1(&add_abonner_1_arg, clnt);
	if (result_5 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}

	suppr_compte_1(&suppr_compte_1_arg, clnt);
	result_6 = get_compte_1_arg;
	if (result_6 == (void *) NULL) {
		printf("resultat :null = %d\n",result_6);
	}
	
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
	abonnement_prog_1 (host);
exit (0);
}
