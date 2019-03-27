#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDialogBox(py::module &m)
{
    py::class_< UIDialogBox,  UInterface   >(m, "UIDialogBox")
		.def_static("StaticClass", &UIDialogBox::StaticClass, py::return_value_policy::reference)
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
          ;
}