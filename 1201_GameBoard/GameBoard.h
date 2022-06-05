#pragma once

#include <cstddef>
#include <vector>
#include <memory>

class GamePiece
{
public:
	virtual std::unique_ptr<GamePiece> clone() const = 0;
};

class GameBoard
{
public:
	explicit GameBoard(size_t width = kDefaultWidth, size_t height = kDefaultHeight);
	virtual ~GameBoard() = default;
	
	GameBoard(const GameBoard& src);
	GameBoard& operator=(const GameBoard& rhs);
	
	GameBoard(GameBoard&& src) = default;
	GameBoard& operator=(GameBoard&& src) = default;

	const std::unique_ptr<GamePiece>& at(size_t x, size_t y) const;
	std::unique_ptr<GamePiece>& at(size_t x, size_t y);

	size_t getHeight() const { return mHeight; }
	size_t getWidth() const { return mWidth; }

	static const size_t kDefaultWidth = 10;
	static const size_t kDefaultHeight = 10;

	friend void swap(GameBoard& first, GameBoard& second) noexcept;

private:
	void verifyCoordinate(size_t x, size_t y) const;

	std::vector<std::vector<std::unique_ptr<GamePiece>>> mCells;
	size_t mWidth, mHeight;
};
