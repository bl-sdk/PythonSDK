#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxTrainingDialogBox(py::object m)
{
    py::class_< UWillowGFxTrainingDialogBox,  UWillowGFxDialogBox   >(m, "UWillowGFxTrainingDialogBox")
        .def_readwrite("DelayUntilShowOk", &UWillowGFxTrainingDialogBox::DelayUntilShowOk)
        .def_readwrite("StatusMenuTab", &UWillowGFxTrainingDialogBox::StatusMenuTab)
        .def("StaticClass", &UWillowGFxTrainingDialogBox::StaticClass, py::return_value_policy::reference)
        .def("OnClose", &UWillowGFxTrainingDialogBox::OnClose)
        .def("OnTick", &UWillowGFxTrainingDialogBox::OnTick)
        .def("DisplayDelayedOkBoxForTraining", &UWillowGFxTrainingDialogBox::DisplayDelayedOkBoxForTraining)
        .def("Accepted", &UWillowGFxTrainingDialogBox::Accepted)
        .def("Cancelled", &UWillowGFxTrainingDialogBox::Cancelled)
        .def("HandleInputKey", &UWillowGFxTrainingDialogBox::HandleInputKey)
        .def("eventStart", &UWillowGFxTrainingDialogBox::eventStart)
          ;
}