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

Wenn man die Beispiele ausprobieren möchte, sollte man zunächst den EibPC von der KNX-Schnittstelle trennen um nicht wirklich auf die Gruppenadressen zu schreiben.
Um die Beispiele zu testen muss man das EibStudio im entsprechenden Arbeitsordner des jeweiligen Beispieles starten. Wie das funktioniert wird in den folgenden Punkten je nach Betriebssystem erklärt.

----------------------------------------------------

2. Unter Windows

----------------------------------------------------

Unter Windows muss man das EibStudio in den Ordner kopieren, indem auch das Beispiel ist und von dort aus starten.

-----------------------------------------------------

3. Unter Linux

-----------------------------------------------------

Unter Linux gibt es 2 Möglichkeiten das EibStudio im entsprechenden Arbeitsordner zu öffnen.

1. Möglichkeit: 

	Man wechselt in der Konsole in das Verzeichnis indem das Beispiel liegt und startet von dort aus das EibStudio. Das Eibstudio muss dazu nicht zwingend im gleichen Verzeichnis liegen.

2. Möglichkeit:
	
	Man erstellt eine Verknüpfung des EibStudio: Unter "Neu erstellen" --> "Link to Application"
	Dann trägt man in dem Tab "Programm" unter "Befehl" den Pfad zum EibStuio ein und unter "Arbeitsordner" trägt man den Pfad ein, in dem das Beispiel liegt

-----------------------------------------------------

4. Unter OSX

-----------------------------------------------------

Unter OSX muss die Gruppenaddresse und die Bibliothekspfade eingetragen werden.

------------------------------------------------------

5. Beispiele zur Eigennutzung umbauen

------------------------------------------------------

Wenn man die Beispiele zur Eigennutzung umbauen möchte, muss man im EibStudio die eigenen Gruppenadressen der ETS importieren, das geht unter "Datei" --> "Gruppenadressen aus ETS-Exportdatei importieren".
Und dann muss man noch die Gruppenadressen aus dem Beispiel mit den eigenen Gruppenadressen ersetzen. Das geht am Besten über "Bearbeiten" --> "Ersetzen", dort trägt man bei "Suchen nach" die Gruppenadresse, die man überschreiben möchte ein und bei "Ersetzen druch" trägt man seine Gruppenadresse ein und drückt "Alle ersetzen".

