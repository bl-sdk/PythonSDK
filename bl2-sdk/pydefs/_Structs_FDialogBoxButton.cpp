#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDialogBoxButton()
{
    class_< FDialogBoxButton >("FDialogBoxButton", no_init)
        .def_readwrite("Caption", &FDialogBoxButton::Caption)
        .def_readwrite("TipText", &FDialogBoxButton::TipText)
        .def_readwrite("Tag", &FDialogBoxButton::Tag)
        .def_readwrite("Keys", &FDialogBoxButton::Keys)
        .def_readwrite("OnButtonClicked", &FDialogBoxButton::OnButtonClicked)
  ;
}