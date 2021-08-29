#pragma once
#include <cstddef>

class SpreadsheetCell
{
public:
	SpreadsheetCell() = default;
	SpreadsheetCell(double val);

	void set(double val);
	double getValue() const;

private:
	double mValue = 0;
	mutable size_t mNumAccesses = 0;
};
