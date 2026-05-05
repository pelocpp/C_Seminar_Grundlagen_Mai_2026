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

Agenda Dienstag:
----------------

== Blick auf die Unterlagen

== Besprechung der Musterlösung

== Präprozessor

== eine int-Variable auf einen double addieren
   allgemein: Typ Konvertierung

== Unterprogramme

== Strukturierung eines C-Programms (mehrere Dateien)

== Speicherbereiche eines C–Programms

== Lebensdauer von Variablen

== Arrays

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

=================================================================

== Fragen nach Strukturierung:  Unterprogramme

== Einlesen von der Konsole

   'scanf': This function or variable may be unsafe.
   Consider using scanf_s instead.   // scanf_s  ==> secure
   To disable deprecation, use _CRT_SECURE_NO_WARNINGS.
   See online help for details.

== break und continue

== for-Schleife

=============================================================

 a = a + 1;

 Man hat hierfür eine Abkürzung:

 a ++;   // Zähle 1 auf a dazu

 a --;   // Ziehe 1 von a ab


Coding Style Guides

============================================================

Restriktion: Hmmmmmmmm ... eher nicht.

  Man sollte von einer Sprache alles verwenden dürfen, was sie kann.

Stopp: Embedded // dynamischer Speicher: Beispiel: Darf NICHT verwendet werden.

Ästhetik // Lesbarkeit:

Coding Style Guides

https://users.ece.cmu.edu/~eno/coding/CCodingStandard.html#gconstants

https://github.com/MaJerle/c-code-style

Das gibt es auch für Unit Testing

https://www.geeksforgeeks.org/software-testing/a-comprehensive-guide-to-unit-testing-in-c/

Beispiel:

"Tool für globale Variablen"

Harte Maßnahme: 

int counter;

// counter = 500

Lösung: 

Man könnte den Zugriff auf globale Variablen in Funktionen verstecken / unterbringen:

Regel // Richtlinie:  Die vom Team definiert / und Team umgesetzt werden müssen.

Dennis Ritchie:

C:  Vision:

"A Programmer knows what he does"   :)

Liberale Sprache 


====================================================

for-Schleife:

Ist wie die while-Schleife eine Wiederholungs-Anweisung

Ästhetik:

while:   ==> Charakter einer Wiederholung in Bezug auf eine Bedingung

for:     ==> Charakter einer Wiederholung in Bezug auf eine bestimmte Anzahl von Wiederholungen (10 Mal, 100 Mal)

SYNTAX:

for ( TEIL_1  ; TEIL_2 ;  TEIL_3 )
{
    anweisungen();
}

TEIL_1: Definiert und belegt eine Zählervariable für die Anzahl der Wiederholungen

TEIL_2: Bedingung, die die Ausführung des Rumpfs (Body) kontrolliert

TEIL_3: Die Zählervariable ist zu verändern

//  Vereinbarung  // Bedingung // Anweisung

for ( int i = 0 ;  i < 10  ;  i = i + 1 )
{
    anweisungen();
}

Emfehlung: Normalerweise "i" in der for-Schleife definieren.

================================================================

double capital = 1000.0;   // Euros
double interest = 4.0;    // interest = Zinsen auf deutsch

Um wieviel vergrossert sich mein Kapital im Laufe von 10 Jahren,
wenn ich bei einem Startkapital von 1000.0 Euro 4.0 % Zinsen erhalte
und diese zum Kapital dazufüge // Zinses-Zins:

1. Jahr: 1040.- 
2. Jahr: 1085.-  nicht exakt.

for-Schleife
 
   Format für double:    %.2f

================================================================

Übersetzer:

Liest von Oben bis unten:  EINMAL  - One Pass Compiler


C#, Java: Two Pass Compiler

====================================================================


Frage:

"Vererbung des Datentyps"

    double startCapitalStock = capitalStock;

    double startCapitalStock;   

Antwort:

Grammatik: Vereinbarung // Name und Typ einer Variablen vereinbart: startCapitalStock

Grammatik: 2. Feature: Vorbelegung // Initialisierung:

Belegt die Variable mit einem Wert vor: Dieser Wert muss TYPKONFORM zum Typ der Variablen sein.

-----------------------------------

Python:   n = 123     // n ist typlos    // Zuweisung passiert zur Laufzeit // Referenz
          n = "ABC"   // Werte sind von den Variablen "getrennt"

-----------------------------------



===============================================================

Typkonvertierung:

= Variablenvereinbarung

