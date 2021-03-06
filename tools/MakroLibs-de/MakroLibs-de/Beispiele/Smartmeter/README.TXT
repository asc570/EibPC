Hinweis
-------------------

Der Visualisierungsassistent nutzt die Makros aus der Bibliothek EnertexSmarteter.lib. Der Visualisierungsassistent 
soll daher genutzt werden um diesen Beispielcode zu generieren. Eine zum Beispielcode passende Smartmeter ETS-Parameterierung 
finden Sie in der Datei ETS-VorlageProjekt_Smartmeter_Visuassi.knxproj.


ETS4-Projekt f�r den Smartmeter

In dem ETS4-Projekt ist der Enertex Smartmeter vorparametriert und mit Gruppenadressen verkn�pft.
Die entsprechende Vorbelegung mit Gruppenadressen erlaubt es, dass Sie ohne weitere Parametrierung 
mit Hilfe des Enertex EibPC Visualisierungsassistenten Webseiten f�r ihren Smartmeter erstellen k�nnen.
Diese Webseiten erm�glichen eine komfortable Visualisierung ihres Energieverbrauchs bzw. erzeugung, 
der Visualisiserung ihrer Netzqualit�t und der Visualisierung ihrer Netzoberschwingungen.

Benutzung
  
1. Kopieren sie das Ger�t "Enertex KNX Smartmeter" aus der Projektvorlage in ihr pers�nliches Projekt. Dazu 
m�ssen sie in der Topologie�bersicht das Ger�t "KNXSmartmeter" ausw�hlen und im Drop-Down-Men� auf "kopieren"
klicken. Danach �ffnen sie neben der Smartmeter Projektvorlage ihr pers�nliches Projekt, wo sie den Smartmeter hinzuf�gen wollen.
In ihrem pers�nlichen Projekt m�ssen Sie dann ebenfalls auf die Topologie-Ansicht wechseln und die Linie ausw�hlen, wo 
sie den Smartmeter hinzuf�gen wollen. Mit einem Rechtsklick auf die Linie �ffnet sich ein Drop-Down-Men�, wo sie 
schlie�lich den Eintrag "Inhalte Einf�gen" ausw�hlen. Es �ffnet sich ein Dialog in dem sie die Option "beibehalten" 
aktivieren sollten, um die vordefinierten Gruppenadressen aus der Projektvorlage in ihr Projekt zu �bernehmen.
Dabei werden vordefinierte Gruppenadressen f�r den Smartmeter in der Hauptgruppe 14 und der Mittelgruppe 7 angegelegt.
Um Konflikte zu vermeiden, darf in dieser Mittelgruppe in ihrem pers�nlichen Projekt noch keine Gruppenadresse definiert 
sein. Nach Best�tigung der Option wird das Ger�t samt Parametrierung und Gruppenadressen in ihr Projekt aufgenommen. Die 
angelegten Gruppenadressen sind genau so benannt, wie es der Visualisierungsassistent des EibPCs standardm��ig erwartet. 
Bevor sie den KNX Smartmeter nun programmieren, m�ssen sie zus�tzlich das Kommunikationsobjekt "Datum" und "Uhrzeit" noch 
mit den Gruppenadressen ihres Busses verkn�pfen.

2. Erstellen sie die Webseiten mit dem Visualisierungsassistenten des Enertex EibPCs. �ffnen sie dazu das Programm EibStudio und 
den darin enthaltenen Visualisierungsassistenten. Es wird hier die Version 3.023 oder h�her ben�tigt. Nun k�nnen Sie eine 
der drei Seitenvorlagen (EnertexSmartmeterEnergiezaehler, EnertexSmartmeterNetzanalyse, EnertexSmartmeterOberschwingungen)
verwenden, die f�r den Enertex Smartmeter erstellt wurden. Falls sie die Gruppenadressen der Projektvorlage aus Punkt 1 
beibehalten haben, brauchen Sie die zu visualisierenden Gruppenadressen f�r die Messgr��en nicht im Visualisierungsassistenten 
anpassen, da der Assistent standardm��ig mit den Gruppenadressen des Projektvorlage vorbelegt wird. Falls sie die 
Gruppenadressen aus der Projektvorlage nicht beibehalten haben, dann m�ssen sie diese Adressen im Visualisierungsassistenten 
ebenfalls anpassen. Wenn sie schlie�lich den vom Visualisierungsassistenten erzeugten Code in den EibPC einspielen, dann 
sehen Sie auf dem Webserver ihres EibPCs die visualisierten Messgr��en.