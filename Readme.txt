===================================

Seminar "C Grundlagen"

Peter Loos

peter.loos@gmx.de

Unterlagen:

https://github.com/pelocpp

https://github.com/pelocpp/c_introduction

===================================

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

Agenda Mittwoch:
----------------

== Genereller Aufbau
   -- main / Unterprogramm / Ablauf
   -- Daten / Strukturierung
   -- Header-Files

== Besprechung Musterlösung

== Zeiger und Pointer

== Beispiel Parameterübergabe

== Dynamische Variablen

== Struktur DynamicIntArray

===================================

Agenda Donnerstag:
----------------

== Übung DoubleCapital

== Besprechung Musterlösung

== Zeichenketten

== Aufgaben:  append, etc.

== Aufgaben:  Aufgabe zur Zeichenkettenverarbeitung mit dynamisch allokiertem Speicher

== Zeichenketten

== Strukturen

===================================

Agenda Freitag:
--------------

== Literatur

== Strukturen: Verfeinerung (typedef)

== Kann man in C auch objekt-orientiert programmieren? (Strukturen)
   == Schutz, Strukturierung, ...

== Aufgaben: Geldbeutel

== Low-Level Programmierung in C
     Operatoren zur Bitmanipulation: &, |, ^ und ~

== enum, union

== Copilot

== Aufgaben: All-In Komplex-Übung "Telefonbuch"

== 16 Uhr // 17 Uhr // 16 Uhr: Für "alle" ... Fragen danach zur Verfügung stehe

===================================
===================================


Organisatorisches:

Link ab dem zweiten Tag:

https://teams.microsoft.com/meet/312232271616043?p=qPywCdk31MyoXuJCk2

===================================

(( Python, Matlab, Fortran 77, Pascal (Niklaus Wirth) ))  C# (Anders Hjilsberg)    

Entwicklungsumgebung:

Remote-IDE


===================================

Genereller Aufbau eines C-Programms
-----------------------------------

In Bezug auf Funktionen:
------------------------

== Mehrere Dateien

== In jeder Datei ein oder mehrere Funktionen

== Genau eine Funktion (egal, in welcher Datei) muss 'main' heißen

----------------

== Fangen wir bei der Funktion 'main' an:

   -- Diese 'main'-Funktion ruft (normalerweise) ein oder mehrere ANDERE Funktionen auf.

   -- Die NAMEN dieser Funktionen müssen an dieser Stelle (in 'main') BEKANNT sein.

      >> Sie stehen in DERSELBEN Datei weiter oben

      >> Sie sind in ANDEREN Dateien:

         a) Jetzt schreibt man eine sog. Header-Datei (.h),
         die "den Namen der Funktion enthält" / die Schnittstelle der Funktion enthält

         // global functions
         extern void exercise_areaRectangle();
         extern void exercise_areaCircle();

         b) Diese Header-Datei ist mit #include zu inkludieren.



===================================

Genereller Aufbau eines C-Programms
-----------------------------------

In Bezug auf globale Daten:
---------------------------

== Diese werden in GENAU EINER Datei definiert / vereinbart:

int g_counter = 0;   // Mit Vorbelegungswert // Lesbarkeit: Fängt mit g_ an

== Diese können in ALLEN anderen Dateien verwendet werden.

  -- In derselben Datei: Nix zu tun. (wenn sie "oben" vereinbart wird)

  -- In anderen Dateien:

     >> a) Der Name muss in einer Include-Datei stehen:

        extern int g_counter;

     >> b) Diese Header-Datei ist zu inkludieren


   -- In anderen Dateien - auf die SCHNELLE:


======================================================================

Wie kann man globale Variablen schützen ??

Sei es zB lesenden und schreibenden Zugriff trennen ??

Vorgehensweise:

a) Die Variable selbst wird NICHT global gemacht:   static 

b) Wir schreiben Zugriffsfunktionen für diese Variable: getter / setter

   Lesend und schreibend


======================================================================

Die 'main' Funktion gibt es in zwei Ausprägungen:

A) Exakt - per Definition:

int main(int argc, char* argv[])
{
    // ...

    return 0;
}


B) Etwas kürzer, toleriert, aber eben nicht gemäß Sprachdefinition:

