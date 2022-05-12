cmake_minimum_required(VERSION 3.21)
project(the_cpp_challange)

set(CMAKE_CXX_STANDARD 14)

include_directories(LearnC++)

add_executable(the_cpp_challange
		LearnC++/abundantNumbers.cpp
		LearnC++/abundantNumbers.hpp
		LearnC++/amicableNumbers.cpp
		LearnC++/amicableNumbers.hpp
		LearnC++/armstrongNumbers.cpp
		LearnC++/armstrongNumbers.hpp
		LearnC++/collatzSequence.cpp
		LearnC++/collatzSequence.h
		LearnC++/greatestDivisor.cpp
		LearnC++/greatestDivisor.hpp
		LearnC++/leastCommonMultiple.cpp
		LearnC++/leastCommonMultiple.hpp
		LearnC++/main.cpp
		LearnC++/romanNumerals.cpp
		LearnC++/romanNumerals.h
		LearnC++/primes.cpp
		LearnC++/primes.h
		LearnC++/sumOfNaturals.cpp
		LearnC++/sumOfNaturals.hpp)
