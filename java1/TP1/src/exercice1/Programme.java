package exercice1;

import java.util.Arrays;

public class Programme {

	/* ----------------------------------------------------------- */
	/* ------------------ Fonctions à compléter ------------------ */
	/* ----------------------------------------------------------- */

	/* ------------------ Exercice 1.1 --------------------------- */

	public static int[] genTab1D(int nbCases) {
		int[] tab = new int[nbCases] ;
		for ( int i =0; i< tab . length ; i ++) {
			tab [i] = (int) (Math.random()*100); 
		}
			
		return tab; // <- TODO résultat à adapter
	}

	public static int[][] genTab2D(int nbl, int nbc) {
		int[][] tab = new int[nbl][];
		for ( int i =0; i< tab . length ; i ++) {
			tab [i] =  genTab1D(nbl);
		}
		
		return tab; // <- TODO résultat à adapter
	}
	
	/* ------------------ Exercice 1.2 --------------------------- */

	public static void swap(int[] tab, int i) {
		int nb;
		
		nb=tab[i];
		tab[i]=tab[i+1];
		tab[i+1]=nb;
	}

	public static void bulle(int[] tab, int n) {
		
			for(int i=0;i<n;i++) {
				
				if (tab[i]>tab[i+1]) {
					swap(tab,i);
			}
		}
	}

	public static void triBulle1D(int[] tab) {
		for(int i=0;i<tab.length-1;i++) {
			bulle(tab,tab.length-1);
		}
	}

	/* ------------------ Exercice 1.3 --------------------------- */

	public static void triBulle2DLignes(int[][] tab) {
		for ( int i =0; i< tab . length ; i ++) {
			int[] tab1d=tab[i];
			triBulle1D(tab1d);
		}
	}

	/* ------------------ Exercice 1.4 --------------------------- */
	public static void swap_C(int[][] tab, int nbl, int nbc) {
		int val;
		val=tab[nbl][nbc];
		tab[nbl][nbc]=tab[nbl+1][nbc];
		tab[nbl+1][nbc]=val;
	}
	
	public static void bulle_C(int[][] tab, int n) {
		
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				if (tab[i][j]>tab[i+1][j]) {
				swap_C(tab,i,j);
			}
		}}
	}

public static void triBulle1D_C(int[] tab) {
	for(int i=0;i<tab.length-1;i++) {
		bulle(tab,tab.length-1);
	}
}
	
	public static void triBulle2DColonnes(int[][] tab) {
		
		swap_C(tab,1,1);
	}
		
	/* ------------------ Exercice 1.5 --------------------------- */

	// TODO fonctions auxiliaires à définir...

	public static void triBulle2DGlobal(int[][] tab) {
		// TODO à compléter...
	}
	
	/* ----------------------------------------------------------- */
	/* -------------- Fonction principale : tests ---------------- */
	/* ----------------------------------------------------------- */
	
	public static void main(String[] args) {
		
		/* ------------------ Exercice 1.1 ------------------------ */

		System.out.println("-- Exercice 1.1 --\n");
		
		int[] tab1Test = genTab1D(5);
		System.out.println("Tableau 1D généré : " + Arrays.toString(tab1Test));

		int[][] tab2Test = genTab2D(3, 5);
		System.out.println("Tableau 2D généré : " + Arrays.deepToString(tab2Test));
		
		/* ------------------ Exercice 1.2 ------------------------ */

		System.out.println("\n-- Exercice 1.2 --\n");
		
		tab1Test = new int[]{ 2, 9, 6, 8, 5, 3, 1, 4, 7 };
		System.out.println("Tableau initial   : " + Arrays.toString(tab1Test));
		
		swap(tab1Test, 2);
		System.out.println("Swap [2] / [3]    : " + Arrays.toString(tab1Test));
		
		bulle(tab1Test, 6);
		System.out.println("Bulle en [6]      : " + Arrays.toString(tab1Test));

		triBulle1D(tab1Test);
		System.out.println("Tableau trié      : " + Arrays.toString(tab1Test));
 
		tab1Test = genTab1D(5);
		System.out.println("Tableau aléatoire : " + Arrays.toString(tab1Test));
		triBulle1D(tab1Test);
		System.out.println("Tableau trié      : " + Arrays.toString(tab1Test));
		
		/* ------------------ Exercice 1.3 ------------------------ */
		
		System.out.println("\n-- Exercice 1.3 --\n");

		tab2Test = new int[][]{ { 1, 9, 2 }, { 7, 5, 8 }, { 3, 6, 4 } };
		System.out.println("Tableau initial   : " + Arrays.deepToString(tab2Test));
		triBulle2DLignes(tab2Test);
		System.out.println("Tri par lignes    : " + Arrays.deepToString(tab2Test));
		
		tab2Test = genTab2D(3, 5);
		System.out.println("Tableau aléatoire : " + Arrays.deepToString(tab2Test));
		triBulle2DLignes(tab2Test);
		System.out.println("Tri par lignes    : " + Arrays.deepToString(tab2Test));
		
		/* ------------------ Exercice 1.4 ------------------------ */
		
		System.out.println("\n-- Exercice 1.4 --\n");

		tab2Test = new int[][]{ { 1, 9, 2 }, { 7, 5, 8 }, { 3, 6, 4 } };
		System.out.println("Tableau initial   : " + Arrays.deepToString(tab2Test));
		triBulle2DColonnes(tab2Test);
		System.out.println("Tri par colonnes  : " + Arrays.deepToString(tab2Test));
		
		tab2Test = genTab2D(3, 5);
		System.out.println("Tableau aléatoire : " + Arrays.deepToString(tab2Test));
		triBulle2DColonnes(tab2Test);
		System.out.println("Tri par colonnes  : " + Arrays.deepToString(tab2Test));
		
		/* ------------------ Exercice 1.5 ------------------------ */
		
		System.out.println("\n-- Exercice 1.5 --\n");

		tab2Test = new int[][]{ { 1, 9, 2 }, { 7, 5, 8 }, { 3, 6, 4 } };
		System.out.println("Tableau initial   : " + Arrays.deepToString(tab2Test));
		triBulle2DGlobal(tab2Test);
		System.out.println("Tri global        : " + Arrays.deepToString(tab2Test));
		
		tab2Test = genTab2D(3, 5);
		System.out.println("Tableau aléatoire : " + Arrays.deepToString(tab2Test));
		triBulle2DGlobal(tab2Test);
		System.out.println("Tri global        : " + Arrays.deepToString(tab2Test));		
	}

}

