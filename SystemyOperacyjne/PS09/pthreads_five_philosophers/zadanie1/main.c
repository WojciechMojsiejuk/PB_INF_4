/*
1. Napisz rozwiązanie problemu pięciu filozofów z możliwością blokady.
Zaimplementuj pięć widelców przy pomocy pięcioelementowej tablicy muteksów
(funkcje pthread_mutex_lock i pthread_mutex_unlock).
W rozwiązaniu tym filozof o numerze i=0...4 podnosi najpierw widelec lewy
(o numerze i) a następnie widelec prawy (o numerze (i+1)%5).
Zademonstruj prowadzącemu wystąpienie zjawiska blokady.
*/
