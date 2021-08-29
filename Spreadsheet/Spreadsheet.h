#pragma once
#include <memory>
#include "SpreadsheetCell.h"

class SpreadsheetApplication;

class Spreadsheet
{
public:
	Spreadsheet(const SpreadsheetApplication& app,
		size_t width = kMaxWidth, size_t height = kMaxHeight);
	Spreadsheet(const Spreadsheet& src);
	~Spreadsheet();

	Spreadsheet& operator=(const Spreadsheet& rhs);

	static const size_t kMaxWidth = 10; 
	static const size_t kMaxHeight = 10;

private:
	/*class Impl
	{
	public:
		Impl(const SpreadsheetApplication& app,
			size_t width, size_t height);
		~Impl();
		
	private:
		size_t mId = 0;
		size_t mWidth = 0;
		size_t mHeight = 0;
		SpreadsheetCell** mCells = nullptr;
		const SpreadsheetApplication& mApp;
		static size_t sCounter;
	};*/
	class Impl;
	std::unique_ptr<Impl> mImpl;
};
