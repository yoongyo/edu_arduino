#include <Keypad.h>  // Keypad.h 라이브러리를 호출합니다.

String S;    // 키패드 입력받을 변수
String PSWD; // 패스워드

const byte rows = 4;
const byte cols = 4;

// 키패드 버튼 위치 설정
char keys[rows][cols] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};


// 키패드에 연결된 핀번호 설정
byte rowPins[rows] = {6, 7, 8, 9};
byte colPins[cols] = {2, 3, 4, 5};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, rows, cols);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(relay, LOW);
  PSWD = "1234#" ;  // 비밀번호 설정
  char Key = customKeypad.getKey(); //입력받은 키 저장
  
  if(Key){
    S += Key; //Key를 문자열에 저장
  }

  if( Key == '#'){  // '#'이 눌릴경우 비밀번호와 비교하여 이후 동작
    Serial.print("PSWD = ");
    Serial.print(S);
    
    if( S==PSWD ){
       Serial.println("     [ O ]");
       digitalWrite(relay, HIGH);
       delay(100);
    }

    else {
      Serial.println("     [ X ]");
    }
      S = "";  // 다음 동작을 위해 저장값 초기화   
  }
}
