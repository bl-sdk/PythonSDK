#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_CustomCrate(py::object m)
{
    py::class_< UWillowDmgSource_CustomCrate,  UWillowDamageSource   >(m, "UWillowDmgSource_CustomCrate")
        .def("StaticClass", &UWillowDmgSource_CustomCrate::StaticClass, py::return_value_policy::reference)
          ;
}