void main()
{
   // ...
}

======================================================================

Real-World Beispiel:

Python:

Wie lernt man eine Sprache:  Man muss einen Übersetzer / Interpreter schreiben können.

// Compilerbau

======================================================================


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

==========================================================================

Begriff des Moduls in C:

== Erst mal so nicht definiert.

== Aber: Wie könnte man ein Modul in C nachahmen:

   i) Alle Modul-INTERNEN Funktionalitäten (Funktionen und Daten) werden
     in dem Modul versteckt.

     Wie: static

  ii) Was wird "exportiert"

    - globale Variablen (KEIN static)

    - setter / getter

    - alle Funktionen, die ebenfalls NICHT static sind.

==========================================================

Warum ist C so verbreitet ???
Warum ist C auch heute noch so aktuell ???

==> In C kann man sehr maschinennah arbeiten: Datentyp: Adressen.

"Es braucht vielleicht ein wenig, bis sich das setzt"

==========================================================

Zeiger / Adressen:

Speicher kann über Adressen angesprochen werden.

Zeiger: Whyyyyyyyyyyyyyyyyyyyyyyyy:  Kommt noch !!!

int*:   Ist ein Datentyp für eine Adresse, an der eine int-Variable liegt.

long*: ....

Man wollte in C eine Adresse (0xC234234) mit einem Datentyp zusammenführen.

Zeiger: Whyyyyyyyyyyyyyyyyyyyyyyyy:  Kommt noch !!!

Zweites Beispiel:

=================================================================

Parameter-Übergabe in C:
------------------------

Standard-Vorgehensweise:  Call-by-Copy   // Aufruf mit einer Kopie

Zweite Vorgehensweise:    Call-by-Adress // Aufruf mit der Adresse einer Variablen

Whyyyy: Erster Grund zur Einführung von Zeigern / Adress:

Man kann mit deren Hilfe auf das Original einer Variablen zugreifen
und nicht auf die Kopie einer Variablen.

---
A pro pos: Pascal:  ^    ist wie eine Adresse in C
---

    n = 124;     // direkte Wertzuweisung über den Namen der Variablen
00007FF6F073682D  mov         dword ptr [n],7Ch  

    // versus

    *ptr = 124;  // indirekte Wertzuweisung über die Adresse der Variablen
00007FF6F0736834  mov         rax,qword ptr [ptr]     // rax  : Adress-Register
00007FF6F0736838  mov         dword ptr [rax],7Ch     // [] steht auf Maschinenebene für Indirekt

________________________

Frage: Beobachtung:

== Habe ich eine Kopie
== Habe ich Zugriff auf das Original

=================================================================
=================================================================

Aufgabe:

Vertauschen der Werte zweier Variaben

void tausche ( ... )
{
}


void exercise()
{
    int n = 5;
    int m = 10;

    printf("%d - %d\n", n, m); // 5, 10

    tausche (n, m);  // oder so ähnlich

    printf("%d - %d\n", n, m); // 10, 5 !!!!!!!!!!!!!!!!!!!!!!!
}

// ==============================================================

Üblicherweise:

Call-by-Value
Call-by-Reference

// In C würde ich (Peter Loos) das etwas anders formulieren:

a) Call-by-Value  // bei Wert <=> Kopie // Call-by-Copy

b) Call-by-Reference: Hmmmmmmmmmm, weil in C gibt es KEINEN Datentyp Referenz 

   Deshalb (Peter Loos): Call-by-Address

Anmerkung: C++ gibt es Referenz - und natürlich auch Pointer, weil C in C++ enthalten ist.

C++:  Parameterübergabe:

i)   Call-by-Value / Copy
ii)  Call-by-Reference
iii) Call-by-Address / wie in C

========================================================================

Frage: Code vom Lieferanten

int n = 123;

int* ptr = &n;

int* ptr = (int*) 0x1024;   // Falsch oder schlecht ist 
                            // (int*): Datentypkonvertierung ==> Warning vermieden.

Es gibt Situationen:

i) Embedded Software
ii) Treiber Software // Devive Drive: Netzwerkkarte
iii) Firmware

Verwaltet intern einenn HW-Puffer: 1024 bytes

