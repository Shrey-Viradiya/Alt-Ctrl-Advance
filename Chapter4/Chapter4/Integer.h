#pragma once

class Integer
{
	int *m_pInt;
public:
	Integer();
	Integer(int value);
	Integer(const Integer &obj);
	Integer(Integer &&obj);
	int getValue()const;
	void setValue(int value);
	~Integer();
};