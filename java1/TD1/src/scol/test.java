package scol;

public class test {

	public static void main(String[] args) {
		etudiant e;
		e = new etudiant("einstein", "albert");
		e.addnotes(18.5);
		e.addnotes(4);
		//System.out.println(e.tostring()+ " moyenne : " + e.moyenne());

		
		
		etudiant e2 = new etudiant("dudule", "sophie");
		e2.addnotes(18);
		e2.addnotes(4);
		e2.addnotes(14);
		//System.out.println(e2.tostring()+ " moyenne : " + e2.moyenne());
		
		
		
		
		System.out.println("moyenne general : " + etudiant.moyenneG(e,e2));
		
		promotion L3 =new promotion ("L3 CDA");
		
		etudiant e3 = new etudiant("Einstein", "Brigitte", L3 );
		
		System.out.println(e.tostring() + " promo : " + (e.promo == null ? "null" : e.promo.nom));
		System.out.println(e2.tostring() + " promo : " + (e2.promo == null ? "null" : e2.promo.nom));
		System.out.println(e3.tostring() + " promo : " + (e3.promo == null ? "null" : e3.promo.nom +"\n" ));
		
		
		promotion M1 = new promotion("M1", e, e2);
		 
		System.out.println(e.tostring() + " promo : " + (e.promo == null ? "null" : e.promo.nom));
		System.out.println(e2.tostring() + " promo : " + (e2.promo == null ? "null" : e2.promo.nom));
		System.out.println(e3.tostring() + " promo : " + (e3.promo == null ? "null" : e3.promo.nom));
		
		
		
		
		//System.out.println(L3.etudiants);
		//System.out.println(L3.moyennepromo());
	}

}
