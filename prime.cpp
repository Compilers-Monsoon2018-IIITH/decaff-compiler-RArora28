class Program {
	int main() {
		int x; 
		x = read(); 
		bool prime = true; 
		for(i = 2, x + 1) {
			int product; 
			product = i * i; 
			if (product <= x) {
				if (x % i == 0) {
					prime = true; 
				}
			}
		}
		if (prime) {
			callout("printf", "Prime"); 
		} else {
			callout("printf", "Composite");
		}
		return 0; 
	}
}