= Zuweisung (von Variablen)

--------------------------------

Zuweisung (von Variablen)

Es wird der Wert auf der rechten Seite der Variablen auf der linken Seite zugewiesen;
Die Datentypen müssen - prinzipiell - IDENTISCH sein.

---------------------------------

1. Ausnahme:

Ist der Wert auf der rechten Seite - ohne VERLUST - in die Variable auf der linken Seite 
kopierbar, dann akzeptiert C diese Zuweisung.

Zuweisung OHNE Informationsverlust GEHT.

ACHTUNG: 

CVTSI2SD — Convert Doubleword Integer to Scalar Double Precision Floating-Point Value
          // LANGSAM

--------------------------------

2. Ausnahme:

Was ist, wenn es einen Informationsverlust gibt / geben kann.

Dann geht die Zuweisung auch - ggf. mit einem Informationsverlust 
                             - ggf. mit einem geänderten // gerundeten Wert

    ===> implizite Typkonvertierung  // Regelfall: WARNING markiert

Beispiel zu implizite Typkonvertierung OHNE Verlust:

    int a = 1;           // Zweierkomplements
    int b = 2;

    double d = 100.7;   // IEEE  - Mantisse, Vor, Nachkommastellen
    double f = 200.0;

    d = a;  // auch: implizite Typkonvertierung OHNE Verlust

        d = a;  // auch: implizite Typkonvertierung OHNE Verlust
00007FF6DAE41EDD  cvtsi2sd    xmm0,dword ptr [a]    !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
00007FF6DAE41EE2  movsd       mmword ptr [d],xmm0    // schnell, weil eine mov-Variante

CVTSI2SD — Convert Doubleword Integer to Scalar Double Precision Floating-Point Value
          // LANGSAM

-------------------------------------------------------------

Neben der implizite Typkonvertierung: Alternative

Explizite Typkonvertierung:   Sprachliches Mittel: Typumwandlung // cast

SYNTAX:

var_a = ( typ von var_a ) var_b;

    // implizit, mit Warning   // Bad Smell // Geruch 
    a = d;  // warning C4244: '=': conversion from 'double' to 'int', possible loss of data // 
00007FF7A92B1EDD  cvttsd2si   eax,mmword ptr [d]  
00007FF7A92B1EE2  mov         dword ptr [a],eax  

    // Ich bin mir der Typkonvertierung bewusst: ich will diese haben
    a = (int) d;
00007FF7A92B1EE5  cvttsd2si   eax,mmword ptr [d]  
00007FF7A92B1EEA  mov         dword ptr [a],eax  

Frage:

Es gibt eine Familie von Datentypen, die auf diese Weise konvertierbar sind:

char, short, int, long, long long, size_t, float, double   // elementaren Datentypen

Char: Zeichen: Da gelten eigene Regeln.

NICHT: Zeichenketten: "ABCDE", Adressen, Strukturen , Unions 

====================================================================

Unterprogramme

Was ist ein Unterprogramm?

== Zusammenfassung von Anweisungen unter einem Namen.
== Über den Namen kann man das Unterprogramm aufrufen
== Es können Werte an das Unterprogramm übergeben werden.
== Es können Ergebnisse zurückgegeben werden.

Grammatikalisch:  2 Varianten von Unterprogrammen

Mit oder ohne Ergebnis.

A) Unterprogramm ohne Ergebnis

SYNTAX:

void NameDesUnterprogramms ( optionale_parameter  )
{
    anweisungen;
}

Wie wird ein Parameter definiert?

Wie eine Variable: Typ Name

Aufruf:     NameDesUnterprogramms (...);


B) Unterprogramm mit Ergebnis:   Funktion

SYNTAX:

typ NameDesUnterprogramms ( optionale_parameter  )
{
    typ result;

    anweisungen;

    return result;
}

Aufruf:     
            Typ ergebnis;
            ergebnis = NameDesUnterprogramms (...);


Beispiel:   WurzelAus // SquareRoot  : Parameter: Von welchem Wert: Wurzel von 4 ist 2

           Hmmm, wir wird das berechnet:  Das ist dann eine interner Algorithmus:
                                          Sind dann lokale Variablen, die man zusätzlich benötigt.

==========================================================

Viele Fragen offen:

Wo liegen Parameter im Speicher
Wo liegen die Variablen generell im Speicher
Welche Speicherbereiche gibt 

Architektur von C / eines C Programms:     Laufzeit

==========================================================


Schreibe folgende Unterprogramme:


