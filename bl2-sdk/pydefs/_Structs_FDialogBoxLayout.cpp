#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDialogBoxLayout()
{
    py::class_< FDialogBoxLayout >("FDialogBoxLayout")
        .def_readwrite("LayoutTag", &FDialogBoxLayout::LayoutTag)
        .def_readwrite("CancelTag", &FDialogBoxLayout::CancelTag)
        .def_readwrite("Buttons", &FDialogBoxLayout::Buttons)
  ;
}