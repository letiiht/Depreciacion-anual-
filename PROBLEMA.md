# Depreciacion-anual-
Consideremos el cálculo de la depreciación anual de algún objeto depreciable (un edificio, una máquina, etc).
Existen tres métodos normalmente utilizados para calcular la depreciación, conocidos como:
1. El método de la línea recta,
2. El método del balance de doble declinación y
3. El método de la suma de los dígitos de los años.
Se desea tener un programa que permita seleccionar uno de estos métodos para calcular la depreciación de
cualquier objeto en un determinado tiempo.
El cálculo comenzará con la lectura del valor original (no depreciado) del objeto, la vida del objeto (es decir, el
número de años durante los cuales se depreciará) y un entero que indique cual es el método a usar. La
depreciación anual y el valor residual (no depreciado del objeto) se calcularán y se escribirá para cada año.
Método de la línea recta: El valor original del objeto se divide por su vida (número total de años). El cociente
resultante será la cantidad en que el objeto se deprecie cada año. Ejemplo: Si un coche cuesta $120,000 se
deprecia durante diez años, la depreciación anual sería $120,000/10= 12,000, de modo que el valor del coche
disminuirá en $12,000 cada año. Observe que la depreciación anual es la misma cada año.
Cuando se usa el método del balance doble declinación, el valor del objeto disminuye en un porcentaje
constante cada año. (Por tanto, la cantidad efectiva de depreciación en pesos variara de un año al siguiente).
Para obtener el factor de depreciación dividimos dos entre la vida del objeto. Este valor se multiplica por el
valor del objeto al comienzo de cada año (no por el valor original del objeto) para obtener la depreciación anual.
Ejemplo se desea calcular la depreciación anual de un auto de $120,000 en diez años, el factor de
depreciación será 2/10=0.20 por tanto, la depreciación durante el primer año será: 0.20 X 120,000= 24,000,
segundo año (120,000 - 24,000) =96,000 X 0.20 =19,200 el tercer año (96,000-19,200) =76,800 y así
sucesivamente hasta el año 10.
En el método de la suma de los dígitos de los años el valor del objeto disminuirá en un porcentaje diferente
cada año. El factor de depreciación será una fracción cuyo denominador sea la suma de los dígitos del 1 al n,
donde n representa la vida del objeto. (Para un tiempo de vida de 10 años el denominador será
1+2+3+4+5+6+7+8+9+10=55) Para el primer año el numerador será n. para el segundo (n – 1), para el tercero
(n – 2), etc., la depreciación anual se obtiene multiplicando el factor de depreciación por el valor original del
objeto. Ejemplo: un coche cuyo valor es de $120,000, y su tiempo de vida de diez años, se depreciara durante
el primer año en (10/55)*120,000= 21,818, segundo año (9/55)*120,000= 19,636, y así sucesivamente.

En cada caso mandar a imprimir: valor del objeto, total de años de depreciación, factor de depreciación, año de
depreciación, depreciación y valor actual.
