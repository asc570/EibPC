Hinweis
-------------------

Der Visualisierungsassistent nutzt die Makros aus der Bibliothek EnertexSmarteter.lib. Der Visualisierungsassistent 
soll daher genutzt werden um diesen Beispielcode zu generieren. Eine zum Beispielcode passende Smartmeter ETS-Parameterierung 
finden Sie in der Datei ETS-VorlageProjekt_Smartmeter_Visuassi.knxproj.


ETS4-Projekt für den Smartmeter

In dem ETS4-Projekt ist der Enertex Smartmeter vorparametriert und mit Gruppenadressen verknüpft.
Die entsprechende Vorbelegung mit Gruppenadressen erlaubt es, dass Sie ohne weitere Parametrierung 
mit Hilfe des Enertex EibPC Visualisierungsassistenten Webseiten für ihren Smartmeter erstellen können.
Diese Webseiten ermöglichen eine komfortable Visualisierung ihres Energieverbrauchs bzw. erzeugung, 
der Visualisiserung ihrer Netzqualität und der Visualisierung ihrer Netzoberschwingungen.

Benutzung
  
1. Kopieren sie das Gerät "Enertex KNX Smartmeter" aus der Projektvorlage in ihr persönliches Projekt. Dazu 
müssen sie in der Topologieübersicht das Gerät "KNXSmartmeter" auswählen und im Drop-Down-Menü auf "kopieren"
klicken. Danach öffnen sie neben der Smartmeter Projektvorlage ihr persönliches Projekt, wo sie den Smartmeter hinzufügen wollen.
In ihrem persönlichen Projekt müssen Sie dann ebenfalls auf die Topologie-Ansicht wechseln und die Linie auswählen, wo 
sie den Smartmeter hinzufügen wollen. Mit einem Rechtsklick auf die Linie öffnet sich ein Drop-Down-Menü, wo sie 
schließlich den Eintrag "Inhalte Einfügen" auswählen. Es öffnet sich ein Dialog in dem sie die Option "beibehalten" 
aktivieren sollten, um die vordefinierten Gruppenadressen aus der Projektvorlage in ihr Projekt zu übernehmen.
Dabei werden vordefinierte Gruppenadressen für den Smartmeter in der Hauptgruppe 14 und der Mittelgruppe 7 angegelegt.
Um Konflikte zu vermeiden, darf in dieser Mittelgruppe in ihrem persönlichen Projekt noch keine Gruppenadresse definiert 
sein. Nach Bestätigung der Option wird das Gerät samt Parametrierung und Gruppenadressen in ihr Projekt aufgenommen. Die 
angelegten Gruppenadressen sind genau so benannt, wie es der Visualisierungsassistent des EibPCs standardmäßig erwartet. 
Bevor sie den KNX Smartmeter nun programmieren, müssen sie zusätzlich das Kommunikationsobjekt "Datum" und "Uhrzeit" noch 
mit den Gruppenadressen ihres Busses verknüpfen.

2. Erstellen sie die Webseiten mit dem Visualisierungsassistenten des Enertex EibPCs. Öffnen sie dazu das Programm EibStudio und 
den darin enthaltenen Visualisierungsassistenten. Es wird hier die Version 3.023 oder höher benötigt. Nun können Sie eine 
der drei Seitenvorlagen (EnertexSmartmeterEnergiezaehler, EnertexSmartmeterNetzanalyse, EnertexSmartmeterOberschwingungen)
verwenden, die für den Enertex Smartmeter erstellt wurden. Falls sie die Gruppenadressen der Projektvorlage aus Punkt 1 
beibehalten haben, brauchen Sie die zu visualisierenden Gruppenadressen für die Messgrößen nicht im Visualisierungsassistenten 
anpassen, da der Assistent standardmäßig mit den Gruppenadressen des Projektvorlage vorbelegt wird. Falls sie die 
Gruppenadressen aus der Projektvorlage nicht beibehalten haben, dann müssen sie diese Adressen im Visualisierungsassistenten 
ebenfalls anpassen. Wenn sie schließlich den vom Visualisierungsassistenten erzeugten Code in den EibPC einspielen, dann 
sehen Sie auf dem Webserver ihres EibPCs die visualisierten Messgrößen.