class Mndnc {
	// Simple Divide-and-Conquer Matrix Multiplication
	public static int[][] DivideAndConquer(int[][] A, int[][] B, int n) {
		int[][] C = new int[n][n];
		
		if (n == 1) {
			C[0][0] = A[0][0] * B[0][0];
		} else {
			
			int[][] A11 = partitionMatrix(A, 0, n/2, 0, n/2);
			int[][] A12 = partitionMatrix(A, 0, n/2, n/2, n);
			int[][] A21 = partitionMatrix(A, n/2, n, 0, n/2);
			int[][] A22 = partitionMatrix(A, n/2, n, n/2, n);
			
			int[][] B11 = partitionMatrix(B, 0, n/2, 0, n/2);
			int[][] B12 = partitionMatrix(B, 0, n/2, n/2, n);
			int[][] B21 = partitionMatrix(B, n/2, n, 0, n/2);
			int[][] B22 = partitionMatrix(B, n/2, n, n/2, n);	
			
			int[][] C11 = addMatrix(DivideAndConquer(A11, B11, n/2), DivideAndConquer(A12, B21, n/2));
			int[][] C12 = addMatrix(DivideAndConquer(A11, B12, n/2), DivideAndConquer(A12, B22, n/2));
			int[][] C21 = addMatrix(DivideAndConquer(A21, B11, n/2), DivideAndConquer(A22, B21, n/2));
			int[][] C22 = addMatrix(DivideAndConquer(A21, B12, n/2), DivideAndConquer(A22, B22, n/2));
			
			C = combineMatrix(C11, C12, C21,C22);
		}
		
		return C;
	}

		
	// Combine Sub-Matrices
	public static int[][] combineMatrix(int[][] C11, int[][] C12, int[][] C21, int[][] C22) {
		int n = C11.length;
		int[][] C = new int[n*2][n*2];
		
		for (int i = 0 ; i < n ; i++) {
			for (int j = 0 ; j < n ; j++) {
				C[i][j] = C11[i][j];
				C[i][j + n] = C12[i][j];
				C[i + n][j] = C21[i][j];
				C[i + n][j + n] = C22[i][j];
			}
		}
		
		return C;
	}

	// Split and Copy Matrices 
	public static int[][] partitionMatrix(int[][] matrix, int rLow, int rHigh, int cLow, int cHigh) {
		int[][] partitionedMatrix = new int[rHigh - rLow][cHigh - cLow];
		
		for (int i = 0, n = rLow ; n < rHigh ; i++, n++) {
			for (int j = 0, m = cLow ; m < cHigh ; j++, m++) {
				partitionedMatrix[i][j] = matrix[n][m];
			}
		}
		
		return partitionedMatrix;
	}
	
	// Matrix Addition
	public static int[][] addMatrix(int[][] A, int[][] B) {
		int[][] C = new int[A.length][B.length];
		
		for (int i = 0 ; i < A.length ; i++) {
			for (int j = 0 ; j < A[i].length ; j++) {
				C[i][j] = A[i][j] + B[i][j];
			}
		}
		
		return C;
	}
	
	
	// Print Matrix
	public static void printMatrix(int[][] arr) {
		for (int[] i : arr) {
			for (int j : i) {
				System.out.printf("%3d ", j);
			}
			System.out.println();
		}
		System.out.println();
	}

	// Main
	public static void main(String[] args) {
		int[][] A = {{1, 2}, 
					 {3, 4}};

		int[][] B = {{1, 0}, 
					 {0, 1}};

		int[][] C = {{1, 2, 3, 4},
					 {5, 6, 7, 8},
					 {9, 10, 11, 12},
					 {13, 14, 15, 16}};
		
		// Identity Matrix
		int[][] I = {{1, 0, 0, 0}, 		
					 {0, 1, 0, 0},
					 {0, 0, 1, 0},
					 {0, 0, 0, 1}};
		
		// 2-by-2 test run
		System.out.println("Matrix A: ");
		printMatrix(A);
		System.out.println("Matrix B: ");
		printMatrix(B);
		
		System.out.println("AB by Simple Divide-and-Conquer: ");
		printMatrix(DivideAndConquer(A, B, A.length));

		// 4-by-4 test run
		System.out.println("Matrix C: ");
		printMatrix(C);
		System.out.println("Matrix I: ");
		printMatrix(I);
		
		System.out.println("CI by Simple Divide-and-Conquer: ");
		printMatrix(DivideAndConquer(C, I, C.length));

	}
}