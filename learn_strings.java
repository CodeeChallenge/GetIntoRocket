class learn_strings{
	public static void main(String[] args) {
		String s1 = "hlo ayush"; //string literal

		String s2 = new String("Hlo"); //s2 string object

		String s3 = s2 + s1; //concat string.
		System.out.println("s3 string = " + s3);
		
		//2nd methord for concat
		System.out.println(s1.concat(s2));
		
		//check if 2 strings are equal.	
		if(s1.equals(s2)){
			System.out.println("Match Found\n");
		}
		else{
			System.out.println("Not Found");
		}
		
		//compare by ignoring case
		if(s1.equalsIgnoreCase(s2)){
			System.out.println("Match Found\n");
		}
		else{
			System.out.println("Not Found");
		}
		//find the index of sub string
		System.out.println("Index at = " + s1.indexOf("l"));
		
		//find the index from last of substring.
		System.out.println("ayushkapri".lastIndexOf("a"));

		//Find the character at specific index
		System.out.println(s1.charAt(2));

		//extract substring 
		String s4 = s1.substring(0,5);
		System.out.println("s4 string is - " + s4);
		
		//to upper and lower string char
		System.out.println("Upper - " + s1.toUpperCase() + " Lower - " + s1.toLowerCase());
		
		//remove extra white space from front and back
		System.out.println("   trim me  ".trim());
	
		//split string into multiple ..
		String example = "Ayush Kapri will do it the best. Ayush let\'s rock the world.";
		String[] sSplit = example.split("\\s");

		//replace all string char(s) to something diff.
		System.out.println(example.replace("Ayush","Genius"));
		
		//
		System.out.println(example.replaceAll("Ayush","Genius"));
		
		//if string starts/ends with a certain word.
		System.out.println(s1.startsWith("A"));
		System.out.println(s1.endsWith("."));
		 
	}
}