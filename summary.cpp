복사생성자	: 기본생성자로 생성후 일일히 카피
복사대입연산자	: 복사생성자로 임시클래스 생성후 swap
이동생성자	: 기본생성자로 생성후 swap
이동대입연산자	: 이동생성자로 임시클래스 생성후 swap

nested namespace								- p58
literal(값자체가 이름)								- p59
fallthrough									- p71
structured binding								- p81
initializer list								- p83
생성자 이니셜라이져								- p103
literal pooling									- p130
raw literal string								- p131
using namespace std::string_literals						- p136
string_view									- p141
std::size(ar) -> 배열의 크기 리턴						- p281
MVC(model - view - controller)							- p201
vector []과 at()의 차이 -> 경계값 검사 						- p247
decltype()									- p293
smart pointer는 복사할수없다 -> 이동해야한다					- p293
weak_ptr									- p297
enable_shared_from_this								- p299
dangling pointer								- p307
#include "stdafx.h"								- p316
SheetCell cells[3] (cells의 전체메모리확보 & 각원소마다 디폴트생성자 호출)	- p327
	-> STL 컨테이너에 class 저장하려면 반드시 디폴트생성자 정의해야함
most vexing parse								- p328
explicit default constructor 							- p330
explicit deleted constructor							- p331
	-> static method로만 구성된 클래스는 디폴드생성자를 만들면 안됨
delegating construtor								- p341
copy constructor & copy assignment constructor					- p348
RVO(return value optimization) or copy elision					- p350
copy and swap									- p366
std::move() (lvalue -> rvalue)							- p370
rule of five (소멸자,복제생성자,이동생성자,복제대입연산자,이동대입연산자)	- p374
Big 3 rule (동적메모리 사용할 경우 : 소멸자,복제생성자,복제대입연산자는 반드시)
rule of zero (컨테이너 사용)							- p378
mutable										- p382
const base overloading								- p383
std::as_const()									- p384
LTCG(link time code generation)							- p387
default argument								- p388
static inline member variable							- p390
static const member variable							- p392
forward declaration								- p394
explicit									- p402
epsilon test									- p407
private implementation idiom, bridge pattern					- p409
클래스에 final (상속방지)							- p421	
slicing (파생클래스의 멤버변수나 오버라이딩된 메서드가 삭제됨)			- p426
static binding, early binding (컴파일타임)					- p429
dynamic binding, late binding (런타임)						- p430
virtual 메서드는 vtable 참조 							- p430
소멸자는 무조건 virtual (상속될때 문제생길수 있음)				- p433
사용자선언 소멸자가 있을때 복제생성자, 복제대입연산자 자동생성X	
	-> 복제생성자,복제대입연산자를 default로 선언해주면됨			- p434 
소멸자 = default; -> 복제생성자, 복제대입연산자 자동생성			- p434 
메서드에 final(override 방지)							- p434
pure virtual method, abstract class						- p451		
std::optional<string> val, val.value_or("")					- p452
using Base::Base -> 부모의 생성자 모두 상속(Base()는 제외)			- p470
default 인수는 컴파일 타임에 결정						- p483
symbolic constant -> const double PI = 3.14, #define PI (3.14)			- p483
파생클래스에서 복제생성자를 명시적으로 정의하면 
	-> 부모클래스의  복제생성자를 호출해야함				- p486
RTTI(run time type information)							- p488
구조적 바인딩									- p508
anonymous namespace								- p517
타입 엘리어스 (using IntPtr = int*)						- p521
auto -> 레퍼런스, const 속성을 제거함						- p530
attribute : noreturn, deprecated, fallthrough, nodiscard, maybe_unused		- p537
사용자 정의 리터럴								- p541
순환의존관계 -> 전방 선언 							- p545
_has_include("파일명") 								- p546
Grid<T> 에서 Grid는 템플릿이름, Grid<T>는 클래스를 지칭,
	Grid<int>는 템플릿을 인스턴스화한 이름					- p563
템플릿을 정의할때는 반드시 메서드 구현코드를 헤더파일에 적어야한다 		- p563
영 초기화 문법									- p564
영 초기화 문법									- p564
selective instantiation								- p568
explicit class template instantiation						- p568

terminate(), set_terminate()							- p653
exception 객체는 최소 한번 이상 이동하거나 복제된다 				- p653
	-> 그래서 복제생성, 복제대입, 이동생성, 이동대입을 고려해야한다



