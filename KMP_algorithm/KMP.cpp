#include "pch.h"

void prefix_function(const string &sub_str, vector<int> &pref) //Префикс-функция для подстроки.
{
	pref.resize(sub_str.size());
	pref[0] = 0;
	
	for (int i = 1; i < pref.size(); i++)
	{
		int posiiton = pref[i-1];
		while (posiiton > 0 && sub_str[posiiton] != sub_str[i])
			posiiton = pref[posiiton-1];
		pref[i] = posiiton + (sub_str[posiiton] == sub_str[i] ? 1 : 0);
	}
}

void KMP(const string &own_str, const string &sub_str) //Эмуляция реализации выше, т.е. sub_str является префиксом строки own_str
{
	vector<int> pref;
	prefix_function(sub_str, pref);
	int posiiton = 0;
	
	for (int i=0; i<own_str.size(); i++) 
	{
		while (posiiton > 0 && (posiiton >= sub_str.size() || sub_str[posiiton] != own_str[i]) )
			posiiton = pref[posiiton-1];
		
		if (own_str[i] == sub_str[posiiton]) 
			posiiton++;
		
		if (posiiton == sub_str.size())
		printf("%d ", i - posiiton + 1);
 }
 }

