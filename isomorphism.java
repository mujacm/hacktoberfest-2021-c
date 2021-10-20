import java.io.*;

class isomorphism {
	static final int CHAR = 26;
        static boolean isoMorphic(String str1, String str2)
	{
		int n = str1.length();
		int m = str2.length();

		if (n != m)
			return false;

		
		int[] countChars1 = new int[CHAR];
		int[] countChars2 = new int[CHAR];

		
		for (int i = 0; i < n; i++) {
			countChars1[str1.charAt(i) - 'a']++;
			countChars2[str2.charAt(i) - 'a']++;

			if (countChars1[str1.charAt(i) - 'a']
				!= countChars2[str2.charAt(i) - 'a']) {
				return false;
			}
		}
		return true;
	}
}