#ifndef __SquiddioPrefsDialog__
#define __SquiddioPrefsDialog__

/**
@file
Subclass of SquiddioPrefsDialogBase, which is generated by wxFormBuilder.
*/

#include "squiddioPrefsDialogBase.h"
#include <wx/msgdlg.h>

//// end generated include

/** Implementing SquiddioPrefsDialogBase */
class SquiddioPrefsDialog : public SquiddioPrefsDialogBase
{
	protected:
    public:

		// Handlers for SquiddioPrefsDialogBase events.
		void OnCheckBoxAll( wxCommandEvent& event );
		void LaunchHelpPage( wxCommandEvent& event );

		/** Constructor */
		SquiddioPrefsDialog( wxWindow* parent );
	//// end generated class members




};

#endif // __SquiddioPrefsDialog__