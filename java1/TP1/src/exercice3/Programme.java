package exercice3;

public class Programme {

	/* ----------------------------------------------------------- */
	/* ------------------ Fonctions à compléter ------------------ */
	/* ----------------------------------------------------------- */

	/* ------------------ Exercice 3.1 --------------------------- */

	public static int estCarre(int[][] tab) {
		// TODO à compléter...
		return -1; // <- TODO résultat à adapter
	}

	/* ------------------ Exercice 3.2 --------------------------- */

	public static int somL(int[][] tab, int i) {
		// TODO à compléter...
		return -1; // <- TODO résultat à adapter
	}

	public static int somC(int[][] tab, int j) {
		// TODO à compléter...
		return -1; // <- TODO résultat à adapter
	}

	public static int somD1(int[][] tab) {
		// TODO à compléter...
		return -1; // <- TODO résultat à adapter
	}

	public static int somD2(int[][] tab) {
		// TODO à compléter...
		return -1; // <- TODO résultat à adapter
	}
		
	public static int estCarreMagique(int[][] tab) {
		// TODO à compléter...
		return estCarre(tab); // <- TODO résultat à adapter
	}

	/* ------------------ Exercice 3.3 --------------------------- */

	public static int estCarreMagiqueNormal(int[][] tab) {
		// TODO à compléter...
		return estCarreMagique(tab); // <- TODO résultat à adapter
	}
	
	/* ----------------------------------------------------------- */
	/* ------- Fonction auxiliaire des tests : affichage --------- */
	/* ----------------------------------------------------------- */

	public static void carreMagique(int[][] tab) {
		for (int[] ligne : tab) {
			for (int v : ligne) System.out.print(v + " ");
			System.out.println();
		}
		switch (estCarreMagiqueNormal(tab)) {
		case 0:   System.out.println("-> pas carré...");         break;
		case 1:   System.out.println("-> carré");                break;
		case 2:   System.out.println("-> carré magique");        break;
		case 3:   System.out.println("-> carré magique normal"); break;
		default : System.out.println("-> ???");
		}
	}
	
	/* ----------------------------------------------------------- */
	/* -------------- Fonction principale : tests ---------------- */
	/* ----------------------------------------------------------- */

	public static void main(String[] args) {

		/* ------------------ Exercice 3.1 ------------------------ */

		System.out.println("-- Exercice 3.1 --\n");
		
		carreMagique(new int[][] { { 11, 20, 38, 47 }, { 56, 65, 74, 83 } });
		System.out.println();

		carreMagique(new int[][] { { 11, 20, 29 }, { 38, 47, 56 }, { 65, 74, 83 } });
		System.out.println();

		/* ------------------ Exercice 3.2 ------------------------ */

		System.out.println("\n-- Exercice 3.2 --\n");

		carreMagique(new int[][] { { 20, 65, 56 }, { 83, 47, 11 }, { 38, 29, 74 } });
		System.out.println();

		/* ------------------ Exercice 3.3 ------------------------ */

		System.out.println("\n-- Exercice 3.3 --\n");

		carreMagique(new int[][] { { 2, 7, 6 }, { 9, 5, 1 }, { 4, 3, 8 } });
		System.out.println();

		carreMagique(new int[][] { { 4, 14, 15, 1 }, { 9, 7, 6, 12 }, { 5, 11, 10, 8 }, { 16, 2, 3, 13 } });
		System.out.println();
	}

}

/*

-- Exercice 3.1 --

11 20 38 47 
56 65 74 83 
-> pas carré...

11 20 29 
38 47 56 
65 74 83 
-> carré


-- Exercice 3.2 --

20 65 56 
83 47 11 
38 29 74 
-> carré magique


-- Exercice 3.3 --

2 7 6 
9 5 1 
4 3 8 
-> carré magique normal

4 14 15 1 
9 7 6 12 
5 11 10 8 
16 2 3 13 
-> carré magique normal

*/
