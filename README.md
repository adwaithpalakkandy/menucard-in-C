# Mini_Project_MENU
Built as a mini-project to practice switch-case, loops, and basic billing logic in C.

# EGGPLOSION CAFE – Restaurant Billing System
A simple command-line cafe ordering and billing application written in C.

## Features
- Interactive menu card with 5 items and their rates
- Order multiple items in a single session (repeat selection in a loop)
- Automatically tracks quantity ordered per item
- Live cart preview shown after every item added
- Checkout screen displaying a summary of all items ordered
- Generates an itemized bill at payment
- Calculates GST (18%) and final grand total

## How it works
1. The program displays the **BUNK CAFE** menu card with 4 items and prices:
   - ====SIGNATURE MENU====

    -1.EGG FRIES    180rs 
    -2.EGG BURGIE    90rs 
    -3.EGG MASALA    90rs 
    -4.EGG PIZZA    250rs 
    -5.EGG BURGER    320rs 
   
   
3. The user selects an item number (1–4) to add it to the cart; each selection increases that item's quantity by 1.
4. After every selection, the program prints the current cart so the user can track their order.
5. The user can keep selecting items (1–4), or choose:
   - `6` – Checkout, which shows a summary of the cart and asks to proceed to payment (`1`)
   - `7` – Exit
6. Once checkout is confirmed with `1`, the program prints:
   - A breakdown of all items ordered with quantity and rate
   - Total, GST (18%), and Grand Total

## Sample Run
Ordering food and building the cart:
<img width="1133" height="235" alt="Screenshot 2026-08-01 at 11 48 34 AM" src="https://github.com/user-attachments/assets/c8ab866c-3738-40c5-8644-e9f3a4307cdb" />

Checkout and final bill with GST:

<img width="382" height="499" alt="image" src="https://github.com/user-attachments/assets/6d05a7ec-8721-4608-932e-3d364ec8c87d" />

<img width="331" height="166" alt="Screenshot 2026-08-01 at 12 01 37 PM" src="https://github.com/user-attachments/assets/f2bf0d13-038d-432c-98a6-e70401ec877c" />


## Concepts used
- `switch` statements for menu selection
- `do-while` loop for repeated ordering
- Basic billing/tax computation

## How to compile and run
```bash
gcc cafe_menucard.c -o cafe_menucard
./cafe_menucard
```





