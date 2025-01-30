using System;

namespace atividade_b
{
	class Program
	{
		public static void Main(string[] args)
		{
		
		Console.WriteLine("Digite um numero de ponto flutuante:");
			int meuNumero = Convert.ToInt32(Console.ReadLine());
			Console.WriteLine("seu numero flutuante e:" + meuNumero);
			
			
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}
