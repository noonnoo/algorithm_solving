## 객체 지향 프로그래밍
* 프로그래밍 패러다임 중 하나로, 프로그램을 명령어 중심 사고에서 벗어나 객체(사물의 특징)을 중심으로 사고하고 파악하고자 하는 패러다임.  
* 현실의 사물을 바라보듯 객체의 특성을 프로그래밍화 하는 방법

#### 장점
* 재사용성 높은 코드: 자주 사용되는 로직을 객체로 만들어 두면 재사용에 용이하다.
* 중복 소스 관리: 객체 특성을 뽑아와 코드로 작성하기 때문에 중복 코드를 줄일 수 있다.
* 유지보수 용이: 객체 단위이기 때문에 디버깅/유지보수하기 용이하다.

#### 단점
* 객체간의 정보 교환은 메시지 교환 방식으로 이루어지기 때문에 Overhead가 많이 발생한다.
* 객체가 상태를 가진다. --> 변수가 존재할 때, 객체가 예측할 수 없는 상태를 갖게 되어 애플리케이션 내부에 버그가 생길 수 있다.
* 상속 받는 객체가 부모와 IS-A 관계가 성립되어야 하는데 그렇지 않고 오용되는 경우.
  
## 객체 지향적 설계 원칙 (SOLID)
#### SRP (Single Responsibility Principle): 단일 책임 원칙
클래스는 단하나의 책임을 가져야 하며, 클래스를 변경하는 이유는 단하나의 이유여야 한다.

#### OCP (Open-Closed Principle): 개방-폐쇄 원칙
확장에는 열려있어야 하고, 수정에는 폐쇄적이어야 한다.

#### LSP (Liskov Substitution Principle): 리스코프 치환 원칙
B가 A의 자식이면(A가 B의 상위 클래스라면), A를 B로 치환해도 작동에 문제가 없어야 한다.  

#### ISP (Interface Segregation Principle): 인터페이스 분리 원칙
인터페이스는 그 인터페이스를 사용하는 클라이언트 기준으로 분리해야 한다.

#### DIP (Dependency Inversion Principle): 의존 역전 법칙
고수준의 모듈은 저수준의 모듈의 구현에 의존해서는 안된다.
  
## OOP 4가지 특징
#### 1. 캡슐화
* 실제 구현되는 부분이 외부에 드러나지 않도록 하는 것
* 변수와 함수(메서드)를 하나로 묶어 클래스로 만드는 것
* 접근지정자 (자세한 설명: [Luyin님 블로그](https://luyin.tistory.com/232))
  * public: 클래스 외부에서 접근 가능
  * private: 자신 클래스 내부에서만 접근 가능
  * protected: 동일 패키지, 상속받은 자식 클래스만 접근 가능
  * default: 기본제한자. 동일 패키지와 자신 클래스 내부 내에서만 접근 가능.    
#### 2. 상속
* 자식 클래스가 부모 클래스의 특성과 기능을 물려받는 것
* 상속을 통해 중복되는 코드를 줄일 수 있음
* 상속의 단점
  * 상위클래스 변경의 어려움 - 클래스간의 의존도가 생기면서 수정/변경이 어려움
  * 클래스의 불필요한 증가 - 비슷한 기능의 클래스 개수가 불필요하게 늘어날 수 있음
  * 상속의 오용 - 같은 종류가 아닌데 구현을 재사용하기 위해 상속을 잘못 받는 경우  
#### 3. 추상화
* 인터페이스로 클래스들의 공통적 특성을 묶어 표현하는 것
* 복잡한 구현보다 목적에 집중할 수 있게 하는 것
#### 4. 다형성
* 동일한 요청에 다른 방식으로 응답할 수 있도록 구현할 수 있음
  * Overriding(오버라이딩): 상속받은 자식 클래스에서 동일한 메서드 재정의
  * Overloading(오버로딩): 동일한 메소드가 변수 타입, 개수 차이에 따라 중복 정의
  
### 참고 문서 링크  
* [주니어 개발자의 끄적임 블로그 - OOP 5원칙과 4가지 특성](https://velog.io/@ygh7687/OOP%EC%9D%98-5%EC%9B%90%EC%B9%99%EA%B3%BC-4%EA%B0%80%EC%A7%80-%ED%8A%B9%EC%84%B1)  
* [Ssabae.log님의 블로그](https://velog.io/@lsb156/%EA%B0%9D%EC%B2%B4%EC%A7%80%ED%96%A5-%EA%B0%9C%EB%B0%9C-5%EB%8C%80-%EC%9B%90%EC%B9%99-SOLID)  
* [개발하는 피자 양목장님의 블로그](https://pizzasheepsdev.tistory.com/9)