float areaRectangle (float width, float height)

float areaCircle (float radius)            // Pi * radius * radius

Hilfe:  

double Pi = 3.14;

Ausgabe des Ergebnisses in der Konsole anschauen
Werte an das Unterprogramm können im Programm direkt stehen oder von der Konsole eingegeben werden


============================================

Wie wird ein Unterprogramm aufgerufen ??????

Ein Hilfsmittel:  Speicherbereich:   Stapel // Stack

Stapel: Man kann Variablen "drauf" legen ...
oder von oben "entnehmen"

Wie Bücher ----

Darstellung aller Variablen eines Unterprogamms:  Fenster "Locals"

Darstellung der aktuell aufgerufenen Unterprogramme:  Fenster "Call Stack" // Aufrufliste


Was ist noch im Stackframe enthalten ???

Steht zB auch die Rücksprungadresse:  Wo geht es jetzt weiter...
Steht zB auch der alte Wert des SP im aktuellen Stackframe:

=========================================================================

Deep Dive:  "Stackframe"

========================================================================

== Strukturierung eines C-Programms:

-- Ein C-Programm besteht aus vielen Unterprogrammen (2 Facetten)
-- Ein bestimmtes Unterprogramm (main) stellt den Start des Programms (Hauptprogramms) dar.

-- Es gibt auch die Möglichkeiten der Strukturierung von Daten.

   i) Einfache (elementare) Variablen (int n;)
   ii) Felder
   iii) Strukturen

-- Ein C-Programm wird typischerweise auf mehrere C-Dateien verteilt.

   Best Practice (Empfehlung):  Eine Datei bekommt den Namen "Program.c" / "Main.c"

   Hierin sollte die main-Funktion sein.

   Andere Funktionen, die in anderen Dateien stehen: Name und Schnittstelle 
      müssen mit einer extern-Deklaration bekannt gemacht werden.

      i) Diese kann in der Datei / in den Dateien stehen, wo die Funktion benötigt wird.

      ii) Besser: Mit einer separaten Datei:  "Header"-Datei

      Achtung:  "Header"-Dateien sind nicht isoliert übersetzbar.

      Übersetzungsarchitektur: Viele C-Dateien (Compiler) 
                               ==> viele .OBJ Dateien
                               ==> (Linker) EINEM .EXE File

-- Ein weiteres Strukturierungsmittel:
            Funktion nicht "überall" verfügbar machen,
            sondern ( zum Schutz der Funktion // Modularisierung ) nur in EINER Datei verwendet werden können.

            Hilfsfunktion.

            Wie: Schlüsselwort 'static'

// =====================================================================

Strukturierung der Daten

A) Globale Daten:

Sind im gesamten C-Programm verfügbar // lesend und schreibend
während der gesamten Laufzeit des Programms.

Ginge: Eine Einschränkung auf EINE Datei:  static 

B) Lokale Daten:

Werden erst bei Aufruf des Unterprogramms angelegt (auf dem Stack)
und bei Verlassen wieder abgeräumt.

Zweck: Eigentlich nur für Zwischenergebnisse.

       Man kann da keine Werte aufheben ............ für temporäre Berechnungen.
       Nichts zum Aufheben

C) Dynamische Daten:

Werden bei BEDARF erzeugt ... und DANACH wieder freigegeben.

============================================================

Strukturierung der Daten:

== Einfachen, elementaren Variablen (int, float, ...)
   Built-In Datentypen

== Zusammengesetzte Daten:  Array, Feld

Was ist ein Feld: 

Viele Werte - DESSELBEN - Typs.

Beispiel: 

Lotto-Zahlen: 6 Werte vom Typ int

Messreihe: 100 Werte vom Typ double

SYNTAX:

typ  nameFeld [ anzahl ];

ACHTUNG: Die Länge ist FIx !!!!!!!!!!!!!!!!!!!!!!!!!

Beispiel:

int  lottoZahlen [ 6 ];

LEIDER KONSTATIEREN:

Indices werden von C während der Laufzeit NICHT auf Gültigkeit überprüft :(

===> Performanz

==========================================================================

Übung:

a) Ein Feld der Länge 10 mit Zufallszahlen vorbelegen, im Bereich von 1 bis 100
b) Das Feld in der Konsole ausgeben
c) Den kleinsten und grössten Wert bestimmen - und ausgeben.

Zufallszahlen:

Werden berechnet: Ohne Eingriff: Ist das immer diesselbe Zahlenfolge

Mit Eingriff:    srand