package exercice2;

import java.util.Arrays;
import static exercice1.Programme.genTab2D;

public class Programme {

	/* ----------------------------------------------------------- */
	/* ------------------ Fonctions à compléter ------------------ */
	/* ----------------------------------------------------------- */

	public static int[][] transpose(int[][] tab) {
		// TODO à compléter...
		return null; // <- TODO résultat à adapter
	}

	/* ----------------------------------------------------------- */
	/* -------------- Fonction principale : tests ---------------- */
	/* ----------------------------------------------------------- */

	public static void main(String[] args) {
		
		int[][] tab2Test = { { 1, 2, 3 }, { 4, 5, 6 } };
		System.out.println("Tableau initial   : " + Arrays.deepToString(tab2Test));
		tab2Test = transpose(tab2Test);
		System.out.println("Tableau transposé : " + Arrays.deepToString(tab2Test));
		
		tab2Test = genTab2D(3, 5);
		System.out.println("Tableau aléatoire : " + Arrays.deepToString(tab2Test));
		tab2Test = transpose(tab2Test);
		System.out.println("Tableau transposé : " + Arrays.deepToString(tab2Test));
	}

}

/*

Tableau initial   : [[1, 2, 3], [4, 5, 6]]
Tableau transposé : [[1, 4], [2, 5], [3, 6]]
Tableau aléatoire : [[86, 51, 63, 8, 97], [29, 78, 85, 4, 49], [60, 45, 3, 24, 73]]
Tableau transposé : [[86, 29, 60], [51, 78, 45], [63, 85, 3], [8, 4, 24], [97, 49, 73]]

*/
