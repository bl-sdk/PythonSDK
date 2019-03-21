#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGFxTrainingDialogBox()
{
    class_< UWillowGFxTrainingDialogBox, bases< UWillowGFxDialogBox >  , boost::noncopyable>("UWillowGFxTrainingDialogBox", no_init)
        .def_readwrite("DelayUntilShowOk", &UWillowGFxTrainingDialogBox::DelayUntilShowOk)
        .def_readwrite("StatusMenuTab", &UWillowGFxTrainingDialogBox::StatusMenuTab)
        .def("StaticClass", &UWillowGFxTrainingDialogBox::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnClose", &UWillowGFxTrainingDialogBox::OnClose)
        .def("OnTick", &UWillowGFxTrainingDialogBox::OnTick)
        .def("DisplayDelayedOkBoxForTraining", &UWillowGFxTrainingDialogBox::DisplayDelayedOkBoxForTraining)
        .def("Accepted", &UWillowGFxTrainingDialogBox::Accepted)
        .def("Cancelled", &UWillowGFxTrainingDialogBox::Cancelled)
        .def("HandleInputKey", &UWillowGFxTrainingDialogBox::HandleInputKey)
        .def("eventStart", &UWillowGFxTrainingDialogBox::eventStart)
        .staticmethod("StaticClass")
  ;
}