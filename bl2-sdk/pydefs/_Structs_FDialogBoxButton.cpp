#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDialogBoxButton()
{
    py::class_< FDialogBoxButton >("FDialogBoxButton")
        .def_readwrite("Caption", &FDialogBoxButton::Caption)
        .def_readwrite("TipText", &FDialogBoxButton::TipText)
        .def_readwrite("Tag", &FDialogBoxButton::Tag)
        .def_readwrite("Keys", &FDialogBoxButton::Keys)
        .def_readwrite("OnButtonClicked", &FDialogBoxButton::OnButtonClicked)
  ;
}