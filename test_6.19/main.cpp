int pin = 13;
int val;
int mark = 0;
String comdata = "";//定义字符串变量，赋值为空值 
void setup() {
    
    Serial.begin(9600);
    pinMode(pin,OUTPUT);
}

String com = "";
void loop() 
{
    
    //val[100] = Serial.read();
    //不断循环检测串口缓存，一个个读入字符串 
    while(Serial.available()>0)
    {
    	//读入之后将字符串串接到comdata上 
    	com += char(Serial.read());
		//每次读一个char字符，并相加 
		delay(2);//延时一会
		mark = 1;
	}
	if(mark == 1)
	{
		Serial.println(comdata);
		for(int i = 0;i<comdata.length();i++)
		{
			if(comdata[i] == ' ')
			{
				digitalWrite(pin,HIGH);
	            delay(3000);
	            digitalWrite(pin,LOW);
	            delay(3000);
			}
			else if(comdata[i] == 'a')
			{
				Serial.println("a");
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
			}
			else if(comdata[i] == 'b')
			{
				Serial.println("b");
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            for(int i=0;i<3;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(1000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
			}
			else if(comdata[i] == 'c')
			{
				Serial.println("c");
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(5000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	                digitalWrite(pin,HIGH);
	                delay(1000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
			}
			else if(comdata[i] == 'd')
			{
				Serial.println("d");
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(1000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
			}
			else if(comdata[i] == 'e')
			{
				Serial.println("e");
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
			}
			else if(comdata[i] == 'f')
			{
				Serial.println("f");
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(1000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
			}
			else if(comdata[i] == 'g')
			{
				Serial.println("g");
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(5000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
	            
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
			}
			else if(comdata[i] == 'h')
			{
				Serial.println("h");
	            for(int i=0;i<4;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(1000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
			}
			else if(comdata[i] == 'i')
			{
				Serial.println("i");
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(1000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
			}
			else if(comdata[i] == 'j')
			{
				Serial.println("j");
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            for(int i=0;i<3;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(5000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
			}
			else if(comdata[i] == 'k')
			{
				Serial.println("k");
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
			}
			else if(comdata[i] == 'l')
			{
				Serial.println("l");
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(1000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
			}
			else if(comdata[i] == 'm')
			{
				Serial.println("m");
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(5000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
			}
			else if(comdata[i] == 'n')
			{
				Serial.println("n");
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
			}
			else if(comdata[i] == 'o')
			{
				Serial.println("o");
	            for(int i=0;i<3;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(5000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
			}
			else if(comdata[i] == 'p')
			{
				Serial.println("p");
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(5000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
			}
			else if(comdata[i] == 'q')
			{
				Serial.println("q");
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(5000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
			}
			else if(comdata[i] == 'r')
			{
				Serial.println("r");
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
			}
			else if(comdata[i] == 's')
			{
				Serial.println("s");
	            for(int i=0;i<3;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(1000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
			}
			else if(comdata[i] == 't')
			{
				Serial.println("t");
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
			}
			else if(comdata[i] == 'u')
			{
				Serial.println("u");
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(1000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
			}
			else if(comdata[i] == 'v')
			{
				Serial.println("v");
	            for(int i=0;i<3;i++)
	            {
	                digitalWrite(pin,HIGH)
	                delay(1000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
			}
			else if(comdata[i] == 'w')
			{
				Serial.println("w");
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(5000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
			}
			else if(comdata[i] == 'x')
			{
				Serial.println("x");
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(1000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
			}
			else if(comdata[i] == 'y')
			{
				Serial.println("y");
	            digitalWrite(pin,HIGH);
	            delay(5000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            digitalWrite(pin,HIGH);
	            delay(1000);
	            digitalWrite(pin,LOW);
	            delay(1000);
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(5000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
			}
			else if(comdata[i] == 'z')
			{
				Serial.println("z");
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(5000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
	            for(int i=0;i<2;i++)
	            {
	                digitalWrite(pin,HIGH);
	                delay(1000);
	                digitalWrite(pin,LOW);
	                delay(1000);
	            }
			}
		}
	}
	
      
}
