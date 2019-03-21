#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Shield(py::object m)
{
    py::class_< UWillowDmgSource_Shield,  UWillowDamageSource   >(m, "UWillowDmgSource_Shield")
        .def("StaticClass", &UWillowDmgSource_Shield::StaticClass, py::return_value_policy::reference)
          ;
}