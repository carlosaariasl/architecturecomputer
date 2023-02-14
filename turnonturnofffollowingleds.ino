// 
Luces LED que fluyen

/*
Ocho LED se encenderán uno por uno de izquierda a derecha y luego se apagarán uno por
uno de derecha a izquierda.

Después
eso, los LED se encenderán uno por uno de derecha a izquierda, y luego se apagarán uno
por uno de izquierda a derecha.

Este
el proceso se repetirá indefinidamente.*

/****************************************/

constante
int lowerPin = 2; // el más bajo se adjunta a

constante
inthighestPin = 9; // el más alto se adjunta a

/****************************************/

vacío
configuración()

{

  //establece los pines 2 a 9 como salida  

  for(int estePin = elPin más bajo;estePin <=
pin más alto; este pin ++)

  {

     pinMode(estePin,SALIDA); //inicializar
thisPin como salida

  }

}

/****************************************/

vacío
bucle()

{

  //iterar sobre los pines

  //enciende el led de menor a mayor

  for(int estePin = elPin más bajo;estePin <=
pin más alto; este pin ++)

  {

    digitalWrite(thisPin,HIGH);//enciende este led
en

    delay(100);//espera 100ms

  }

  //desvanecerse de mayor a menor

  for(int estePin =
pinmásalto;estePin>=Pinmásbajo;estePin--)

  {

    digitalWrite(thisPin,LOW);//enciende este led
apagado

    delay(100);//espera 100ms

  }

  for(int estePin = mayorPin;estePin>=menorPin;estePin--)

  {

    digitalWrite(thisPin,HIGH);//enciende este led
en

    delay(100);//espera 100ms

  }

  for(int estePin = elPin más bajo;estePin <=
pin más alto; este pin ++)

  {

    digitalWrite(thisPin,LOW);//enciende este led
apagado

    delay(100);//espera 100ms

  }

}