
struct vecteur{
double x;
double y;
};


double norme(struct vecteur vec);
struct vecteur produit(double lambda, struct vecteur vec);
struct vecteur projectionX(struct vecteur vec);
struct vecteur addition(struct vecteur vec1, struct vecteur vec2);
double produitScalaire(struct vecteur vec1, struct vecteur vec2);