Doku: 0x1000 : dort ist ein Puffer

char* buffer = (char*) 0x1000;   // hier liegt in der HW ein Pufferbereich.

======================================================================

Ziel: ===> Dynamische Speicherverwaltung

Vorraussetzungen:  C Zeiger:  Basis ==> Kür

Thema:     Zeigerarithmetik

Rechnen mit Zeigern

Wie ?????????

a) "Eins zu einer Adresse zählen"

Was ist eine Adresse: Ein Wert, der ein BYTE im Speicher anspricht !!!!!

DESHALB:

"Eins zu einer Adresse zählen": Der +1 wird in die ANZAHL Bytes umgerechnet,
um damit beim nächsten möglichen Wert zu landen.

short* ptr; // 2 Bytes

ptr ++;   // 0x1024 ==> 0x1026



Zeigerarithmetik:

Besteht aus 2 Rechenarten:

int* ptr;
....

i) ptr ++;    // Anzahl Bytes (hier: 4) dazuzählen
   ptr --;    // Anzahl Bytes (hier: 4) abziehen

ii) ptr = ptr + 5;   // Offset  // Anzahl Bytes pro Typ (hier: 4) multiplizieret mit Offeset (hier: 5)  dazuzählen
    ptr = ptr - 5;   // Offset  // Anzahl Bytes pro Typ (hier: 4) multiplizieret mit Offeset (hier: 5)  abziehen

====================================================================

Frage:

In Python kann man ein Feld belieger Länge erstellen:

import numpy as np
n = 10
feld = np.zeros(n)  # Array mit 10 Nullen (Floats)

Das geht auch in C !!!

====================================================================

Wozu Zeigerarithmetik: ===> Dynamische Speicherverwaltung

Ein Ziel:

C zwei Arten von Arrays:

a) Feld statischer Länge:

int lotto [6];    // Fixed Size !!!!!!!!!!!!!

b)  Feld dynamischer Länge:

malloc:   memory allocate  
calloc

size_t size ===> size bytes  !!!

Rückgabetyp:

void* malloc( size_t size );

Was ist void*: Eine Adresse von nichts ????

Mit malloc kann man viele int's, double's, float's etc. anlegen!

===> Wie soll dann der Rückgabetyp definiert werden ???

void*:  Das ist nur eine Hilfestellung / Zwischenlösung:

void* ist nicht zum Arbeiten gedacht !!!


Soll man den Rückgabewert von malloc überprüfen:   (Peter Loos // IMHO)

== bei kleiner Argumenten von malloc (wenig Speicher):
   Keine Überprüfung.

== bei großen Werten:
   Hier mit Überprüfung.


int zahlen = 6;
int* lotto = malloc(zahlen * sizeof(int));    // Dynamic Size

lotto[2] = 33;  // Beispiel
*(lotto + 2) = 33;  // Beispiel

Ironischer Ausklang: Gibt es Arrays in C ????????????????????????????????

NEIN, es gibt nur Anfangsadressen.


malloc kennt  Speicher / kann Speicher reserviere / er kennt aber nur BYTES !!!

Beispiel: 10 - int Werte ===>  40 Bytes

=========================================================

ACHTUNG: !!!!!!!!!!!!!!!!!!!!!

Zu JEDEM malloc gehört eine FREIGABE des allokierten Speichers:

free

=========================================================

malloc: Steht das zur Verfügung ???

Wo ist malloc überhaupt:  C-Bibliothek:  CRT  // C-Runtime Library

Zu 98% ist die CRT - auch bei Embedded C Compilern - dabei.

Ausnahme:

Embedded C ohne Bibliothek:  Bare Metal C

Bare Metal C bezeichnet die Programmierung von Mikrocontrollern oder Prozessoren
in der Sprache C direkt auf der Hardware, ohne Betriebssystem (OS) oder Zwischenschichten (Middleware).
Der Code steuert Hardwarekomponenten wie Register und Speicher direkt an, was maximale Leistung,
volle Kontrolle und Echtzeitfähigkeit ermöglicht, aber tiefes Hardwarewissen erfordert

RTOS OS Familien:

a) Dann stehen als Alternative für malloc Funktionen des Betriebssystems zur Verfügung.
b) Bare Metal C

