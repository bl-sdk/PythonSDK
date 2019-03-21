#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIDialogBox()
{
    class_< UIDialogBox, bases< UInterface >  , boost::noncopyable>("UIDialogBox", no_init)
        .def("StaticClass", &UIDialogBox::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDisplayYesNoBox", &UIDialogBox::eventDisplayYesNoBox)
        .def("eventDisplayOkBox", &UIDialogBox::eventDisplayOkBox)
        .def("eventApplyContentChanges", &UIDialogBox::eventApplyContentChanges)
        .def("eventSetTimeout", &UIDialogBox::eventSetTimeout)
        .def("eventSetCancelButton", &UIDialogBox::eventSetCancelButton)
        .def("eventSetDefaultButton", &UIDialogBox::eventSetDefaultButton)
        .def("eventSetButtonTip", &UIDialogBox::eventSetButtonTip)
        .def("eventSetOnFinished", &UIDialogBox::eventSetOnFinished)
        .def("eventAppendButton", &UIDialogBox::eventAppendButton)
        .def("eventClearButtons", &UIDialogBox::eventClearButtons)
        .def("eventSetBody", &UIDialogBox::eventSetBody)
        .def("eventSetTitle", &UIDialogBox::eventSetTitle)
        .def("eventCloseDialog", &UIDialogBox::eventCloseDialog)
        .def("eventAutoAppendButton", &UIDialogBox::eventAutoAppendButton)
        .def("eventAutoLocEnable", &UIDialogBox::eventAutoLocEnable)
        .def("eventGetDialogResult", &UIDialogBox::eventGetDialogResult)
        .staticmethod("StaticClass")
  ;
}