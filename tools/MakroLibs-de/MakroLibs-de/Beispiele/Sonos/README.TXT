Hinweis
-------------------

Der Visualisierungsassistent nutzt die Makros aus der Bibliothek EnertexSonos.lib. Daher soll der Visualisierungsassistent 
genutzt werden um einen Beispielcode zu generieren. Eine zum Beispielcode passende ETS-Parameterierung 
finden Sie in der beiligenden Datei ETS-VorlageProjekt_Sonos_Visuassi.knxproj.


ETS4-Projekt für das Sonos-Sound-System

Dieses ETS4-Projekt enthält keine Geräte. Es sind nur Gruppenadressen angelegt.
Falls Sie diese Gruppenadressen in ihr eigenes ETS-Projekt importieren, dann können Sie die vom 
Visualisierungsassistenten generierte Webseite für das SonosSoundSystem mit minimalem Aufwand parametrieren.
Da die importierten Gruppenadressen genau den Gruppenadressen aus der Vorlage des Visualisierungsassistenten 
entsprechen, müssen Sie nur noch die IP-Adresse ihres Sonos-Systems im Visualisierungsassistenten anpassen.

Benutzung
  
1. Kopieren sie die Mittelgruppe "Sonos" aus der Projektvorlage in ihr persönliches Projekt. Dazu 
müssen sie in der Gruppenadressen-Ansicht die Mittelgruppe "Sonos" auswählen und im Drop-Down-Menü auf "kopieren"
klicken. Danach öffnen sie neben der Sonos Projektvorlage ihr persönliches Projekt, wo sie die Gruppenadressen hinzufügen wollen.
In ihrem persönlichen Projekt müssen Sie dann ebenfalls auf die Gruppenadressen-Ansicht wechseln und die Hauptgruppe 14, falls 
noch nicht vorhanden, erstellen. Mit einem Rechtsklick auf diese Hauptgruppe öffnet sich ein Drop-Down-Menü, wo sie 
schließlich den Eintrag "Einfügen" auswählen. Um Konflikte zu vermeiden, darf in der Mittelgruppe 6 in ihrem persönlichen Projekt 
noch keine Gruppenadresse definiert sein. Die angelegten Gruppenadressen sind genau so benannt, wie es der Visualisierungsassistent 
des EibPCs standardmäßig erwartet. 

2. Erstellen sie die Webseiten mit dem Visualisierungsassistenten des Enertex EibPCs. Öffnen sie dazu das Programm EibStudio und 
den darin enthaltenen Visualisierungsassistenten. Es wird hier die Version 3.202 oder höher benötigt. Nun können Sie die
Seitenvorlage SonosSoundSystem verwenden. Falls sie die Gruppenadressen der Projektvorlage aus Punkt 1 beibehalten haben, brauchen 
Sie die Gruppenadressen im Visualisierungsassistenten nicht anpassen, da der Assistent standardmäßig mit den Gruppenadressen 
der Projektvorlage vorbelegt ist. Falls sie die Gruppenadressen aus der Projektvorlage nicht beibehalten haben, dann müssen 
sie diese Adressen im Visualisierungsassistenten ebenfalls anpassen. Wenn sie schließlich den vom Visualisierungsassistenten 
erzeugten Code in den EibPC einspielen, dann können Sie die Seite zur Steuerung ihres Sonos-Systems auf dem Webserver ihres EibPCs 
nutzen.