#include "SpreadsheetImpl.h"

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

Spreadsheet::Impl::Impl(const Impl& src)
	: Impl(src.mApp, src.mWidth, src.mHeight)
{
	for(size_t i=0; i<mWidth; ++i)
		for(size_t j=0; j<mHeight; ++j)
			mCells[i][j] = src.mCells[i][j];
	
}

Spreadsheet::Impl::~Impl()
{
	for(size_t i=0; i<mWidth; ++i)
		delete[] mCells[i];
	delete[] mCells; 	
}

void Spreadsheet::Impl::swap(Impl& other) noexcept
{
	//using std::swap;

	std::swap(mWidth, other.mWidth);
	std::swap(mHeight, other.mHeight);
	std::swap(mCells, other.mCells);
}

Spreadsheet::Impl& Spreadsheet::Impl::operator=(const Impl& rhs)
{
	if(this == &rhs)
		return *this;
	
	Impl temp(rhs);		
	swap(temp);
	return *this;
}
