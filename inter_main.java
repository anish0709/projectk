interface demo{
	void display();
}

public class inter implements demo {
    public void display()
	{
		System.out.println("You are in interface");
	}
	void display1()
	{
		System.out.println("you are in class");	
	}
}

public class inter_main {
    public static void main(String[] args) {
    	demo a = new inter();
    	a.display();
    	a.display1();
    }
}



