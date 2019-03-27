#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMenuItemCallback(py::module &m)
{
    py::class_< FMenuItemCallback >(m, "FMenuItemCallback")
        .def_readwrite("Tag", &FMenuItemCallback::Tag)
        .def_readwrite("OnClicked", &FMenuItemCallback::OnClicked)
  ;
}