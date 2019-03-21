#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_MeleeWithBlade(py::object m)
{
    py::class_< UWillowDmgSource_MeleeWithBlade,  UWillowDamageSource   >(m, "UWillowDmgSource_MeleeWithBlade")
        .def("StaticClass", &UWillowDmgSource_MeleeWithBlade::StaticClass, py::return_value_policy::reference)
          ;
}