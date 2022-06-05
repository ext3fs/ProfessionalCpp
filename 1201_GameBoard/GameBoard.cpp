#include "GameBoard.h"
#include <stdexcept>
#include <utility>

using namespace std;

GameBoard::GameBoard(size_t width, size_t height)
	: mWidth(width)
	, mHeight(height)
{
	mCells.resize(mWidth);
	for (auto& column : mCells)
		column.resize(mHeight);
}

GameBoard::GameBoard(const GameBoard& src)
	: GameBoard(src.mWidth, src.mHeight)
{
	for (size_t i = 0; i < mWidth; i++)
		for (size_t j = 0; j < mHeight; j++)
			if (src.mCells[i][j])
				mCells[i][j] = src.mCells[i][j]->clone();
}

void GameBoard::verifyCoordinate(size_t x, size_t y) const
{
	if (x >= mWidth || y >= mHeight)
		throw std::out_of_range("");
}

void swap(GameBoard& first, GameBoard& second) noexcept
{
	using std::swap;

	swap(first.mWidth, second.mWidth);
	swap(first.mHeight, second.mHeight);
	swap(first.mCells, second.mCells);
}

GameBoard& GameBoard::operator=(const GameBoard& rhs)
{
	if (this == &rhs)
		return *this;

	// 복제 후 맞바꾸기
	GameBoard temp(rhs); // 이 작업은 임시 인스턴스로 처리한다.
	swap(*this, temp);   // 예외를 발생하지 않는 연산으로만 작업을 처리한다.
	return *this;
}

const unique_ptr<GamePiece>& GameBoard::at(size_t x, size_t y) const
{
	verifyCoordinate(x, y);
	return mCells[x][y];
}

unique_ptr<GamePiece>& GameBoard::at(size_t x, size_t y)
{
	return const_cast<unique_ptr<GamePiece>&>(as_const(*this).at(x, y));
}
