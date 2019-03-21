#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxBuddyPlane()
{
    py::class_< UWillowGFxBuddyPlane,  UWillowGFxMovie   >("UWillowGFxBuddyPlane")
        .def("StaticClass", &UWillowGFxBuddyPlane::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}