#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowClientNavigationHandle(py::object m)
{
    py::class_< UWillowClientNavigationHandle,  UWillowNavigationHandle   >(m, "UWillowClientNavigationHandle")
        .def("StaticClass", &UWillowClientNavigationHandle::StaticClass, py::return_value_policy::reference)
          ;
}