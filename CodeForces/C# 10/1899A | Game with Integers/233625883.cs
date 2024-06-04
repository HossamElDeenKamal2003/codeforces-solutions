using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
class clsSolve
{
    private int _t, _num;
 
    private void SetT()
    {
        _t = Convert.ToInt32(Console.ReadLine());
    }
 
    private int GetT()
    {
        return _t;
    }
 
    private void SetNum()
    {
        _num = Convert.ToInt32(Console.ReadLine());
    }
 
    private int GetNum()
    {
        return _num;
    }
 
    public void solve()
    {
        SetT();
        int testCases = GetT();
        while (testCases-- > 0)
        {
            SetNum();
            int number = GetNum();
            if (number % 3 == 1 || number % 3 == 2)
                Console.WriteLine("First");
            else
                Console.WriteLine("Second");
        }
    }
}
 
namespace nolifer
{
    class Program
    {
        static void Main(string[] args)
        {
            clsSolve solve = new clsSolve();
            solve.solve();
            Console.ReadLine();
        }
    }
}