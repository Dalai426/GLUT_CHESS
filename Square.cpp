
#include <cstddef>

#include "Square.h"

/**
neg nvdiig ilerhiilne */
Square::Square()
{
	occupyingPiece = NULL;
}

Square::Square(const Square& square)
{
	this->occupyingPiece = square.occupyingPiece;
}

bool Square::occupiedState()
{
	return occupyingPiece==NULL? false : true;
}

bool Square::occupySquare(Piece* piece)
{
    // yamar neg element baival false bucaana
	if(occupiedState()){
            return false;
	}
	// element bhgv bol tuhain elemntee onoono
	else occupyingPiece = piece;
	return true;
}

Piece* Square::removeOccupyingPiece()
{
    // square deer baigaa shatriig ustgana
	Piece* removed = occupyingPiece;
	occupyingPiece = NULL;
	return removed;
}

Piece* Square::getOccupyingPiece()
{
    // nvd deer baigaa shatariiig bucaana
	return occupyingPiece;
}
