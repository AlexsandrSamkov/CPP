echo "[ REPLACE SYMBOL ARGS: x l t1.txt ]"
./sedIsForLosers x l t1.txt
echo "ORIGINAL FILE:"
cat -e t1.txt
echo
echo "-------------------------------------------"
echo "REPLACE FILE:"
cat -e t1.txt.replace
echo
echo "-------------------------------------------"
echo "[ REPLACE WORLD ARGS: hello privet t2.txt ]"
./sedIsForLosers hello privet t2.txt
echo "ORIGINAL FILE:"
cat -e t2.txt
echo "-------------------------------------------"
echo "REPLACE FILE:"
cat -e t2.txt.replace
echo "-------------------------------------------"
echo "[ REPLACE EMPTY: hello \"\" t1.txt ]"
./sedIsForLosers hello "" t1.txt
echo "-------------------------------------------"
echo "[ REPLACE NO ARGS: ]"
./sedIsForLosers
echo "-------------------------------------------"
echo "[ REPLACE NO FILE: x l t.txt ]"
./sedIsForLosers x l t.txt
echo "-------------------------------------------"