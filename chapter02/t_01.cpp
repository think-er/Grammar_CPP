//// A회사와 B회사가 같이 프로젝트를 진행하고 있다고 가정
//// A회사에서 MySum 이라는 함수를 사용하고 있다고 가정
//// 그런데 B회사와의 사전협의가 진행되지 않아 B회사도 MySum 이라는 동일한 함수를 정의할 수도 있음 -> 컴파일 오류
//// 중복되는 함수나 변수의 이름을 모두 변경하는 해결책 -> 비효율적이며 근본적인 해결책이 되지 못함
//#include <iostream>
//
//int result = 30;
//
//namespace sec_a {
//	void print_result(int val) {
//		std::cout << val << std::endl;
//	}
//}
//
//namespace sec_b {
//	void print_result(int val) {
//		std::cout << val + 30 << std::endl;
//	}
//}
//
//int main(void)
//{
//	//print_result 함수 호출
//	sec_a::print_result(result); //sec_a라는 이름 공간에 있는 print_result를 호출
//	sec_b::print_result(result); //sec_b라는 이름 공간에 있는 print_result를 호출
//
//	return 0;
//}