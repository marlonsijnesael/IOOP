class Functions {
public :
	void reverse() {
		std::reverse(text.begin(), text.end());
		{
			std::ofstream file("..\\reversed.txt");
			file << text;
		}
	}

}