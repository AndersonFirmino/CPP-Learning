/*
* Formas que podemos criar classes em C++
*/
#include <iostream>

using namespace std;
/*
Podemos declarar os objetos logo após definir a classe conforme podemos ver no caso logo abaixo. Neste caso teremos a variável rect criada como um objeto conforme estabelecido pelo modelo definido pela palavra chave class. Este tipo de declaração é mais usual para  objetos criados globalmente, pois a inclusão desta declaração no cabeçalho pode fazer com que vários objetos sejam criados com o mesmo nome quando o cabeçalho é invocado de vários arquivos. Portanto, é mais prudente usar esta opção quando a declaração está no arquivo fonte e não no cabeçalho.


class CRectangle {
    // por padrão em cpp as variaveis de uma classe ficam pro
    int x, y;
public:
    void set_values(int, int);
    int area (void);
} rect;
*/

/*
apresentado logo abaixo, podemos declarar objetos apenas quando precisarmos. Esta opção de declarar o objeto depois é a mais usada, pois na maioria das vezes temos o modelo dos objetos, a classe, declarada em um arquivo de cabeçalho enquanto que os objetos serão criados no resto do código fonte. Desta forma é mais usual criar as classes em cabeçalhos e depois declarar os objetos na parte do programa que for mais conveniente.
*/

/*
Dica de quando geralmente usar um ou outro:
Há dois métodos para definir as funções membro:
Eles podem ser definidos dentro da classe, o que é apropriado para funções pequenas;
E funções grandes podem ser definidas fora da classe.
Neste caso terão de ser identificadas como pertencentes à classe e para isso utilizamos o operador de resolução de escopo “::”.

Textos retirados do wikipedia.
https://pt.wikibooks.org/wiki/Programar_em_C%2B%2B/Classes
*/

class CRectangle {
    int x, y;
 public:
    void set_values (int,int);
    int area (void);
 };

 int main() {
  CRectangle rect;
 }
