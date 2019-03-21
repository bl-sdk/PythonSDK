#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMenuItemCallback()
{
    py::class_< FMenuItemCallback >("FMenuItemCallback")
        .def_readwrite("Tag", &FMenuItemCallback::Tag)
        .def_readwrite("OnClicked", &FMenuItemCallback::OnClicked)
  ;
}