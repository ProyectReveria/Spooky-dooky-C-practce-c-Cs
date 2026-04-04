using System;

class Fizz_Buzz
{
    enum Fizz_convertion
    {
        fizz,// 5
        buzz,// 7
        fizzbizz, //5 7
    }
    static void Main()
    {
        for (int i = 0; i < 101; i++)
        {
            if (i % 3 == 0)
            {
                Console.WriteLine(Fizz_convertion.fizz);
            }
            else if (i % 5 == 0)
            {
                Console.WriteLine(Fizz_convertion.buzz);

            }else if (i % 3 ==0 & i % 5 == 0)
            {
                Console.WriteLine(Fizz_convertion.fizzbizz);
            }else
            {
                Console.WriteLine(i.ToString());    
            }
        }
    }
}