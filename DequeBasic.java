package DequeImp;

import java.util.*;


public class DequeBasic {
	public static void main (String args []) {
		
		Scanner sc = new Scanner ( System.in );
		int n = sc.nextInt();			
		sc.nextLine();
		
		ArrayDeque<Integer> queue = new ArrayDeque<Integer> ();		// Collection ���� !!!
		
		for ( int k = 0; k < n; k++ ) {
			
			String line = sc.nextLine();
			String [] s = line.split(" ");		//String Ŭ������ ���� ���ڸ� �����ؼ� s[] �迭�� �����ϱ�
			String cmd = s[0];					// s[0] �� �翬�� ��ɾ� ����?
			
			if ( cmd.equals("push_front")) { 	//String Ŭ������ �޼ҵ�.. equal. ��Ŭ���������� ��ɾ ��? ����?
			
				int num = Integer.parseInt(s[1]);	// String ���� ���� argument �� interger parse ���ִ� ��, �������� ����.
		
				queue.offerFirst(num);			// ArrayDeque �޼ҵ尡 �޿�..����???
				
			}
			else if ( cmd.equals("push_back")) {
				int num = Integer.parseInt(s[1]);
				queue.offerLast(num);
			}
			else if ( cmd.equals("front")) {
				if ( queue.isEmpty()) {
					System.out.println("-1");
				} 
				else System.out.println(queue.peekFirst());
			}
			else if ( cmd.equals("back")) {
				if ( queue.isEmpty()) System.out.println("-1");
				else System.out.println(queue.peekLast());
			}
			else if ( cmd.equals("size")) {
				System.out.println(queue.size());
			}
			else if ( cmd.equals("empty")) {
				if ( queue.isEmpty()) System.out.println("1");
				else System.out.println("0");
			}
			else if ( cmd.equals("pop_front")) {
				if ( queue.isEmpty()) System.out.println("-1");
				else System.out.println(queue.pollFirst());
			}
			else if ( cmd.equals("pop_back")) {
				if ( queue.isEmpty()) System.out.println("-1");
				else System.out.println(queue.pollLast());
			}
		}
	}

}
