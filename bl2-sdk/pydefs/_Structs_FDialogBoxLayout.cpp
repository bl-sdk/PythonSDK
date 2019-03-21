#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDialogBoxLayout(py::object m)
{
    py::class_< FDialogBoxLayout >(m, "FDialogBoxLayout")
        .def_readwrite("LayoutTag", &FDialogBoxLayout::LayoutTag)
        .def_readwrite("CancelTag", &FDialogBoxLayout::CancelTag)
        .def_readwrite("Buttons", &FDialogBoxLayout::Buttons)
  ;
}