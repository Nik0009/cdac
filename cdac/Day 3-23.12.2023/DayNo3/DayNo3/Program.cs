using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DayNo3
{
    internal class Program
    {
        class Emp
        {
            //public int id { get; set; }
            //public string name { get; set; }
            //public int deptId { get; set; }
            //public double salary {  get; set; }

            int id;
            string name;
            int deptId;
            double salary;

            dept d;

            public Emp(){}


            public void getdata()
            {
                Console.WriteLine("Enter id:");
                id=int.Parse(Console.ReadLine());
                Console.WriteLine("Enter name:");
                name =Console.ReadLine();
                Console.WriteLine("Enter department id:");
                deptId =int.Parse(Console.ReadLine());
                Console.WriteLine("Enter department name:");
                d=new dept(id,name);
                Console.WriteLine("Enter salary:");
                salary =double.Parse(Console.ReadLine());

            }

            public void display()
            {
                Console.WriteLine("Employee Details:-");
                Console.WriteLine("Employee id:{0}",id);
                Console.WriteLine("Employee name:{0}", name);
                Console.WriteLine("Employee dapartment id:{0}",deptId);
                Console.WriteLine("Employee salary:{0}",salary);
                Console.ReadLine();
            }


            

        }

        class dept
        {
            int did;
            string dname;

            public dept() { }

            public void getdata()
            {

            }
            public void display()
            {

            }
        }


        static void Main(string[] args)
        {
            Emp emp = new Emp();
            emp.getdata();  
            emp.display();

            Console.ReadLine();
        }
    }
}
