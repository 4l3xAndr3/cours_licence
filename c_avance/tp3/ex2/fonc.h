
struct vecteur{
	int nbcomposant;
	double *composant;
};


void afficher_vecteur(const struct vecteur * vec);
void affecter_vecteur(struct vecteur * vec1,const struct vecteur * vec2);