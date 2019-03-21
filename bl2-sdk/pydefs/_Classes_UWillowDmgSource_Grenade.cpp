#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Grenade(py::object m)
{
    py::class_< UWillowDmgSource_Grenade,  UWillowDamageSource   >(m, "UWillowDmgSource_Grenade")
        .def("StaticClass", &UWillowDmgSource_Grenade::StaticClass, py::return_value_policy::reference)
          ;
}