using System;

namespace atividade-1
{
	class Program
	{
		public static void Main(string[] args)
		{
		
			
		            Console.Write("Digite o preço do seu produto:");
		             double valor = Convert.ToDouble(Console.ReadLine());
		            
		           
		            Console.Write("digite o desconto em porcentagem:");
		            double porcentagem = Convert.ToDouble(Console.ReadLine())/100;
		            
		            double valorPorcentagem = valor - (valor * porcentagem);
		            Console.WriteLine("o valor do seu produto com desconto é:" + valorPorcentagem);
		            
		            
		            	
		            
		           
		            	
		            
	             	
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
		
	}
}
