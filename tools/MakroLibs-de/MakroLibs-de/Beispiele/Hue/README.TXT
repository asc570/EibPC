Hinweis
-------------------

Der Visualisierungsassistent nutzt die Makros aus der Bibliothek EnertexHue.lib. Daher soll der Visualisierungsassistent 
genutzt werden um einen Beispielcode zu generieren. Eine zum Beispielcode passende ETS-Parameterierung 
finden Sie in der beiligenden Datei ETS-VorlageProjekt_PhilipsHue_Visuassi.knxproj.


ETS4-Projekt zur Philips Hue Lichsteuerung

Dieses ETS4-Projekt enth�lt keine Ger�te. Es sind nur Gruppenadressen angelegt.
Falls Sie diese Gruppenadressen in ihr eigenes ETS-Projekt importieren, dann k�nnen Sie die vom 
Visualisierungsassistenten generierte Webseite f�r die Philips Hue Lichsteuerung mit minimalem Aufwand parametrieren.
Da die importierten Gruppenadressen genau den Gruppenadressen aus der Vorlage des Visualisierungsassistenten 
entsprechen, m�ssen Sie nur noch die IP-Adresse ihres Hue-Bridge im Visualisierungsassistenten anpassen.

Benutzung
  
1. Kopieren sie die Mittelgruppe "Hue" aus der Projektvorlage in ihr pers�nliches Projekt. Dazu 
m�ssen sie in der Gruppenadressen-Ansicht die Mittelgruppe "Hue" ausw�hlen und im Drop-Down-Men� auf "kopieren"
klicken. Danach �ffnen sie neben der Hue Projektvorlage ihr pers�nliches Projekt, wo sie die Gruppenadressen hinzuf�gen wollen.
In ihrem pers�nlichen Projekt m�ssen Sie dann ebenfalls auf die Gruppenadressen-Ansicht wechseln und die Hauptgruppe 14, falls 
noch nicht vorhanden, erstellen. Mit einem Rechtsklick auf diese Hauptgruppe �ffnet sich ein Drop-Down-Men�, wo sie 
schlie�lich den Eintrag "Einf�gen" ausw�hlen. Um Konflikte zu vermeiden, darf in der Mittelgruppe 5 in ihrem pers�nlichen Projekt 
noch keine Gruppenadresse definiert sein. Die angelegten Gruppenadressen sind genau so benannt, wie es der Visualisierungsassistent 
des EibPCs standardm��ig erwartet. 

2. Erstellen sie die Webseiten mit dem Visualisierungsassistenten des Enertex EibPCs. �ffnen sie dazu das Programm EibStudio und 
den darin enthaltenen Visualisierungsassistenten. Es wird hier die Version 3.202 oder h�her ben�tigt. Nun k�nnen Sie die
Seitenvorlagen HueBridgeKonfigurationsseite und HueLampensteuerungsseite verwenden. F�r eine Hue Lichsteuerung ben�tigen Sie immer 
beide Seiten. Falls sie die Gruppenadressen der Projektvorlage aus Punkt 1 beibehalten haben, brauchen 
Sie die Gruppenadressen im Visualisierungsassistenten nicht anpassen, da der Assistent standardm��ig mit den Gruppenadressen 
der Projektvorlage vorbelegt ist. Falls sie die Gruppenadressen aus der Projektvorlage nicht beibehalten haben, dann m�ssen 
sie diese Adressen im Visualisierungsassistenten ebenfalls anpassen. Wenn sie schlie�lich den vom Visualisierungsassistenten 
erzeugten Code in den EibPC einspielen, dann k�nnen Sie ihre Hue-Lichter mit dem Webserver ihres EibPCs steuern.