================================================================

        *(feld + i) = 100 + i;
00007FF6470A71CA  mov         eax,dword ptr [rbp+64h]             // Code Segement
00007FF6470A71CD  add         eax,64h  
00007FF6470A71D0  movsxd      rcx,dword ptr [rbp+64h]  
00007FF6470A71D4  mov         rdx,qword ptr [feld]  
00007FF6470A71D8  mov         dword ptr [rdx+rcx*4],eax  
        // identisch
        feld [i] = 100 + i;
00007FF6470A71DB  mov         eax,dword ptr [rbp+64h]  
00007FF6470A71DE  add         eax,64h  
00007FF6470A71E1  movsxd      rcx,dword ptr [rbp+64h]  
00007FF6470A71E5  mov         rdx,qword ptr [feld]  
00007FF6470A71E9  mov         dword ptr [rdx+rcx*4],eax  


===========================================

Resumee

===========================================

Ein Programm wird "gestartet":

Starten:  Betriebssystem  :  CreateProcess

          Loader // Lader   ==>  .exe:   Meta-Daten

                                         Wieviele glob. Variablen
                                         Wie groß soll der Stack sein ?? Default ??
                                         Wie groß ist (in Bytes) der Maschinencode?

                        Lader: Allokiert Speicher:  CS, ES, SS, DS

                                        IP   ==> Adresse der main-Funktion.

===========================================

Dynamischen Daten:   HEAP SEGMENT    //  Memory leak

Globalen Daten:      DATA SEGMENT    // Größe ist in den Meta-Daten verfügbar.

Lokale Variablen:    STACK SEGMENT   // Ist nur für kleine Daten zu verwenden (Zwischenergebnisse)


Dynamische Variablen:  malloc , free

                Charme: Sie werden angelegt (malloc), wenn sie benötigt werden
                        Sie werden freigegeben (free), wenn sie NICHT benötigt werden

===========================================

4717: 'bonbon': recursive on all control paths,
function will cause runtime stack overflow  <============ 

=========================================================
=========================================================

Aufgabe:

Wir wenden uns noch einmal der Zinsrechnung zu:

Dieses Mal wollen wir berechnen, wann sich ein Grundkapital
bei fester Verzinsung und Zinsakkumulation verdoppelt hat.

Beispiel:

int doubleCapital(double capitalStock, double interestRate);

Parameter: capitalStock: Hier wird das Grundkapital (Startkapital) übergeben 
Parameter: interestRate: Hier wird ein fester Zinssatz übergeben.

Rückgabewert: Anzahl der Jahre, die man benötigt.

Weitere Vorgaben:

== Die Funktion 'doubleCapital' benötigt intern, wieviel Jahre zur Verdopplung
   des Kapitals benötigt werden.

== Die Funktion 'doubleCapital' legt dann intern ein double-Feld der entsprechenden Länge an
   und speichert in dem Feld die Kapitalentwicklung pro Jahr ab.

== Die Funktion 'doubleCapital' gibt alle Werte auf der Konsole aus.

== Das interne double-Feld wird nach der Ausgabe nicht mehr benötigt.

Beispiel:

void exercise_Dynamic_Zinsen()
{
    double myCapitalStock = 1000.0;
    double myInterestRate = 4.0;

    printf("CapitalStock: %.2f, CapitalStock: %.2f\n", myCapitalStock, myInterestRate);

    int years = doubleCapital(myCapitalStock, myInterestRate);

    printf("Needed %d years.\n", years);
}

Ausgabe:


CapitalStock: 1000.00, CapitalStock: 4.00
 0. Year: 1040.00
 1. Year: 1081.60
 2. Year: 1124.86
 3. Year: 1169.86
 4. Year: 1216.65
 5. Year: 1265.32
 6. Year: 1315.93
 7. Year: 1368.57
 8. Year: 1423.31
 9. Year: 1480.24
10. Year: 1539.45
11. Year: 1601.03
12. Year: 1665.07
13. Year: 1731.68
14. Year: 1800.94
15. Year: 1872.98
16. Year: 1947.90
17. Year: 2025.82
Needed 18 years.

Vorsicht:

