//#include <iostream>
//
//class Fraction {
//private:
//	int m_numerator; // 분자
//	int m_denominator; // 분모
//public:
//	Fraction() {
//		m_numerator = 0;
//		m_denominator = 1;
//	}
//	int getNumerator() { return m_numerator; }
//	int getDenominator() { return m_denominator; }
//	double getValue() { return static_cast<double>(m_numerator) / m_denominator; }
//};
//
//int main()
//{
//	Fraction frac; // Since no arguments, calls Fraction() default constructor
//	std::cout << frac.getNumerator() << "/" << frac.getDenominator() << '\n';
//	// Output: 0/1
//	return 0;
//}