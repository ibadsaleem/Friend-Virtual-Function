QUESTION#1
Design and implement a program that shows the relationship between person, student and
professor. Your person class must contain two pure virtual functions named getData() of type void
and isOutstanding() of type bool and as well getName() and putName() that will read and print the
person name. Class student must consist of function name getData (), which reads the GPA of
specific person and isOutstanding() function which returns true if the person GPA is greater than 3.5
else should return false. Class professor should take the respective persons publications in
getData() and will return true in Outstanding() if publications are greater than 100 else will return
false . Your main function should ask the user either you want to insert the data in professor or
student until and unless user so no to add moredata.
QUESTION#2
A company pays its employees weekly. The employees are of four types: Salariedemployees are paid
a fixed weekly salary regardless of the number of hours worked, hourlyemployees are paid by the hour
and receive overtime pay for all hours worked in excess of 40 hours, commissionemployees are paid
a percentage of their sales and base-salaryplus-commissionemployees receive a base salary plus a
percentage of their sales. For the current pay period, the company has decided to reward base-salaryplus-
commission employees by adding 10 percent to their base salaries. The company wants you to
draw UML diagram of the given scenario and do implementation on c++ that performs its payroll
calculations polymorphically.
Your Employee class must have:
- First name, last name and social security number as private data members. Use accesor and mutators to set and get
these values.
- Constructor with first name, last name and ssn number as parameter.
- Pure virtual function named earning with return type double.
- Virtual function named print with return type void, which employee first name, last name and ssn number.
Your salaried Employee must have:
- Earning method which return the salary
- Print method that print the employee detail and employee salary.
Your hourly Employee must have:
- You must take the wage and hours as a parameter using base class initializer.
- Earning methods which returns the salary the employed has worked.
- Print method that print the employee detail and employee salary.
Your commission employee must have:
- You must take the commission rate and gross sale rate as a parameter using base class initializer.
- Earning methods which returns the commission of the employee.
- Print method that print the employee detail and employee commission.
Your base-salary plus-commission employees must have:
- You must take the base salary as a parameter using base class initializer.
- Earning methods which return the base commission of the employee.
- Print method that print the employee detail and employee base salary.
You have to perform upcasting and downcasting, and print the details of each employee type.
