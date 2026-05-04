===================================

Seminar "C Grundlagen"

Peter Loos

Pausen:   10.30 ............
Mittag:   12.30

Dienstag: 13.00 ...
Abend:    17 Uhr


35+ Jahre: C/C++, Java, C#, Back-to- the-Roots: C/C++

== SW-Entwicklung (20)
== Training, Teaching ...

Unterlagen:

https://github.com/pelocpp

https://github.com/pelocpp/c_introduction

===================================

Organisatorisches:

Link ab dem zweiten Tag:

https://teams.microsoft.com/meet/312232271616043?p=qPywCdk31MyoXuJCk2

===================================

(( Python, Matlab, Fortran 77, Pascal (Niklaus Wirth) ))  C# (Anders Hjilsberg)    

Entwicklungsumgebung:

Remote-IDE


===================================

Hello World:

Endung der Datei .c   // C Compiler

Nicht .cpp

Die Endung der Datei entscheidet, WELCHER Compiler für diese Datei verwendet wird.

================================

Programmiersprache C   Dennis Ritchie

Programmiersprache C++   Bjarne Stroustrup:   Weiterentwicklung von C


C ist in C++ enthalten.


Wie funktioniert eine Programmiersprache

Eine Programmiersprache ist durchaus mit einer natürlichen Sprache (Deutsch, ...) vergleichbar:

Lexikon:     Wörter    void, main, printf,  123, Sonderzeichen:  (  )  {   }  Semikolon ; 
Grammatik:   Satzbau



Wie kann ich die korrekte Grammatik eines C Programms überprüfen ?  


C:  Sprachlich: Anweisungen / Statement   ==> Jede Anweisung ist mit einem ; abzuschließen

Programmerstellung:  2 Phasen

1. Phase: Korrektheit / Grammatik      =========> Übersetzer  / Compiler (ist ein Programm)

                                    Ergebnis:  Schwer zu lesen   .obj   Object File

2. Phase: Maschinenprogramm erstellen (besteht aus OpCodes der CPU meines aktuellen Rechners)

                                       =========> Linker (ist ein Programm)

                                    Ergebnis:  Schwer zu lesen   .exe   Maschinenprogramm

Diese Aussagen sind Windows spezifisch.

======================================================================================


.c  ==> .obj ==> .lib   (Windows)

  Dieses .lib File kann NUR unter Windows weiter verwendet werden.

Micro-Controller Umgebung:

1. Phase: Wiederholen:

Compiler der Embedded IDE: 

.c  ==> .obj  (Embedded IDE)

======================================================================================

Why C ???????????

Maschinennähe // Performanz


Python, JavaScript, Java, C#  ..............

======================================================================================

CPU: Im Herz einer CPU:   Register

Speicherplätze zum Rechnen  // Im Speicher selbst kann NICHT gerechnet werden

   Zum Rechnen müssen die Werte in Register kopiert werden


Register: eax    Akku   Akkumulator // Hauptregister    AX (16 Bit)    EAX    extended  (32 Bit Akku)
          ecx



Beispiel:

00007FF7817E185C  mov         dword ptr [a],1 

Maschinensprache:   Binär Befehle

Lesbare Darstellung für Maschinenbefehle:  Assembler

mov         dword ptr [a] , 1     ist eine lesbare Darstellung eines Maschinenbefehls

mov         dword:  es werden 32 Bit verschoben
            ptr [a]    Adresse von a im RAM
            1       Konstante 1
    
Wie ist das komplett zu lesen: VON RECHTS NACH LINKS

===================================================================

Ausführung eines C - Programms:

a) Direkt

b) Unter der Kontrolle eines begleitenden Hilfsprogramms:  Debugger.   // Entwanzer

   Wanze:  bug   debug entferne die Wanzen

   Tool, um Fehler in einem Programm zu finden.

===================================================================

Python:  Wird NICHT in Maschinensprache übersetzt, sondern INTERPRETIERT.

         Interpreter: Ist ein Hilfsprogramm zur Ausführung von Python-Anweisungen - OHNE Maschinencode.

===================================================================
===================================================================

Erste Schritte:

Was ist ein Datentyp?
 
   Datentyp legt fest, wie ...


Was ist eine Variable?

Was haben wir im Speicher (RAM): Bits und Bytes  (  1 Byte sind 8 Bit )

Im echten Leben: Zahlen : 123       ganze Zahl / Datentyp / Schlüsselwort:  int   (integer)

                                    Es gibt aber auch short , long, long long als Datentyp.

 Why ==> Es geht um die ANZAHL der Bytes: Man kann also viele oder wenige Bytes verwenden.

                                    int   ==> 4
                                    short ==> 2
                                    long  ==> 4         // Hat sich historisch so ergeben
                                    long long ==> 8

    Gilt das für JEDEN Rechner: NEIN. int kann auch nur auf 2 Bytes abgebildet werden (veraltet) 

    Diese Festlegung ist Rechner / CPU abhängig.


                          4.123     Kommazahl  / Datentyp / Schlüsselwort:  float oder double (floating point)

                                   float:  4 Byte
                                   double: 8 Byte

                          "ABC"

                          '!'