Intern:  double  capital [200];  // Neeeeeeee  // Pass-genaues Feature

===========================================================================

char: Ist ein Datentyp für EIN Zeichen

Zwischen den beiden Datentypen char und int gibt es eine Beziehung:

Das fällt nicht in die Schublade Typkonvertierung.


Was ist ein Formfeed:

Wagen:   Formfeed: eins nach unten

Wagenrücklauf:

Es gibt in der ASCII Tabelle zwischen 0 und 31 Sonderzeichen.


=========================================================

char* s = "1234567890";

Wie ist eine solche Zeichenkette definiert ???

2 Aussagen:

A) Über ihr Anfangsadresse !

B) Eine Zeichenkette muss am Ende ein Sonderzeichen haben, dass quasi für das Ende steht.
   Dies ist die binäre Null: 0 oder '\0' oder terminierende Null

char* s = "ABC";

Wie lange ist diese Zeichenkette ??? 
Wo steht die Länge der Zeichenkette ??? NIRGENDS !!!
Man muss das Ende suchen und die Zeichen zählen.

=======================================================

Man kann eine Zeichenkette auch mit dem Begriff des Felds definieren:

char s[] = "ABC";

Eine Zeichenkette kann als Feld gesehen werden;
Sie muss auch hier durch die terminierende Null beendet werden.

=======================================================

Es gibt 2 Definitionen von Zeichenketten:

char* s = "ABC";   // Hier ist s nur ein ZEIGER, die Zeichen liegen WOANDERS (READ-ONLY SEGMENT)

Wo liegt "ABC"

NICHT am Stack
NICHT am Heap  // malloc

Antwort: In einem globalen Datensegment: READ-ONLY  // WRITABLE

------------------------------------------------------

char s[] = "ABC";   Hier liegen alle Daten am STACK

------------------------------------------------------

Möglichkeit, um Abstürze zu vermeiden:

static void tueEtwasMitEinerZeichenkette( const char* s)

Jetzt werden die Daten HINTER der Adresse als UNVERÄNDERBAR angesehen, weil const

=========================================================

Ooops, ich vergaß:

Ich hätte da noch sagen sollen:

Bei einem Feld steht der Name (kette2) für die ADRESSE / ANFANGSADRESSE:
Da - bei Feldern - lässt man das & weg !!!!!!!!!!!!!!!!!!


    int n = 123;

    char kette2[4] = "AEG";

    tueEtwasMitEinerZeichenkette(kette2);

    tueEtwasMitEinerZeichenkette(& n);

=========================================================

 TDD:      ===> Test Driven Development


 =========================================================

 wandleInGrossbuchstabenUm:

 Ist das dein Ernst - muss ich das so machen:  ====> CRT -  C - Laufzeitbibliothek

 strlen
 islower
 toupper

  =========================================================

 Online Compiler

 Wandbox

 https://wandbox.org/

=========================================================

Strukturierung von Daten:

a) elementare Datentypen.
b) Felder: Ansammlung (dicht im Speicher liegend - ohne Lücken) von Daten desselben Typs
c) Strukturen: Ansammlung von Daten unterschiedlichen Typs

Beispiel: Uhrzeit

Stunden,
Minuten,
Sekunden

int hours;
int minutes;
int seconds;
long milliseconds;

int hours1;
int minutes1;
int seconds1;
long milliseconds1;

int hours2;
int minutes2;
int seconds2;
long milliseconds2;

SYNTAX:

struct NameDerStruktur
{
};

Wie sind ein einer Struktur die einzelnen Variablen im Speicher abgelegt ???

Nicht DICHT hintereinander. Es gibt Lücken!

Um einzelne Variablen EFFIZIENT (CPU) lesen / schreiben / adressieren zu können,
müssen diese - aus Architekturgründen einer CPU / der Hardware - auf vielfachen ihrer Länge liegen:

Alignment / Ausrichtung: Ausrichtung auf geeignete Adressen.

Lücken:  Füllbytes //  Padding.

Man kann durch Vertauschen der Reihenfolge Platz in einer Struktur sparen.

Geht. Könnte die Lesbarkeit / Sinnhaftigkeit verloren gehen.

Kann der Compiler das machen?

