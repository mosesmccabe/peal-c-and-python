#!/usr/bin/python
import os

# This is an example of the same program
# run in c and other programming languages

# Variables
Gidgets = 17.55
Gadgets = 10.00
Widgets = 8.45
Wabbits = 5.55
Tax = 0.0875
Shipping = 0.10

replay = 1
count = 0



while replay == 1:
    count += 1
    numGidgets = 0
    numGadgets = 0
    numWidgets = 0
    numWabbits = 0

    subGidgets = 0
    subGadgets = 0
    subWidgets = 0
    subWabbits = 0
    
    os.system('clear')
    # Display Products
    print "\n\t\tAssignment5\n\tPython Programming and Execution\n\n"
    print "Gidgets = $17.55 each"
    print "Gadgets = $10.00 each"
    print "Widgets = $8.45 each"
    print "Wabbits = $5.55 each\n"
    pause = raw_input("Hit Any Key to Continue: ")
    print ""
	    
    # Get user input
    userName = raw_input("1 of 6 - Customer Name: ")
    userName = userName.upper()
    userID = raw_input("2 of 6 - Customer ID: ")
    userID = userID.upper()
    numGidgets = int(input("3 of 6 - Enter amount of Gidgets @ $17.55:  "))
    numGidgets = abs(numGidgets)
    numGadgets = int(input("4 of 6 - Enter amount of Gadgets @ $10.00:  "))
    numGadgets = abs(numGadgets)
    numWidgets = int(input("5 of 6 - Enter amount of Widgets @ $8.45:  "))
    numWidgets = abs(numWidgets)
    numWabbits = int(input("6 of 6 - Enter amount of Wabbits @ $5.55  "))
    numWabbits = abs(numWabbits)
    
    # Computation
    subGidgets = numGidgets * Gidgets
    subGadgets = numGadgets * Gadgets
    subWidgets = numWidgets * Widgets
    subWabbits = numWabbits * Wabbits

    subTotal = subGidgets + subGadgets + subWidgets + subWabbits

    saleTax = subTotal * Tax
    shippingAndHandling = subTotal * Shipping

    total = subTotal + saleTax + shippingAndHandling
   
    os.system('clear')
    print "\n\t\tAssignment5\n\tPython Programming and Execution\n\n"
    print 'Order #', count
    print 'Customer ID ', userID, "\t", 'Name: ', userName
    
    if numGidgets > 0:
        print "%i Gidgets @ $17.55 \t $%0.2f" %(numGidgets, subGidgets)
    if numGadgets > 0:
        print "%i Gadgets @ $10.00 \t $%0.2f" %(numGadgets, subGadgets)
    if numWidgets > 0:
        print "%i Widgets @ $8.45 \t $%0.2f" %(numWidgets, subWidgets)
    if numWabbits > 0:
        print "%i Wabbits @ $5.55 \t $%0.2f" %(numWabbits, subWabbits)

    if subTotal > 0:
   	 print "\nSubtotal \t $%0.2f" % (subTotal)
   	 print "Sale Tax @ 8.75 percent \t $%0.2f" % (saleTax)
   	 print "Shipping @ 10.00 percent \t $%0.2f" % (shippingAndHandling)
         print "----------------------------------------------"
   	 print "Total \t\t $%0.2f\n" % (total)
    else:
         os.system('clear')
         print "\n\t\tAssignment5\n\tPython Programming and Execution\n\n"
         print 'Customer ID ', userID, "\t", 'Name: ', userName
  	 print "\nYou Order Nothing\n\n"
	

    replay = int(input("Replay App (1 - yes, 2 - no):  "))

