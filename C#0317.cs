using System;
using static System.Console;    // Console.Writeline에서 Console을 빼도 오류가 나지 않음

namespace String
{
    class MainApp
    {
        static void Main(string[] args)
        {
            Random rand = new Random();
            int num = rand.Next(3);

            Write("1.가위 2.바위 3.보 : ");
            int my = int.Parse(ReadLine());

            if (num == 1 && my == 2 || num == 2 && my == 3 || num == 3 && my == 1)
                Write("이겼습니다");
            else if (num == 1 && my == 3 || num == 2 && my == 1 || num == 3 && my == 2)
                Write("졌습니다");
            else
                Write("비겼습니다");

            
            }
        }
    }