/*

-- Exercice 1.1 --

Tableau 1D généré : [88, 59, 90, 95, 1]
Tableau 2D généré : [[47, 26, 89, 34, 1], [13, 44, 64, 1, 20], [92, 14, 65, 53, 84]]

-- Exercice 1.2 --

Tableau initial   : [2, 9, 6, 8, 5, 3, 1, 4, 7]
Swap [2] / [3]    : [2, 9, 8, 6, 5, 3, 1, 4, 7]
Bulle en [6]      : [2, 8, 6, 5, 3, 1, 9, 4, 7]
Tableau trié      : [1, 2, 3, 4, 5, 6, 7, 8, 9]
Tableau aléatoire : [54, 99, 17, 54, 87]
Tableau trié      : [17, 54, 54, 87, 99]

-- Exercice 1.3 --

Tableau initial   : [[1, 9, 2], [7, 5, 8], [3, 6, 4]]
Tri par lignes    : [[1, 2, 9], [5, 7, 8], [3, 4, 6]]
Tableau aléatoire : [[44, 94, 1, 61, 12], [67, 47, 30, 30, 6], [5, 93, 18, 7, 15]]
Tri par lignes    : [[1, 12, 44, 61, 94], [6, 30, 30, 47, 67], [5, 7, 15, 18, 93]]

-- Exercice 1.4 --

Tableau initial   : [[1, 9, 2], [7, 5, 8], [3, 6, 4]]
Tri par colonnes  : [[1, 5, 2], [3, 6, 4], [7, 9, 8]]
Tableau aléatoire : [[28, 64, 78, 59, 37], [73, 18, 55, 22, 31], [71, 22, 30, 94, 97]]
Tri par colonnes  : [[28, 18, 30, 22, 31], [71, 22, 55, 59, 37], [73, 64, 78, 94, 97]]

-- Exercice 1.5 --

Tableau initial   : [[1, 9, 2], [7, 5, 8], [3, 6, 4]]
Tri global        : [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
Tableau aléatoire : [[58, 77, 54, 21, 25], [23, 33, 7, 44, 47], [67, 18, 97, 5, 11]]
Tri global        : [[5, 7, 11, 18, 21], [23, 25, 33, 44, 47], [54, 58, 67, 77, 97]]

*/