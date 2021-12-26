res=Matrix1=Matrix2=[[]]*3

for _ in range(3):
   Matrix1[_]=list(map(int,input(f'Enter row no {_} elements::').split()))
   mat1=Matrix1
Matrix2=[[]]*3
for _ in range(3):
   Matrix2[_]=list(map(int,input(f'Enter row no {_} elements::').split()))


for _ in range(2):
    print(f'Entered {_+1} matrix is:::')
    print("\n".join(map(str,globals()[f'Matrix{_+1}'])),"\n")

#addition   
res= [[Matrix1[_][i]+Matrix2[_][i]  for i in range(3)] for _ in range(3)]
print(f'Sum of matrices is:::')
print("\n".join(map(str,res)),"\n")

#subtraction
res= [[Matrix1[_][i]-Matrix2[_][i] for i in range(3)] for _ in range(3)]
print(f'Sub of matrices is:::')
print("\n".join(map(str,res)),"\n")

#multiplication
res=[[sum(a*b for a,b in zip(row,col)) for col in zip(*Matrix1)]for row in Matrix1]
print(f'Mul of matrices is:::')
print("\n".join(map(str,res)),"\n")

#transpose
res=[[a,b,c] for a,b,c in zip(*Matrix2)]
print(f'Transpose of Matrix2 is:::')
print("\n".join(map(str,res)),"\n")
