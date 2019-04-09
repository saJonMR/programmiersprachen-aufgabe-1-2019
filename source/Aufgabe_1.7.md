#  Aufgabe 1.7

```
# include <iostream>

int var = 3; //"var" ist immer gültig.

double sum(double a, double b) //"sum" ist immer gültig, "a" und "b" nur in "sum".
{
    return a + b;
}
int square (int var) //"square" ist immer gültig, "var" nur in "square".
{
    return var * var;
}
int main () //
{
    for (int i = 0; i != 100; ++i) { //"i" nur innerhalb der main Methode gültig.
    std :: cout << "i^2 = " << square (i) << ’\n’;
    std :: cout << "i+i = " << sum(i,i) << ’\n’;
    }
    return 0;
}
```

Zur Signatur einer Funktion gehört Rückgabewert und Parameter.

