package scol;

public class etudiant {
	String nom;
	String prenom;
	static final int NBNMAX = 5;
	int nbn;
	double[] notes;
	promotion promo;
	
	
	etudiant(String nom,String prenom){
		this.nom =nom;
		this.prenom =prenom;
		this.nbn=0;
		this.notes = new double[NBNMAX];
		this.promo=null;
	}
	etudiant(String nom,String prenom,promotion promo){
		this.nom =nom;
		this.prenom =prenom;
		this.nbn=0;
		this.notes = new double[NBNMAX];
		promo.addE(this);
	}
	

	public String tostring() {
		String result;
		result =this.nom.toUpperCase() + " ";
		result +=this.prenom.toUpperCase() + " : ";
		for(int i=0;i<this.nbn;i++) {
		result +=this.notes[i] + " ";
		}
		
		return result;
	}
	
	boolean addnotes(double notes){
		if (this.nbn != etudiant.NBNMAX ) {
			this.notes[nbn]=notes;
			this.nbn++;
			return true;
		}else {
			return false;
		}
	}
	
	double moyenne() {
		if (this.nbn==0) {
			return 0;
		}
		double result = 0;
		for(int i=0;i<this.nbn;i++) {
			result +=this.notes[i];
		}
		result/=this.nbn;
		return result;
	}
	
	static double moyenneG(etudiant... tab) {
		if (tab.length==0) {
			return 0;
		}
		double result = 0;
		for(int i=0;i<tab.length;i++) {
			result +=tab[i].moyenne();
		}
		result/=tab.length;
		return result;
	}
}














