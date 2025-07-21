def main():
    
    def calculate_tip(bill_amount, tip_percent=15) -> int:
        return bill_amount * (1+(tip_percent/100))

    bill_amount = int(input("Enter Bill Amount: "))

    print(calculate_tip(bill_amount))




if __name__ == "__main__":
    main()

