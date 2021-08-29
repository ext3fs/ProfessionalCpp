#pragma once
#include "Spreadsheet.h"

class Spreadsheet::Impl
{
public:
	Impl(const SpreadsheetApplication& app,
			size_t width = kMaxWidth, size_t height = kMaxHeight);
	Impl(const Impl& src);
	~Impl();

	Impl& operator=(const Impl& rhs);

private:
	void swap(Impl& other) noexcept;
	
	size_t mId = 0;
	size_t mWidth = 0;
	size_t mHeight = 0;
	SpreadsheetCell** mCells = nullptr;
	const SpreadsheetApplication& mApp;
	static size_t sCounter;
};


	/*class Impl
	{
	public:
		Impl(const SpreadsheetApplication& app,
			size_t width = kMaxWidth, size_t height = kMaxHeight);
		~Impl();
		
	private:
		size_t mId = 0;
		size_t mWidth = 0;
		size_t mHeight = 0;
		SpreadsheetCell** mCells = nullptr;
		const SpreadsheetApplication& mApp;
		static size_t sCounter;
	};
	*/
