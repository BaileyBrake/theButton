#include <Wire.h> 
#include <LiquidCrystal.h>
#include <EEPROM.h>
#include <string.h>
// set the LCD address to 0x20 for a 16 chars and 2 line display
#DEFINE MSGLENGTH 33
#DEFINE MSGCOUNT 60
const int buttonPin = 7
const int rs = 11, en = 12, d4 = 2, d5 = 3, d6 = 4, d7 = 5;

int nummsg = 0;
char *messages[MSGCOUNT];

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup()
{
  lcd.begin(16, 2);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));

  addMessage("");
}


void splitMessage(char *msg, char *l1, char *l2)
{
  
}


void printMessage(int index)
{
  char *line1, *line2;
  splitMessage(char *message[index], char *line1, char *line2);

  lcd.setCursor(0,0);
  lcd.print(line1);
  lcd.setCursor(0,1);
  lcd.print(line2);
}


void addMessage(char newmsg[])
{
  if(strlen(newmsg)<=MSGLENGTH)
  {
    messages[nummsg] = newmsg;
    nummsg++;
  }
  else
    Serial.print("ERROR: Message too long!");
  
}


void loop()
{
  int msgidx;
  bool btn; 

  lcd.setCursor(0,0);
  
  if(digitalRead(buttonPin) == HIGH)
  {
    if(!btn)
    {
      lcd.clear();
      msgidx = random(1,nummsg);
      printMessage(msgidx);
    )
    btn = TRUE;
  }
  else
    btn = FALSE;
    
  delay(50);
}





 /* switch(message) 
    {
      lcd.print("I'm so lucky");
      lcd.print("I miss you");
      lcd.print("I love you!");
      lcd.print("Mwah");
      lcd.print("Mwah mwah mwah");
      lcd.print("mwah mwah mwah");
      lcd.print("<3<3<3<3<3<3<3<3");
      lcd.print("<3<3<3<3<3<3<3<3");
      lcd.print("Put me in jail");
      lcd.print("Text 8850 for");
      lcd.print("spicy pic ;)");
      lcd.print("Text 1112 for");
      lcd.print("supportive words");
      lcd.print("You're brilliant");
      lcd.print("Kiss me rn");
      lcd.print("I love you");
      lcd.print("         so much");
      lcd.print("<3    <3    <3");
      lcd.print("   <3    <3");
      lcd.print("gimme head");
      lcd.print("You got this!");
      lcd.print("See you soon <3");
      lcd.print("Boobs in");
      lcd.print("      my mouth");
      lcd.print("No, I'm not");
      lcd.print("mad at you");
      lcd.print("I wish I was in");
      lcd.print("ur bed rn");
      lcd.print("*three squeezes*");
      lcd.print("Cunt");
      lcd.print("       cunt<3");
      lcd.print("Ur cute");
      lcd.print("I LOVE YOU");
      lcd.print("You're beautiful");
      lcd.print("Brb gotta look");
      lcd.print("at Jackie pics");
      lcd.print("Bailey <3 Jackie");
      lcd.print("Wanna snuggle?");
      lcd.print("Let's cuddle");
      lcd.print("I want kisses");
      lcd.print("Text 2323 for");
      lcd.print("KISSES!!!");
      lcd.print("'I'm sorry'");
      lcd.print("-Bailey 24/7");
      lcd.print("I'm thinking");
      lcd.print("about uuuuu");]
      lcd.print("u tryna fuq?");
      lcd.print("You're the");
      lcd.print("cutest <3");
      lcd.print("Good morning");
      lcd.print("bozo <3");
      lcd.print("You are my");
      lcd.print("sunshine");
      lcd.print("OMG");
      lcd.print("UR SO HOT");
      lcd.print(" <3  ILYSM  <3");
      lcd.print("You look so");
      lcd.print("good today");
      lcd.print("I miss u");
      lcd.print("Like really bad");
      lcd.print("You make me so");
      lcd.print("very very happy");
      lcd.print("Send me selfies");
      lcd.print("       pls");
            
      default:
      lcd.clear();
      break;
    }*/
