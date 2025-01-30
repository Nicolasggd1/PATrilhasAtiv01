using System;

namespace Atividade_01
{
	class Program
	{
		public static void Main(string[] args)
		{
			
			
			Console.Write("Digite seu nome:");
	       string nome = Convert.ToString(Console.ReadLine());
			Console.WriteLine(" seu nome é:" + nome);
			
			Console.Write("Digite sua idade:");
	       int idade = Convert.ToInt32(Console.ReadLine());
			Console.WriteLine(" seu idade é:" + idade);
			
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
			
			
		
	}
}

}
