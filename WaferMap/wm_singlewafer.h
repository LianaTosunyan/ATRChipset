


#ifndef WM_SINGLEWAFER_H
#define WM_SINGLEWAFER_H


// Includes
#include "wm_wafermodelbase.h"


///////////////////////////////////////////////////////////////////////////////
namespace wm {
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
// class CSingleWafer
//
class CSingleWafer : public CWaferModelBase
{
	Q_DISABLE_COPY(CSingleWafer);

public:
	// Default constructor
	inline CSingleWafer();
	// Destructor
	inline ~CSingleWafer();

public:
	//
	//! Override IWaferModel interface
	//
	// Get Bin
	EDieStatus getBin( int nDieX, int nDieY, int& nBin ) const;
	// Get yield
	EDieStatus getYield( int nDieX, int nDieY, int& nYield ) const;
	// Get most frequent bin
	EDieStatus getMostFrequentBin( int nDieX, int nDieY, int& nBin, int& nPercent ) const;
	// Get bad and good die count
	EDieStatus getGroupAggregation( int nDieX, int nDieY, int& nBad, int& nGood ) const;
};
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
// Inline Implementations
//
inline CSingleWafer::CSingleWafer()
	: CWaferModelBase()
{
	
}

inline CSingleWafer::~CSingleWafer()
{

}
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
} // namespace wm
///////////////////////////////////////////////////////////////////////////////

#endif //! WM_SINGLEWAFER_H