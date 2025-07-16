# Proiect 3 – Structuri de Date în C: Stivă, Liste, Cozi și Vectori

Acest repository conține patru programe scrise în limbajul C, fiecare ilustrând concepte fundamentale despre structuri de date dinamice:

### 1. Inversarea unui șir de caractere folosind o stivă

Programul citește un șir de caractere de la tastatură și îl afișează în ordine inversă, utilizând o stivă implementată cu alocare dinamică. Codul este organizat în funcții pentru:
- inițializarea și eliberarea memoriei
- inserarea caracterelor în stivă
- afișarea în ordine inversă

### 2. Operarea pe liste dublu înlănțuite cu valori reale

Programul creează două liste dublu înlănțuite cu elemente reale (`double`), având funcționalități precum:
- inserarea a `N` și `M` elemente generate aleator
- concatenarea listelor într-o singură structură
- afișarea tuturor valorilor din listă
- determinarea valorii maxime și minime

Valoarea lui `N` este derivată din ziua nașterii, iar `M` din lună, cu ajustări în cazul unor valori mici.

### 3. Gestionarea unui catalog de studenți

Se construiește o listă dublu înlănțuită în care fiecare nod reține datele unui student:
- nume și prenume
- vector de 5 note întregi

Programul calculează și afișează:
- media fiecărui student
- media generală a grupei
- numărul studenților promovați și nepromovați

### 4. Simularea unei cozi de mașini la o stație de alimentare

Programul implementează o coadă simplă cu meniu interactiv și următoarele opțiuni:
- adăugarea unei mașini în coadă
- eliminarea primei mașini
- listarea tuturor mașinilor aflate în așteptare
- filtrare în funcție de combustibil: benzină sau motorină
- afișarea lungimii curente a cozii
