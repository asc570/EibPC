-----------------------------------------------

Handhabung der Beispiele

------------------------------------------------


1. Allgemeines

2. Unter Windows

3. Unter Linux

4. Unter OSX

5. Beispiele zur Eigennutzung umbauen


---------------------------------------------------


---------------------------------------------------


1. Allgemeines 

---------------------------------------------------

Wenn man die Beispiele ausprobieren m�chte, sollte man zun�chst den EibPC von der KNX-Schnittstelle trennen um nicht wirklich auf die Gruppenadressen zu schreiben.
Um die Beispiele zu testen muss man das EibStudio im entsprechenden Arbeitsordner des jeweiligen Beispieles starten. Wie das funktioniert wird in den folgenden Punkten je nach Betriebssystem erkl�rt.

----------------------------------------------------

2. Unter Windows

----------------------------------------------------

Unter Windows muss man das EibStudio in den Ordner kopieren, indem auch das Beispiel ist und von dort aus starten.

-----------------------------------------------------

3. Unter Linux

-----------------------------------------------------

Unter Linux gibt es 2 M�glichkeiten das EibStudio im entsprechenden Arbeitsordner zu �ffnen.

1. M�glichkeit: 

	Man wechselt in der Konsole in das Verzeichnis indem das Beispiel liegt und startet von dort aus das EibStudio. Das Eibstudio muss dazu nicht zwingend im gleichen Verzeichnis liegen.

2. M�glichkeit:
	
	Man erstellt eine Verkn�pfung des EibStudio: Unter "Neu erstellen" --> "Link to Application"
	Dann tr�gt man in dem Tab "Programm" unter "Befehl" den Pfad zum EibStuio ein und unter "Arbeitsordner" tr�gt man den Pfad ein, in dem das Beispiel liegt

-----------------------------------------------------

4. Unter OSX

-----------------------------------------------------

Unter OSX muss die Gruppenaddresse und die Bibliothekspfade eingetragen werden.

------------------------------------------------------

5. Beispiele zur Eigennutzung umbauen

------------------------------------------------------

Wenn man die Beispiele zur Eigennutzung umbauen m�chte, muss man im EibStudio die eigenen Gruppenadressen der ETS importieren, das geht unter "Datei" --> "Gruppenadressen aus ETS-Exportdatei importieren".
Und dann muss man noch die Gruppenadressen aus dem Beispiel mit den eigenen Gruppenadressen ersetzen. Das geht am Besten �ber "Bearbeiten" --> "Ersetzen", dort tr�gt man bei "Suchen nach" die Gruppenadresse, die man �berschreiben m�chte ein und bei "Ersetzen druch" tr�gt man seine Gruppenadresse ein und dr�ckt "Alle ersetzen".

