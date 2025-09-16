
class Program
{
    public static void Main()
    {
        int T=int.Parse(Console.ReadLine());
        List<int> Sums = new List<int>();
        for (int i=0;i<T;i++)
        {
            string[] Case =Console.ReadLine().Split(' '); 
            Sums.Add(int.Parse(Case[0])+int.Parse(Case[1]));
        }

        foreach (var sum in Sums)
        {
            Console.WriteLine($"{sum}");
        }
    }
}
