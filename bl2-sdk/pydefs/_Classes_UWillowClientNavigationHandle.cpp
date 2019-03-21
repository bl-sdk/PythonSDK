#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowClientNavigationHandle()
{
    py::class_< UWillowClientNavigationHandle,  UWillowNavigationHandle   >("UWillowClientNavigationHandle")
        .def("StaticClass", &UWillowClientNavigationHandle::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}