// This is a codechef problem solution.


package CodeChef;

import java.util.*;
import java.io.*;

public class HiringTest {

	/********* SOLUTION STARTS HERE ************/

	private static void solve(FastScanner s1, PrintWriter out) {
		int t = s1.nextInt();
		while(t--!=0) {
			int n = s1.nextInt();
			int m = s1.nextInt();
			int x = s1.nextInt();
			int y = s1.nextInt();
			String arr[] = new String[n];
			for(int i=0; i<n; i++) {
				arr[i] = s1.next();
			}
			for(int i=0; i<n; i++) {
				int countC=0;
				int countP=0;
				for(int j=0; j<m; j++) {
					if(arr[i].charAt(j)=='F') {
						countC++;
					}
					else if(arr[i].charAt(j)=='P') {
						countP++;
					}
					else {
						continue;
					}
				}
				if((countC>=x)||((countC==x-1)&&(countP>=y))){
					System.out.print(1);
				}
				else {
					System.out.print(0);
				}
			}
			System.out.println();
		}

	}

	/************* SOLUTION ENDS HERE **********/

	/********** TEMPLATE STARTS HERE ***********/

	public static void main(String[] args) throws IOException {
		FastScanner in = new FastScanner(System.in);
		PrintWriter out = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)), false);
		solve(in, out);
		in.close();
		out.close();
	}

	static class FastScanner {
		BufferedReader reader;
		StringTokenizer st;

		FastScanner(InputStream stream) {
			reader = new BufferedReader(new InputStreamReader(stream));
			st = null;
		}

		String next() {
			while (st == null || !st.hasMoreTokens()) {
				try {
					String line = reader.readLine();
					if (line == null) {
						return null;
					}
					st = new StringTokenizer(line);
				} catch (Exception e) {
					throw new RuntimeException();
				}
			}
			return st.nextToken();
		}

		String nextLine() {
			String s = null;
			try {
				s = reader.readLine();
			} catch (IOException e) {
				e.printStackTrace();
			}
			return s;
		}

		int nextInt() {
			return Integer.parseInt(next());
		}

		long nextLong() {
			return Long.parseLong(next());
		}

		double nextDouble() {
			return Double.parseDouble(next());
		}

		char nextChar() {
			return next().charAt(0);
		}

		int[] nextIntArray(int n) {
			int[] arr = new int[n];
			int i = 0;
			while (i < n) {
				arr[i++] = nextInt();
			}
			return arr;
		}

		long[] nextLongArray(int n) {
			long[] arr = new long[n];
			int i = 0;
			while (i < n) {
				arr[i++] = nextLong();
			}
			return arr;
		}

		int[] nextIntArrayOneBased(int n) {
			int[] arr = new int[n + 1];
			int i = 1;
			while (i <= n) {
				arr[i++] = nextInt();
			}
			return arr;
		}

		long[] nextLongArrayOneBased(int n) {
			long[] arr = new long[n + 1];
			int i = 1;
			while (i <= n) {
				arr[i++] = nextLong();
			}
			return arr;
		}

		void close() {
			try {
				reader.close();
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
	}

	/*********** TEMPLATE ENDS HERE *************/
}
