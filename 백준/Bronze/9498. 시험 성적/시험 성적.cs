
class Program
{
    public static void Main()
    {
        string TestScore = Console.ReadLine();
        int Score = int.Parse(TestScore);

        if (Score >= 90)
        {
            Console.WriteLine("A");
        }
        else if (Score >= 80)
        {
            Console.WriteLine("B");
        }
        else if (Score >= 70)
        {
            Console.WriteLine("C");
        }
        else if (Score >= 60)
        {
            Console.WriteLine("D");
        }
        else
        {
            Console.WriteLine("F");
        }

    }
}
