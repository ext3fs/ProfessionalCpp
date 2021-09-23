#include "SpreadsheetCell.h"

SpreadsheetCell::SpreadsheetCell(double val)
	: mValue(val)
{
}

void SpreadsheetCell::set(double val)
{
	mValue = val;
}

double SpreadsheetCell::getValue() const
{
	mNumAccesses++;
	return mValue;
}

