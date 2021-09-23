#include "Spreadsheet.h"
#include "SpreadsheetImpl.h"

Spreadsheet::Spreadsheet(const SpreadsheetApplication& app, size_t width, size_t height)
{
	mImpl = std::make_unique<Impl>(app, width, height);
}

Spreadsheet::Spreadsheet(const Spreadsheet& src)
{
	mImpl = std::make_unique<Impl>(*src.mImpl);	
}

Spreadsheet::~Spreadsheet() = default;


Spreadsheet& Spreadsheet::operator=(const Spreadsheet& rhs)
{
	*mImpl = *rhs.mImpl;
	return *this;
}



/*
size_t Spreadsheet::Impl::sCounter;

Spreadsheet::Impl::Impl(const SpreadsheetApplication& app, size_t width, size_t height)
	: mId(sCounter++)
	 ,mWidth(std::min(width, Spreadsheet::kMaxWidth))
	 ,mHeight(std::min(height, Spreadsheet::kMaxHeight))
	 ,mApp(app)
{
	mCells = new SpreadsheetCell*[mWidth];
	for(size_t i=0; i<mWidth; ++i)
		mCells[i] = new SpreadsheetCell[mHeight];
}

Spreadsheet::Impl::~Impl()
{
	for(size_t i=0; i<mWidth; ++i)
		delete[] mCells[i];
	delete[] mCells; 	
}
*/
