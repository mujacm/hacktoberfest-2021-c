class pangram 
{
	public static boolean checkPangram(String str)
	{
		boolean[] mark = new boolean[26];
		int index = 0;
		for (int i = 0; i < str.length(); i++) {
			if ('A' <= str.charAt(i) && str.charAt(i) <= 'Z')
				index = str.charAt(i) - 'A';
			else if ('a' <= str.charAt(i) && str.charAt(i) <= 'z')
				index = str.charAt(i) - 'a';
			else
				continue;
			mark[index] = true;
		}
		for (int i = 0; i <= 25; i++)
			if (mark[i] == false)
				return (false);
		return (true);
	}

} 


