using System;

namespace atividade
{
	class Program
	{
		public static void Main(string[] args)
		{
			bool resposta;
			string entrada;
			Console.Write("Digite sim ou não:");
			entrada = Console.ReadLine();
			
			if (entrada == "sim")
				,
			{
				resposta = true;
			}
			else  {
				resposta = false;
			}
			Console.WriteLine(resposta);
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
		
	}
}
