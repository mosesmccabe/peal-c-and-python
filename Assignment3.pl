#!/usr/bin/perl

$s1 = 1;
while($s1 == 1)
{
print "\nA list of Products\n";
print "Widgets cost \$10.25\n";
print "Gidgets cost \$5.75\n";
print "Gadgets cost \$11.33\n";
print "Doodads cost \$44.75\n";
print ("\nHit Any Key To Cont.\n");
$s2 = <STDIN>;

print "1 of 4 - Enter Amount of Widgets @ \$10.25:  ";
$widgets = <STDIN>;
chop $widgets;
if ($widgets < 0)
{
   $widgets *= -1;
} 

print "2 of 4 - Enter Amount of Gidgets @ \$5.75:  ";
$gidgets = <STDIN>;
chop $gidgets;
if ($gidgets < 0)
{
   $gidgets *= -1;
}

print "3 of 4 - Enter Amount of Gadgets @ \$11.33:  ";
$gadgets = <STDIN>;
chop $gadgets;
if ($gadgets < 0)
{
   $gadgets *= -1;
}

print "4 of 4 - Enter Amount of Doodads @ \$44.75:  ";
$doodads = <STDIN>;
chop $doodads;
if ($doodads < 0)
{
   $doodads *= -1;
}

# computation --> subtotal
$subWidgets = $widgets * 10.25;
$subGidgets = $gidgets * 5.75;
$subGadgets = $gadgets * 11.33;
$subDoodads = $doodads * 44.75;

$total = $subWidgets + $subGidgets + $subGadgets + $subDoodads;
$saleTax = $total * 0.85;
$shipping = $total * 0.1;
$grandTotal = $total + $saleTax + $shipping;


# Format calculation
$subWidgets = sprintf("%0.2f", $subWidgets);
$subGidgets = sprintf("%0.2f", $subGidgets);
$subGadgets = sprintf("%0.2f", $subGadgets);
$subDoodads = sprintf("%0.2f", $subDoodads);
$total = sprintf("%0.2f", $total);
$saleTax = sprintf("%0.2f", $saleTax);
$shipping = sprintf("%0.2f", $shipping);
$grandTotal = sprintf("%0.2f", $grandTotal);



# Display Results
print ("\n$widgets Widgets @\$10.25         \$$subWidgets");
print ("\n$gidgets Gidgets @\$5.75          \$$subGidgets");
print ("\n$gadgets Gadgets @\$11.33         \$$subGadgets");
print ("\n$doodads Doodads @\$44.75         \$$subDoodads");
print ("\n\nTotal                   \$$total");
print ("\nShipping and Handling   \$$shipping");
print ("\nSales Tax               \$$saleTax\n\n");
print ("Grand Total           \$$grandTotal");

print "\n\nRun Again (1 for Yes, Any Else for No): ";
$s1 = <STDIN>;
chop $s1;
}
