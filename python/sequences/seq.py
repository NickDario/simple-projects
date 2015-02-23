#comment



def fib(max_fib):
	#print fibonacci numbers < max_fib
	a, b = 0, 1
	while a < max_fib:
		print a
		a, b= b, a+b

def fib_array(max_fib):
	#create an array of fibonacci numbers < max_fib
	aFib = [];
	if(max_fib == 0) :
		return [] 
	#if(max_fib == 1)
#		return [1]
	a, b = 0, 1
	while a < max_fib:
		aFib.append(a)
		a, b= b, a+b
	return aFib;


def fibinary(num):
	aFibinary = [1]
	terms = fib_array(num)
	f_sum = 0
#	i = len(terms)-1
	#while f_sum != num:
	for i in terms[::-1]:
		print terms[i]
		#f_sum += terms[i]
		#if(f_sum > num):
	#		aFibinary.append(0)
#			f_sum -= terms[i]
#		else:
#			aFibinary.append(1)

	return aFibinary
	
	


print("compute the fibonacci code for numbers up to N digits,")
while(1):
	try:
		N = int(raw_input("define N:"));
	except ValueError:	
		print("not a valid input");
		continue;
	break;

print fibinary(N)

#for i in range(N):
#	if(i < 2):
#		continue
#	array = fibinary(i);
#	print "{0} = {1}".format(str(i), ", ".join([str(num) for num in array]))




