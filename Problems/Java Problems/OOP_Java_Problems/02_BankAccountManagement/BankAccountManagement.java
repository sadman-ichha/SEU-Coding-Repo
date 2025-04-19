
public class BankAccountManagement {
    public static void main(String[] args) {
        BankAccount bankAccount1 = new BankAccount(); //  'new' to create object
        bankAccount1.deposit(1000);                   
        bankAccount1.withdraw(5005);                   // Valid withdrawal
        System.out.println("Balance: " + bankAccount1.getBalance());
    }
}


class BankAccount {
    private double balance = 0;

   
    public void deposit(double amount) {
        if (amount > 0)                 // Only allow positive deposits
            balance += amount;
         else 
            System.out.println("Invalid deposit amount.");
        
    }

    public void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
        } else {
            System.out.println("Insufficient balance or invalid amount.");
        }
    }

    public double getBalance() {
        return balance;
    }
}
