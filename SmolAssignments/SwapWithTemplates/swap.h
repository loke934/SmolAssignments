#pragma once

template<typename T>
void SwapUsingTemplate(T& a, T& b)
{
	a = a + b;
	b = a - b;
	a -= b;
	
}