#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 13, 7, 6, 5, 4); 
long randNumber;


void setup()
{
  lcd.begin(16, 2);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}


void loop()
{
  lcd.clear();                    //Limpa a tela antes do uso;             
  lcd.setCursor(2, 0);            //2 = 2 colunas para a direita. 0 = Primeira linha;
  lcd.print("Display LCD");       //Imprime um texto
  lcd.setCursor(2, 1);            //2 = 2 colunas para a direita. 1 = Segunda linha;
  lcd.print("Pinga Carai!");
  
  delay(5000);              
  
  lcd.clear(); 
  lcd.setCursor(3, 0);
  lcd.print("Math Game!");  
  
  delay(5000);
  for (int i = 0; i < 11; i++){
  lcd.clear(); 
  randNumber = random(0, 11);
  Serial.println(randNumber);
  lcd.setCursor(7, 0);
  lcd.print(randNumber); 
  
  delay(3000);
  }
}
