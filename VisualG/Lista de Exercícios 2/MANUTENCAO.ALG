Algoritmo "Manutencao"

Var
   total_pecas, pecas_defeituosas, porcentagem: real


Inicio
      escreva("Informe o total de pe�as produzidas: ")
      leia(total_pecas)
      
      escreva("Informe o total de pe�as defeituosas: ")
      leia(pecas_defeituosas)
      
      porcentagem <- (pecas_defeituosas / total_pecas) * 100
      
      escreval("Porcentagem: ", porcentagem)

      se porcentagem > 10 entao
         escreva("A m�quina precisa de manuten��o")
      senao
         escreva("A m�quina n�o precisa de manuten��o")
      fimse


Fimalgoritmo