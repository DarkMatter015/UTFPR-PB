Algoritmo "VerificaGenero"

Var
   genero: caractere


Inicio
      escreva("Informe o g�nero (F ou M): ")
      leia(genero)
      
      se (genero = "M") ou (genero = "m") entao
         escreva("Masculino")
      senao
           se (genero = "F") ou (genero = "f") entao
              escreva("Feminino")
           senao
              escreva("Caracter inv�lido")
           fimse
      fimse


Fimalgoritmo