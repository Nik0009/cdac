using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DayNo5
{
    internal interface IEmployeeDetails
    {
        int EID { get; set; }

        string Ename { get; set; }

        void setEmpData();
        void GetEmpData();

       
    }
    public class PerEmployee 
    {
        
    }

    public class TempEmployee
    {
        public double GetSalary()
        {
            return 10;
        }

    }

    public class EmployeeDetails : PerEmployee, IEmployeeDetails
    {
        public int EID { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }
        public string Ename { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }

        public void GetEmpData()
        {
            throw new NotImplementedException();
        }

        public void setEmpData()
        {
            throw new NotImplementedException();
        }
    }

}
