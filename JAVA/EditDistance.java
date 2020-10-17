
/**
 * Edit Distance in Java #72

 * Given two strings str1 and str2 and below operations that can performed on str1. 
 * 		Find minimum number of edits (operations) required to convert ‘str1’ into ‘str2’.
 *
 *  1) Insert
 *  2) Remove
 *  3) Replace
 * 
 * All of the above operations are of equal cost.
 * 
 * 
 * Note - Pass the two strings as command line parameter to test/run this program.
 * 			e.g. java EditDistance sam ram
 * 				 java EditDistance sam ramchandra etc. 
 * 
 * 
 * @author Nilesh-Ghone
 *
 */
public class EditDistance {

	private int numberOfEdits = 0;
	private int insertCount = 0;
	private int removeCount = 0;
	private int replaceCount = 0;
	
	public static void main(String[] args) {
		
		// Ensure the two strings passed as an arguments
		if(args.length >= 2) {
			EditDistance editDistance = new EditDistance();
			int minEdits = editDistance.countEdits(args[0], args[1]);
		} else {
			System.out.println("Please pass two strings to count number of edits (operations) required to convert 'str1' to 'str2'. \n "
					+ "Syntax : java EditDistance <str1> <str2>");
		}
	}
	
	/**
	 * Count number of edits (operations) required to convert ‘str1’ into ‘str2’
	 *    Operations are either of 'Insert', 'Remove', 'Replace'. (All the operations are of equal cost)
	 * 
	 * @param str1 
	 * 				str1 (String 1 - operations/edits performed on this string to convert to String 2)
	 * @param str2 
	 * 				str2 (String 2)
	 * @return Number of Edits required to convert ‘str1’ into ‘str2’
	 */
	public int countEdits(String str1, String str2) {
		
		// Number of character comparisons required for conversion
		int comparisons = (str1.length() < str2.length()) ? str1.length() : str2.length();
		
		// Original str1 before modification - required for log/display purpose later
		String originalStr1 = str1;
		
		char[] str1Array = str1.toCharArray();
		char[] str2Array = str2.toCharArray();
		
		// Compare characters at specified location and replace str1 character with str2 character.
		for (int i=0; i < comparisons; i++) {
			if (str1Array[i] != str2Array[i]) {
				str1Array[i] = str2Array[i];
				numberOfEdits++;
				replaceCount++;
			}
		}
		
		str1 = String.valueOf(str1Array);
		
		if(str1.length() != str2.length()) {
			// if str1 has less chars than str2 -> append/insert extra chars from str2 to str1
			if (str1.length() < str2.length()) {
				str1 = str1.concat(str2.substring(comparisons));
				numberOfEdits++;
				insertCount++;
			} else {
				// if str1 has more chars than str2 -> remove extra chars from str1
				str1 = str1.substring(0, str2.length());
				numberOfEdits++;
				removeCount++;
			}
		}
		
		System.out.println("Converted str1 = " + str1);
		System.out.println("Number of edits (operations) required to convert '" + originalStr1 + "' into '" + str2 + "' = " + numberOfEdits + 
				" [Insert = " + insertCount + ", Remove = " + removeCount + ", Replace = " + replaceCount + "]");
		
		return numberOfEdits;
	}

}
