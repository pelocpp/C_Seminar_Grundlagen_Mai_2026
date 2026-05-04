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
