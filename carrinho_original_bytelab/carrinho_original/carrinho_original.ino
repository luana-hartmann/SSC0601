#include <Ultrasonic.h>

Ultrasonic sensor(11, 12);

int velocidade = 160;
int cont;
int cont2;
char x;

void setup() {
    Serial.begin (9600);
    pinMode (3, OUTPUT);//BUZZER
    pinMode (5, OUTPUT);//ENA
    pinMode (6, OUTPUT);//IN1
    pinMode (7, OUTPUT);//IN2
    pinMode (8, OUTPUT);//IN3
    pinMode (9, OUTPUT);//IN4
    pinMode (10, OUTPUT);//ENB
    pinMode (11, OUTPUT);//TRIGG
    pinMode (12, INPUT);//ECHO
}

void ultrassom (){
    int distancia = sensor.read(CM);
    if (distancia <= 30){
        digitalWrite (6, LOW);
        digitalWrite (7, LOW);
        digitalWrite (8, LOW);
        digitalWrite (9, LOW);
        analogWrite (5, velocidade);
        analogWrite (10, velocidade);
        Serial.println ("parou");
        tone (3, 1000, 125);
        delay (250);
    }
}

void veloci (){
    if ( x == 's'){
        cont = 1;
        while (cont > 0 && velocidade < 240){
            velocidade = velocidade+20;
            cont --;
            Serial.println ("aumenta");
            delay (500);
        }
    }

    if ( x == 'p'){
        cont2 = 1;
        while (cont2 > 0 && velocidade > 160){
            velocidade = velocidade-20;
            cont --;
            Serial.println ("diminui");
            delay (500);
          }
    }

    analogWrite (5, velocidade);
    analogWrite (10, velocidade);
}

void loop() {
    x = Serial.read ();
    ultrassom ();
    veloci ();
    switch (x){
        case 'f':
        digitalWrite (6, HIGH);
        digitalWrite (7, LOW);
        digitalWrite (8, LOW);
        digitalWrite (9, HIGH);
        break;
        case 'd':
        digitalWrite (6, HIGH);
        digitalWrite (7, LOW);
        digitalWrite (8, LOW);
        digitalWrite (9, LOW);
        break; 
        case 'e':
        digitalWrite (6, LOW);
        digitalWrite (7, LOW);
        digitalWrite (8, LOW);
        digitalWrite (9, HIGH);
        break; 
        case 'o':
        digitalWrite (6, LOW);
        digitalWrite (7, LOW);
        digitalWrite (8, LOW);
        digitalWrite (9, LOW);
        break; 
        case 't': 
        digitalWrite (6, LOW);
        digitalWrite (7, HIGH);
        digitalWrite (8, HIGH);
        digitalWrite (9, LOW);
        break; 
        case 'q':
        digitalWrite (6, LOW);
        digitalWrite (7, LOW);
        digitalWrite (8, HIGH);
        digitalWrite (9, LOW);
        break; 
        case 'z':
        digitalWrite (6, LOW);
        digitalWrite (7, HIGH);
        digitalWrite (8, LOW);
        digitalWrite (9, LOW);
        break; 
    }
    // SWITCH
    //Serial.println ("Velocidade:");
    //Serial.println (velocidade);
    delay (1000);
}
