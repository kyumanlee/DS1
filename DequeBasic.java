package DequeImp;

import java.util.*;


public class DequeBasic {
	public static void main (String args []) {
		
		Scanner sc = new Scanner ( System.in );
		int n = sc.nextInt();			
		sc.nextLine();
		
		ArrayDeque<Integer> queue = new ArrayDeque<Integer> ();		// Collection 공부 !!!
		
		for ( int k = 0; k < n; k++ ) {
			
			String line = sc.nextLine();
			String [] s = line.split(" ");		//String 클래스의 공백 문자를 구분해서 s[] 배열로 저장하기
			String cmd = s[0];					// s[0] 은 당연히 명령어 겠죠?
			
			if ( cmd.equals("push_front")) { 	//String 클래스의 메소드.. equal. 이클리스에서는 명령어가 쭉? 뜨죠?
			
				int num = Integer.parseInt(s[1]);	// String 으로 받은 argument 를 interger parse 해주는 것, 이정도느 이제.
		
				queue.offerFirst(num);			// ArrayDeque 메소드가 쭈욱..뜨죠???
				
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
