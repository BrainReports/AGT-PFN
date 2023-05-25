import Data.Char

ehTriangulo x y z = if (x+y) > z && (y+z) > x && (x+z) > y then True else False
tipoTriangulo x y z = if (x == y && y /= z) || (x == z && z /= y) || (y == z  && z /= x) then "Isosceles" else if (x == y && y == z) then "Equilatero" else "Escaleno"
triangulo x y z = if ehTriangulo x y z == True then tipoTriangulo x y z else "nao eh um triangulo"


somaPares 0 = 0
somaPares n = if even n then n + somaPares (n-2) else somaPares (n-1)


somaPot2m m n = sum [2^i * m | i <- [0..n]]


primo n = n > 1 && all (\x -> n `mod` x /= 0) [2..(n-1)]


seriePi a = seriePi' a 1 1
seriePi' a n s = if (4/n) > a then s*(4/n) + seriePi' a (n+2) (-s) else 0


lista1 = [1,2,3,4,5]
lista2 = [20,30,40,50,80]
lista3 = [2,4,7,9,1,5,6,6]
lista4 = ["A","a","B","b","C","c"]


nprimeiros 0 xs = []
nprimeiros n [] = []
nprimeiros n (x:xs) = x : nprimeiros (n-1) xs


int2dig n = toEnum (n+48)


dig2int d = (fromEnum d)-48


pertence n [] = False
pertence n (x:xs) = if n == x then True else pertence n xs


intercessao _ [] = []
intercessao [] _ = []
intercessao (x:xs) (y:ys) = if pertence x (y:ys) == True then x:intercessao xs (y:ys) else intercessao xs (y:ys)


inverso [] = []
inverso (x:xs) = inverso xs ++ [x]


nUltimos' _ [] = []
nUltimos' 0 _ = []
nUltimos' n (x:xs) = x: nUltimos' (n-1) xs
nUltimos n (x:xs) = inverso( nUltimos' n (inverso (x:xs)))


soma2 xs [] = xs
soma2 [] ys = ys
soma2 (x:xs) (y:ys) = (x + y):soma2 xs ys


pot2' 0 = []
pot2' n = (2^n) : pot2' (n-1)

pot2 n = inverso (pot2' n)


intercalacao [] (y:ys) = y:ys
intercalacao (x:xs) [] = x:xs
intercalacao (x:xs) (y:ys) |x > y = y:intercalacao (x:xs) ys
                           |y > x = x:intercalacao (y:ys) xs
                           |otherwise = x:y:intercalacao xs ys



menor [x] = x
menor (x:xs) = if x < m then x else m
    where
    m = menor xs


removerElem n [] = []
removerElem n (x:xs) = if n == x then xs else x: removerElem n xs

removerElem2 e xs = [x| x<-xs, x/=e]


ordenar [] = []
ordenar xs = min : ordenar (removerElem min xs)
            where min = menor xs 


ins e [] = [e]
ins e l@(x:xs)  |e == x = l
                |e < x = (e:l)
                |otherwise = (x:ins e xs)
              
                
enesimo n [] = error "Lista vazia"
enesimo 0 _ = error "Nao exite p0"
enesimo 1 (x:xs) = x
enesimo n (x:xs) = enesimo (n-1) xs


repetir 0 m = [0]
repetir 1 m = [m]
repetir n m = m:repetir (n-1) m


numString' 0 = []
numString' n = (int2dig (rem n 10)):(numString' (div n 10))

numString :: Int -> [Char]
numString n = inverso(numString' n)


stringNum' [] = []
stringNum' (x:xs) = dig2int x : stringNum' xs


bin2int' [] _ = 0
bin2int' (x:xs) n = (ord x-48)*2^n + bin2int' xs (n+1)
bin2int xs = bin2int' (inverso xs) 0


int2bin' 0 = []
int2bin' n = chr ((rem n 2)+48) : int2bin' (div n 2)
int2bin n = inverso (int2bin' n)


minusculas [] = []
minusculas (x:xs) = toLower x : minusculas xs