==> Darf der Compiler an der Reihenfolge im Speicher nichts ändern: Nein.

=============================================================================

Wie wird ein Feldvariable in C übergeben?

i) Ein Feldname steht für die ADRESSE:

   ==> Wird hier eine Adresse übergeben

ii) Wie wird eine Strukturvariable in C übergeben?

   ==> Als Kopie - so wie elementare Variablen.

Achtung: Ist es bei elem. Variablen zu einer Kopie gekommen: Nicht so schlimm.

Wird eine Strukturvariable als Kopie übergeben: Das kostet unnütze Laufzeit.

Ausnahme:  Ich will, dass der Client nicht auf meinem ORIGINAL arbeitet.

======================================


    now = end;  // Wertzuweisung von Strukturvariablen
00007FF79D8D7F99  lea         rax,[now]  
00007FF79D8D7F9D  lea         rcx,[end]  
00007FF79D8D7FA1  mov         rdi,rax  
00007FF79D8D7FA4  mov         rsi,rcx  
00007FF79D8D7FA7  mov         ecx,0Ch     // 12  : time: 3 * int = 12 Bytes
00007FF79D8D7FAC  rep movs    byte ptr [rdi],byte ptr [rsi]  

Was ist  rep movs
======================================

"Library schützen"

void foreignLibFunction (struct Data*);

A)  void foreignLibFunction (const struct Data*);

B)  void foreignLibFunction (struct Data);  // hier wird eine Kopie übergeben.

------------

In C gibt es für Strukturen DIREKT keinen Schutz der Variablen.
 
========================================

Wertebereich von short:  2 Byte

short:

-32.768 bis 32.767

unsigned short:

0 .. 65.535


========================================



_Must_inspect_result_
NTKERNELAPI
NTSTATUS
KeSetTargetProcessorDpcEx (
    _Inout_ PKDPC Dpc,
    _In_ PPROCESSOR_NUMBER ProcNumber
    );

typedef PPROCESSOR_NUMBER unsigned int;   // falsch geraten ....

// unsigned short: 16 Bits ...
typedef USHORT unsigned short;

typedef struct _PROCESSOR_NUMBER {
  USHORT Group;   // Die Nummer der Prozessorgruppe (0 bis n-1)
  UCHAR  Number;  // Die relative Prozessornummer innerhalb dieser Gruppe
  UCHAR  Reserved; // Reserviert für zukünftige Verwendung
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER;


========================================

Strukturen in C:

Diese ermöglichen es, objekt-orientierten Flavour in C zu ermöglichen. 

Objekt-Orientierung für Arme

Vorraussetzung:  Wir halten uns an selbst auferlegte Regeln // C unterstützt uns hierbei NICHT.

// Klassen:

// Methoden // Funktionen
// Daten // Strukturen

// Wie lassen sich die Methoden (Funktionen) mit einer Klasse (Struktur) verbinden ???

   Funktionen, die als ERSTEN Parameter einen Zeiger auf die Struktur haben.

// Initialisierung / Konstruktoren


1. Regel: Wir greifen NICHT direkt auf die Variablen einer Struktur zu // SCHUTZ
          Ausschließlich über Funktionen (Methoden)

2. Regel: Wenn die Daten der Struktur nicht verändert werden, dann ist const zu verwenden: Read-Only Verhalten

================================================================================

1. Datei:  Header-Datei

           Daten und Funktionen beschreiben.
           Wallet.h


2. Datei:  Realisierung der Funktionen
           WalletImpl.c

           Möglicherweise ergänzt um private (static) Hilfsfunktionen

3. 4. 5.  Datei:

        Anwendung:

        a) Objekte (Strukturvariablen) anlegen (Wallet)
        b) Auf diesen mit den Funktionen arbeiten 

Kapselung: Recht gut imitierbar ...

extern void addEurosToWallet   (      Wallet* wallet, unsigned int euros);   // Euros in den Geldbeutel legen
extern int  subEurosFromWallet (      Wallet* wallet, unsigned int euros);   // Euros rausnehmen - WENN ES DENN GEHT - 0 = Fehler, 1 : Succes
extern int  compareWallets     (const Wallet* leftWallet, const Wallet* rightwallet);  // Zero if leftWallet and rightwallet compare equal.