BEST PRACTICE:

Ganze Zahlen: int

Gleitpunkt:   float (weil weniger Bytes) ... und etwas schneller


===================================================================

Wie sieht den die Zahl 123 im Speicher aus ?????????????

123  =====> 01111011

Wie kommst du darauf:  Mikrocomputer-Programmierung

        Verfahren:  "Zweier-Komplement"

       Es gibt auch ein Einer-Komplement Verfahren: Hat sich nicht so durchgesetzt.

===================================================================

Wie sieht es mit 123.123123 aus ???

Standard: IEEE  

Tools:  https://www.h-schmidt.net/FloatConverter/IEEE754.html

===================================================================

Ich brauche NOCH GRÖSSERERE Zahlen, als in 32 / 64 Bit passen:

==> Es gibt dann spezielle Bibliotheken.


===================================================================

Datentypen: int oder float

Was ist eine Variable:

int n = 123;

Eine Variable bedeutet Reservierung für ein Stück Speicher.

Wieviel Speicher: NICHT in Bits oder Bytes: SONDERN: In Bezug auf einen Datentyp.

zB:   int n = 123;   // 4 Bytes // wir wollen von einem Typ sprechen.

Unterschied von Assembler / Maschinensprache zu C: Speicher MIT EINEM ZUGEORDNETEN Datentyp

===================================================================

Warning:

a) Ist kein Error.

b) Sollten wir Warnings ignorieren : Nooooooooooooooooooooooooooooooooooooo

C  Lexikon:   Wörter (n, m, f , d):   123.123

   Jeder Konstanten ist ein Datentyp zugeordnet: float oder double: Festlegung: double

===================================================================

Klassisches C // 50 Jahren

Aktuelles C

Neuen Datentyp:    size_t  Maschinenabhängigkeit 16 Bit / 32 Bit  : 

'size_t' ist wie int, long: ganze Zahl  // Ist so groß wie der Akku der aktuellen Maschinen.

===================================================================

Abarbeitung eines C-Programms:

Die Anweisungen werden DER REIHE NACH ausgeführt, von oben nach unten.

Kontrollstrukturen: if, while, for, ...

Diese ermöglichen Abweichungen von dieser Reihenfolgen.

if:   Anweisung : Bedingungsanweisung

while:  Anweisung : Wiederholungsanweisung

SYNTAX:

if ( bedingung ) 
{
    anweisungen;
}

oder

if ( bedingung ) 
{
    anweisungen;
}
else
{
    anweisungen;
}

oder

if ( bedingung ) 
{
    anweisungen;
}
else if ( bedingung2 )
{
    anweisungen;
}
else if ( bedingung3 )
{
    anweisungen;
}
else
{
    anweisungen; // alle bedingungen von oben waren nicht erfüllt.
}


bedingung: Erfüllt oder nicht  // true, false :  NICHT in C

false:  Wert 0
true:   Alles andere ausser 0 // ungleich 0

int a = 5;
int b = 7;

if (  a > b )    // Was ist das für ein Datentyp ...: int

Womit wird einen Anweisung abgeschlossen:  Mit ;

AUSNAHME: Nach einer } entfällt das ;

====================================================

Bedingungen:

Logisches Und: Sind BEIDE Bedingungen erfüllt ???

Operator:  &&

Logisches Oder: Ist EINE von beiden Bedingunen erfüllt ???

Operator:  ||

Negation:  aus true mache false und aus false mache true

Operator:  !


Syntax bei a < b und && oder || war intuitiv.

Bei ! ist die Schreibweise falsch !!!

Warum:  Hmmm, es gibt aktuell mehrere Operatoren:

Da müssen wir die Reihenfolge der Auswertung betrachten:

Wie:  

a) Mit runden Klammern
b) Mit einer Tabelle, die uns dabei hilft: Operatoren Vorrang:

https://en.cppreference.com/c/language/operator_precedence

Beispiel:

int a = 3 + (4 * 5)

======================================================================

while:  Anweisung:  Wiederholungs-Anweisung

SYNTAX:

while ( bedingung )
{
    statements;
}

Zusatz:

Ein while kann auch vorzeitig -- oder auf eine zweite Weise -- verlassen werden:

break;

==============================================================================

Erste Übung:

Teuflische Folge   //  Collatz Folge 

Zahlenfolge:

Startwert:

int n = 7;

Nächste Wert:

n gerade:    n / 2

n ungerade:  3 * n + 1

Probe:

7 => 22 => 11 => 34 => 17 => 52 => 26 => 13 =>40 =>20 =>10 =>5 =>16 =>8 =>4 =>2 =>1   ENDE


Für jeden Startwert endet diese Folge nach ENDLICH vielen Schritten.

IMMER eine endliche Folge: 

Programm:


Die Werte einer teuflischen Folge in der Konsole ausgeben.

Hinweis:

if (  n ist gerade )

if (  n % 2 == 0 )   // ist gerade    // Modulo-Operator


Guter Startwert: n = 7  oder n = 27

15:25
=====







