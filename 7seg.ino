  #define A 6
  #define B 5
  #define C 4
  #define D 3
  #define E 2
  #define F 1
  #define G 0
  int pins [] = {A, B, C, D, E, F, G};
  int num0 [] = {1, 1, 1, 1, 1, 1, 0};
  int num1 [] = {0, 1, 1, 0, 0, 0, 0};
  int num2 [] = {1, 1, 0, 1, 1, 0, 1};
  int num3 [] = {1, 1, 1, 1, 0, 0, 1};
  int num4 [] = {0, 1, 1, 0, 0, 1, 1};
  int num5 [] = {1, 0, 1, 1, 0, 1, 1};
  int num6 [] = {1, 0, 1, 1, 1, 1, 1};
  int num7 [] = {1, 1, 1, 0, 0, 0, 0};
  int num8 [] = {1, 1, 1, 1, 1, 1, 1};
  int num9 [] = {1, 1, 1, 1, 0, 1, 1};
  const int* DATA[] = { num0, num1, num2, num3, num4, num5, num6, num7, num8, num9 };
  void setup(){
    for(int i = 0; i < 7; i++)
    {
      pinMode(pins[i],OUTPUT);
    }
  }
  
void loop()
{
 for(int d = 0; d < 10; d++)
 {
  for(int i = 0; i < 7; i++)
  {
    digitalWrite(pins[i],DATA[d][i]);
  }
  delay(500);
 }
}