Wallet:

A) Ich wollte eine Übung zu Strkturen.

B) Ich wollte eine anschauliche, einfache Übung haben.

===> addEurosAndCents (5,  300);  

Wie würde man am BESTEN eine solche Klasse Wallet realisieren: Produkt SW

struct wallet
{
    // Euros
    unsigned int euros; // euros
    unsigned int cents; // Cents
};

So nicht ........

BESSER:

struct wallet
{
    unsigned int totalCents;
};

Arghhhhh: Jetzt habe ich eine Struktur mit EINER Variablen ?!?!





=============================================================================

== Low-Level Programmierung in C
     Operatoren zur Bitmanipulation: &, |, ^ und ~


4 Operatoren: Bitmanipulation: &, |, ^ und ~

=============================================================================

Reverse Engineering
-------------------

Copilot

=======================================================

Strukturierung:  Daten

== Felder
== Struktur

== Bitfelder
== Unions
== Aufzählungstypen

=======================================================

Was ist ein Bitfeld?

Was ist eine Union?

Wie eine Struktur, nur alle Variablen liegen im Speicher an DERSELBEN Stelle.

union SecondUnionExample
{
    unsigned int  value;              // int = 4 Bytes
    unsigned char bytes_of_value[4];  // sizeof (unsigned int)
};

=======================================================

Der Aufzählungstyp (Pascal)

// C vom ersten Tag

#define LOW    1
#define MEDIUM 2
#define HIGH   3

Das kann man anders machen:

Vor allem dann, wenn diese Werte zusamengehören:

enum level
{
    Low,
    Medium,
    High
};

Was ist die Intention: Einen Vergleich oder das Festhalten einer Information
mit einem NAMEN und nicht mit einem Wert (0, 1, 2, ...)

Symbolische Konstante


=========================================================

if, while, for (do-while)

switch:

Ist ähnlich zu einer if - else - Kaskade:

Bei langen  if - else - Kaskaden eine Alternative (möglicherweise schneller)

SYNTAX:


    switch ( value  )               // value ist in der Regel eine Variable vom Typ  int, long, KEIN float, KEIN "ABC"
                                    // keine Adresse wie int*
                                    // value: int ==> 1, 20, 100, NICHT: 3.0
    {
    case konstante_1:
        printf("Low Level\n");
        break;   // jmp  : Sichtbarkeit des OpCodes jmp via break;
    case konstante_2:
        printf("Medium Level\n");
        break;
    case konstante_3:
        printf("High Level\n");
        break;
    }

    int value;   // den Wert 1  // konstante_1 ist 1

    Was ist die Entscheidung:

    == Wann if - else - Kaskade
    == Wann switch

    1.) So ab 4 bis 5 Verzeigungen wäre vielleicht switch besser

    2.) Compiler / Linker / Maschinencode / Debugger / Optimizer (Optimierer):

    Das ist eigentlich egal, weil:  (Release): Optimizer

    3.) Lesbarkeit: 

===========================================================

Blockschachtelung

Scope // Bereich

Whyyyyyyyyyyyyyyyyy

===========================================================

Finale:
------

https://github.com/pelocpp/c_introduction/blob/master/C_Introduction/Exercises/Contacts/Exercises_Contacts.md


-- Felder
-- Strukturen
-- Globale , lokale und dyn. Variablen
-- Zeichenketten
-- Schachtelung von Kontrollstrukturen


Handys ==> Kontakte-App  

Eine Art Kontakte-Verwaltung:   Name und Tel.Nr.

== Hinzufügen
== Ausgeben
== Suchen

Design:

== Einen Kontakt
== Alle Kontakte

Struktur Contact

Wie erkenne ich freie Plätze in der globalen Variablen   

Contact g_contacts[MaxContacts]; ?

Ad-Hoc: Viele Lösungen.

Sauber: Da nehmen wir ein Flag.


Zu den String-Funktionen:

strcpy_s(Destination, Länge dieser Destination, Quelle);

strcmp  (erste Zeichenkette, zweite Zeichenkette); 0 : Die Strings sind gleich.

Ende :)

======================================================================
