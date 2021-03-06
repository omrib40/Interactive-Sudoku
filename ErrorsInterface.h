
#ifndef SUDOKU_ERRORSINTERFACE_H
#define SUDOKU_ERRORSINTERFACE_H

/**
 * ErrorsInterface Summary:
 * This module contains all program errors and messages to be printed.
 */


#define markErrorsIllegalVal        "Error: mark_errors command accepts either 0 or 1\n"
#define markErrorsIllegalMode       "Error: mark_errors command available only at solve mode\n"
#define markErrorsTooManyArguments  "Error: mark_errors command accepts only 1 argument\n"

#define printBoardIllegal           "Error: print_board does not accepts any extra parameters\n"
#define printBoardIllegalMode       "Error: print_board command available only in solve or edit mode\n"

#define editIllegal                 "Error: edit accepts either 1 argument or 0 arguments\n"

#define solveOrSaveIllegalArguments "Error: solve or save command accepts only 1 argument\n"

#define setTooManyArguments         "Error: set command accepts only 3 arguments\n"
#define setErrorArgumentOne         "Error: argument 1 needs to be a number between 1 - %d\n"
#define setErrorArgumentTwo         "Error: argument 2 needs to be a number between 1 - %d\n"
#define setErrorArgumentThree       "Error: argument 3 needs to be a number between 0 - %d\n"
#define setIllegalMode              "Error: set command available only in solve or edit mode\n"
#define setSolveModeAndFixedCell    "Error: can't update fixed cell in solve mode\n"

#define saveIllegalMode             "Error: save command available only in solve or edit mode\n"

#define validateIllegalMode         "Error: validate command available only in solve or edit mode\n"
#define validateTooManyArguments    "Error: validate command accepts 0 arguments\n"

#define guessIllegalMode            "Error: guess command available only in solve mode\n"
#define guessTooManyArguments       "Error: guess command accepts only 1 argument\n"
#define guessParamIsNotFloat        "Error: guess accepts only float argument\n"
#define guessParamInvalidRange      "Error: guess parameter needs to be floating point between 0 to 1\n"

#define generateIllegalMode         "Error: generate command available only in edit mode\n"
#define generateTooManyArguments    "Error: generate command accepts only 2 arguments\n"
#define generateErrorArgOne         "Error: argument 1 needs to be a positive number\n"
#define generateErrorArgTwo         "Error: argument 2 needs to be a non negative number\n"
#define generateBoardNotContainXEmpty "Error: the board contains %d empty cells, you asked to fill %d empty cells\n"
#define generatePuzzleError         "Error: couldn't generate a board with given inputs\n"

#define undoIllegalMode             "Error: undo command available in solve or edit mode\n"
#define undoTooManyArguments        "Error: undo command accepts 0 arguments\n"

#define redoIllegalMode             "Error: redo command available in solve or edit mode\n"
#define redoTooManyArguments        "Error: redo command accepts 0 arguments\n"

#define hintIllegalMode             "Error: hint command available only in solve mode\n"
#define hintTooManyArguments        "Error: hint command accepts 2 arguments\n"
#define hintErrorArgOne             "Error: argument 1 needs to be between 1 to %d\n"
#define hintErrorArgTwo             "Error: argument 2 needs to be between 1 to %d\n"
#define hintFixCellError            "Error: can't give hint if the cell is fixed\n"
#define hintContCellError           "Error: cell already contains value\n"
#define hintFindHintMsg             "your hint is %d\n"

#define numSolutionsIllegalMode     "Error: num_solutions command available only in solve or edit mode\n"
#define numSolutionsInvalidArgs     "Error: num_solutions accepts 0 arguments\n"
#define numSolutionsMsg             "Current board number of solutions is - %d\n"

#define autoFillIllegalMode         "Error: autofill command available only in solve mode\n"
#define autoFillInvalidArgs         "Error: autofill accepts 0 arguments\n"

#define resetIllegalMode            "Error: reset command available only in solve or edit mode\n"
#define resetInvalidArgs            "Error: reset accepts 0 arguments\n"

#define loadGameNotEnoughParams     "Error: there are not enough parameters of the game board in current file\n"
#define loadGameHasTooManyParams    "Error: there are too many parameters in the file\n"
#define loadInvalidSizeParams       "Error: invalid Sudoku size parameters\n"
#define loadFileOpenFailed          "Error: file open failed\n"
#define loadInvalidValue            "Error: One of the loaded values is invalid\n"

#define saveErrorneousBoardCantSave "Error: can't save errorneous board\n"
#define saveErrorNotSolvable        "Error: can't save unsolvable board\n"
#define saveFileError               "Error: Can't modify or save to this file\n"

#define undoEmptyError              "Error: there are no moves to undo\n"
#define redoEmptyError              "Error: there are no moves to redo\n"





/* -------------------------General Messages/Errors-------------------------------*/
#define boardSolvable       "Board is solvable\n"
#define boardNotSolvable    "Board is not solvable\n"
#define boardIsErrorneous   "Error: can't prompt this command if board has erroneous cells\n"
#define failedToAllocateMem "failed to allocate memory in %s function, exiting...\n"
#define fixedCellIsError    "can't load this game since cell (%d,%d) is fixed and is not valid at this position\n"
#define ExitingCmd          "Exiting...\n"
#define invalidCmd          "Invalid Command\n"
#define enterCmd            "Please enter a command\n"
#define welcome             "Welcome to Sudoku Game!\n"
#define inputExceedsError   "Error: the input exceeds 256 chars limit\n"
#define gameIsSolved        "Game solved successfully\n"
#define gameFullButNotSolved "The Solution of this board is erroneous\n"
#define boardAlreadySolved  "Board is Already Solved\n"
#define diffMsg             "Cell at (%d,%d) was %d, now it's %d\n"


#endif
