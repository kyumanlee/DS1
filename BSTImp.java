package BSTBasic;

import java.util.*;


public class BSTImp {
	
	public static void preorder( int [][] a, int x) {
		
		if( x == -1) return;
		
		System.out.print( (char) (x + 'A'));
		
		preorder( a, a[x][0]);
		preorder( a, a[x][1]);
		
	}
	
	public static void inorder( int [][] a, int x) {
		
		if ( x == -1) return;
		
		inorder( a, a[x][0]);
		
		System.out.print( (char) (x + 'A'));
		
		inorder( a, a[x][1]);
		
	}
	
	public static void postorder( int [][] a, int x) {
		
		if ( x == -1 ) return ;
		
		postorder( a, a[x][0] );
		postorder( a, a[x][1] );
		
		System.out.print( (char) (x + 'A'));
		
	}

	public static void main ( String args [] ) {
		
		Scanner sc = new Scanner ( System.in );
		
		int n = sc.nextInt();
		
		sc.nextLine();
		
		int [][] a = new int [26][2];
		
		for ( int i = 0 ; i < n ; i++ ) {
			
			String line = sc.nextLine();
			
			int x = line.charAt(0) - 'A';	// �ڵ��� �ƽ�Ű ���� '65' �� ����, 0~25 ������ ��ȯ�Ѵ�. A[i][0], A[i][1]
			
			char y = line.charAt(2);		// A B C  �̷��� �� �� ���� �Է� �Ǹ�, �߰� �� ���ϱ� (���鹮�� ����ؼ� 2, 4 ����)
			
			char z = line.charAt(4);
			
			if ( y == '.') {
				a[x][0] = -1;	// �ڼ��� ���� ��� ǥ�� '.'
			}
			else {
				a[x][0] = y - 'A';
			}
			
			if (z == '.') {
				a[x][1] = -1;
			}
			else {
				a[x][1] = z - 'A';
			}
		}
		
		preorder(a,0);
		System.out.println();
		
		inorder(a,0);
		System.out.println();
		
		postorder(a,0);
		System.out.println();
		
		
		
	}
}
