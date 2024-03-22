/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SPLIT_H_RPCGEN
#define _SPLIT_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct compte {
	char *nom;
	char *prenom;
	char *email;
	char *pays;
};
typedef struct compte compte;

struct abonnement {
	char *nom;
	struct compte comptes;
	int prix;
	int max_compte;
};
typedef struct abonnement abonnement;

struct abonnement_compte {
	struct compte compte;
	struct abonnement abonnement;
};
typedef struct abonnement_compte abonnement_compte;

#define ABONNEMENT_PROG 0x23456789
#define ABONNEMENT_VERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define GET_ABONNEMENT 1
extern  abonnement * get_abonnement_1(char **, CLIENT *);
extern  abonnement * get_abonnement_1_svc(char **, struct svc_req *);
#define ADD_COMPTE 2
extern  void * add_compte_1(compte *, CLIENT *);
extern  void * add_compte_1_svc(compte *, struct svc_req *);
#define GET_COMPTE 3
extern  compte * get_compte_1(char **, CLIENT *);
extern  compte * get_compte_1_svc(char **, struct svc_req *);
#define ADD_ABONNEMENT 4
extern  void * add_abonnement_1(abonnement *, CLIENT *);
extern  void * add_abonnement_1_svc(abonnement *, struct svc_req *);
#define ADD_ABONNER 5
extern  void * add_abonner_1(abonnement_compte *, CLIENT *);
extern  void * add_abonner_1_svc(abonnement_compte *, struct svc_req *);
#define suppr_compte 6
extern  void * suppr_compte_1(compte *, CLIENT *);
extern  void * suppr_compte_1_svc(compte *, struct svc_req *);
extern int abonnement_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define GET_ABONNEMENT 1
extern  abonnement * get_abonnement_1();
extern  abonnement * get_abonnement_1_svc();
#define ADD_COMPTE 2
extern  void * add_compte_1();
extern  void * add_compte_1_svc();
#define GET_COMPTE 3
extern  compte * get_compte_1();
extern  compte * get_compte_1_svc();
#define ADD_ABONNEMENT 4
extern  void * add_abonnement_1();
extern  void * add_abonnement_1_svc();
#define ADD_ABONNER 5
extern  void * add_abonner_1();
extern  void * add_abonner_1_svc();
#define suppr_compte 6
extern  void * suppr_compte_1();
extern  void * suppr_compte_1_svc();
extern int abonnement_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_compte (XDR *, compte*);
extern  bool_t xdr_abonnement (XDR *, abonnement*);
extern  bool_t xdr_abonnement_compte (XDR *, abonnement_compte*);

#else /* K&R C */
extern bool_t xdr_compte ();
extern bool_t xdr_abonnement ();
extern bool_t xdr_abonnement_compte ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SPLIT_H_RPCGEN */
