package play;

public class Rabbit {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
int n=10;
System.out.println("第"+n+"个月兔子对数为"+fun(n));
	}
private static int fun(int n){
	if(n==1||n==2)
		return 1;
	else
		return fun(n-1)+fun(n-2);
}
}
