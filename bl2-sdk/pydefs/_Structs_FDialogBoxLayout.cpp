#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDialogBoxLayout()
{
    class_< FDialogBoxLayout >("FDialogBoxLayout", no_init)
        .def_readwrite("LayoutTag", &FDialogBoxLayout::LayoutTag)
        .def_readwrite("CancelTag", &FDialogBoxLayout::CancelTag)
        .def_readwrite("Buttons", &FDialogBoxLayout::Buttons)
  ;
}