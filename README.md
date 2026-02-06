# informatica-uni# LeetCode 15 - 3Sum

## Idea
Dato un array di interi, trovare tutte le triplette uniche che sommano a zero.

L'array viene ordinato e per ogni elemento fissato si utilizza la tecnica dei due puntatori
per cercare le coppie che completano la somma.

## Algoritmo
- Ordina l'array
- Fissa un indice i
- Usa due puntatori l e r per cercare la somma -nums[i]
- Salta i duplicati per evitare triplette ripetute

## Complessità
- Tempo: O(n^2)
- Spazio: O(1) (escluso output)

## Linguaggio
C++
