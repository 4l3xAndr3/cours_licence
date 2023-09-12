package scol;

public class promotion{
	String nom;
	static final int NBEMAX=100;
	int nbe;
	etudiant[] etudiants;
	
	
	promotion(String nom){
		this.nom=nom;
		this.nbe=0;
		this.etudiants=new etudiant[NBEMAX];
	}
	
	promotion(String nom,etudiant... tabE){
		this(nom);
		for(etudiant e : tabE) 
			this.addE(e);
		
	}
	
	boolean delE(etudiant e) {
		if(e.promo!=this) 
			return false;	
		int i=0;
		while(this.etudiants[i] != e) 
			i++;
		this.etudiants[i]=this.etudiants[this.nbe-1];
		this.nbe--;
		e.promo=null;		
		return true;		
	}
	
	boolean addE(etudiant e) {
		if(e.promo == this || this.nbe == NBEMAX)
			return false;
		if(e.promo != null) 
			e.promo.delE(e);
		
		this.etudiants[this.nbe]=e;
		this.nbe++;
		e.promo=this;
		return true;
	}
	
	double moyennepromo() {
		return etudiant.moyenneG(this.etudiants);
	}
}

