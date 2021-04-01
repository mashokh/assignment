/*first*/

select role "Role", max(salary) "Max Salary"
from Employees
group by role;

/*second*/

select name "Employee Name", surname "Employee Surname",
role "Role", max(salary) "Max Salary"
from employees
group by role, name, surname;

/*third*/

select role "Role", sum(salary) "Salary"
from employees
where salary > 300
and salary < 600
group by role;

/*fourth*/

select PriceListId "PriceList", count(*)  "DublicatesCount"
from employees
group by PriceListId
having count(*) > 1;

/*fifth*/

select PriceListId "PriceList", ProductId "Product", count(*)  "DublicatesCount"
from employees
group by PriceListId, ProductId
having count(*) > 1;




