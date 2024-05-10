#include <Wire.h> 
#include <LiquidCrystal.h>
#include <EEPROM.h>
// set the LCD address to 0x20 for a 16 chars and 2 line display
const int buttonPin = 7;
int msgidx;
int nummsg = 0;
char 
const int rs = 11, en = 12, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup()
{
  lcd.begin(16, 2);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}


void printMessage(int index)
{
  msgidx = random(1,nummsg);
  splitMessage(char *message[msgidx], char *line1, char *line2);

  lcd.setCursor(0,0);
  lcd.print(line1);
  lcd.setCursor(0,1);
  lcd.print(line2);
}


void addMessage()
{

}


void loop()
{

lcd.setCursor(0,0);

  if(digitalRead(buttonPin) == HIGH)
  {
    lcd.clear();
    msgidk = random(1,nummsg);
  
  
  /* switch(message) 
    {
      case 1:
      lcd.print("I'm so lucky");
      break;
      
      case 2:
      lcd.print("I miss you");
      break;
      
      case 3:
      lcd.print("I love you!");
      break;
      
      case 4:
      lcd.print("Mwah");
      break;
      
      case 5:
      lcd.print("Mwah mwah mwah");
      lcd.setCursor(0,1);
      lcd.print("mwah mwah mwah");
      break;

      case 6:
      lcd.print("<3<3<3<3<3<3<3<3");
      lcd.setCursor(0,1);
      lcd.print("<3<3<3<3<3<3<3<3");
      break;

      case 7:
      lcd.print("Put me in jail");
      break;

      case 8:
      lcd.print("Text 8850 for");
      lcd.setCursor(0,1);
      lcd.print("spicy pic ;)");
      break;

      case 9:
      lcd.print("Text 1112 for");
      lcd.setCursor(0,1);
      lcd.print("supportive words");
      break;

      case 10:
      lcd.print("You're brilliant");
      break;

      case 11:
      lcd.print("Kiss me rn");
      break;

      case 12:
      lcd.print("I love you");
      lcd.setCursor(0,1);
      lcd.print("         so much");
      break;

      case 13:
      lcd.print("<3    <3    <3");
      lcd.setCursor(0,1);
      lcd.print("   <3    <3");
      break;

      case 14:
      lcd.print("gimme head");
      break;

      case 15:
      lcd.print("You got this!");
      break;

      case 16:
      lcd.print("See you soon <3");
      break;

      case 17:
      lcd.print("Boobs in");
      lcd.setCursor(0,1);
      lcd.print("      my mouth");
      break;

      case 18:
      lcd.print("No, I'm not");
      lcd.setCursor(0,1);
      lcd.print("mad at you");
      break;

      case 19:
      lcd.print("I wish I was in");
      lcd.setCursor(0,1);
      lcd.print("ur bed rn");
      break;

      case 20:
      lcd.print("*three squeezes*");
      break;

      case 21:
      lcd.print("Cunt");
      break;

      case 22:
      lcd.setCursor(0,1);
      lcd.print("       cunt<3");
      break;

      case 23:
      lcd.print("Ur cute");
      break;

      case 24:
      lcd.print("I LOVE YOU");
      break;

      case 25:
      lcd.print("You're beautiful");
      break;

      case 26:
      lcd.print("Brb gotta look");
      lcd.setCursor(0,1);
      lcd.print("at Jackie pics");
      break;

      case 27:
      lcd.print("Bailey <3 Jackie");
      break;

      case 28:
      lcd.print("Wanna snuggle?");
      break;

      case 29:
      lcd.print("Let's cuddle");
      break;

      case 30:
      lcd.print("I want kisses");
      break;

      case 31:
      lcd.print("Text 2323 for");
      lcd.setCursor(0,1);
      lcd.print("KISSES!!!");
      break;

      case 32:
      lcd.print("'I'm sorry'");
      lcd.setCursor(0,1);
      lcd.print("-Bailey 24/7");
      break;

      case 33:
      lcd.print("I'm thinking");
      lcd.setCursor(0,1);
      lcd.print("about uuuuu");
      break;

      case 34:
      lcd.print("u tryna fuq?");
      break;

      case 35:
      lcd.print("You're the");
      lcd.setCursor(0,1);
      lcd.print("cutest <3");
      break;

      case 36:
      lcd.print("Good morning");
      lcd.setCursor(0,1);
      lcd.print("bozo <3");
      break;

      case 37:
      lcd.print("You are my");
      lcd.setCursor(0,1);
      lcd.print("sunshine");
      break;

      case 38:
      lcd.print("OMG");
      lcd.setCursor(0,1);
      lcd.print("UR SO HOT");
      break;

      case 39:
      lcd.print(" <3  ILYSM  <3");
      break;

      case 40:
      lcd.print("You look so");
      lcd.setCursor(0,1);
      lcd.print("good today");
      break;

      case 41:
      lcd.print("I miss u");
      lcd.setCursor(0,1);
      lcd.print("Like really bad");
      break;

      case 42:
      lcd.print("You make me so");
      lcd.setCursor(0,1);
      lcd.print("very very happy");
      break;

      case 43:
      lcd.print("Send me selfies");
      lcd.setCursor(0,1);
      lcd.print("       pls");
      break;
            
      default:
      lcd.clear();
      break;
    }*/
  }
  delay(125);

}
