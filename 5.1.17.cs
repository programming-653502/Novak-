using System;
using System.Collections.Generic;
using System.Linq;

namespace ConsoleApp1
{
    class Program
    {
        static void CreateStack (int [] mass,  int massCount, int massSecondCount)
        {
            var MyStack3 = new Stack<int>();

            for (int i = 0; i < mass.Length; i++)
            {
                MyStack3.Push(mass[i]);
            }

            Console.WriteLine("Stack");
            while (MyStack3.Count > 0)
                Console.WriteLine(MyStack3.Pop());
        }
        static void SortArray(int[] mass)
        {
            for (int i = 0; i < mass.Length - 1; i++)
            {
                for (int k = 0; k < mass.Length - 1; k++)
                {
                    if (mass[k] < mass[k + 1])
                    {
                        int temp = mass[k + 1];
                        mass[k + 1] = mass[k];
                        mass[k] = temp;
                    }
                }
            }
        }

        static void Main(string[] args)
        {
            Random rnd = new Random();
            var MyStack = new Stack<int>();
            var MyStack2 = new Stack<int>();

            for (int i = 0; i < 20; i++)
            {
                MyStack.Push(rnd.Next(1, 25));
                MyStack2.Push(rnd.Next(1, 25));
            }

            int massCount = MyStack.Count;
            int massSecondCount = MyStack2.Count;
            int[] mass = new int[massCount+massSecondCount];

            for (int i = 0; i < massCount; i++)
                mass[i] = MyStack.Pop();

            for (int i = massCount; i < massSecondCount+massCount; i++)
                mass[i] = MyStack2.Pop();

            int[] result = mass.Distinct().ToArray();

            SortArray(result);
       
            CreateStack( result, massCount, massSecondCount);
            Console.ReadKey();
        }
    }
}
