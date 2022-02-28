#pragma once

template<typename T>
void swap_using_template(T& a, T& b)
{
	a = a + b;
	b = a - b;
	a -= b;
}