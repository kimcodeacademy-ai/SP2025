cmake_minimum_required(VERSION 3.24)
project(SP2025)

set(CMAKE_CXX_STANDARD 17)

add_executable(SP2025 main.cpp)


add_executable(conditions Zadaci1/conditions.cpp)

add_executable(loops Zadaci1/loops.cpp)

add_executable(SedumCifrenBroj 2-Conditions/1-SedumCifrenbroj.cpp)

add_executable(quadraticEquation 2-Conditions/2-QuadraticEquation.cpp)

add_executable(cetiriCifrenKolega 2-Conditions/3-CetiriCifrenKolega.cpp)

add_executable(kreirajKorisnickaSmetka 2-Conditions/4-KreirajKorisnickaSmetka.cpp)

add_executable(najdolgaOtsecka 2-Conditions/5-NajdolgaOtsecka.cpp)

add_executable(palindromPetCifrenBroj 2-Conditions/6-PalindromPetCifrenBroj.cpp)

add_executable(poeniOcenka 2-Conditions/7-PoeniOcenka.cpp)

add_executable(validenDatum 2-Conditions/8-ValidenDatum.cpp)

add_executable(potrosenaStruja 2-Conditions/9-PotrosenaElektricnaEnergija.cpp)

add_executable(specijalenBroj 2-Conditions/10-SpecijalenBroj.cpp)

add_executable(brojTelefon 2-Conditions/11-BrojTelefon.cpp)

add_executable(tikTakBroj 2-Conditions/12-TikTakBroj.cpp)

add_executable(starsInfinitySign 3-Loops/1-StarsInfinitySign.cpp)

add_executable(starsSquareAndDiagonal 3-Loops/8-StarsSquareAndDiagonal.cpp)

