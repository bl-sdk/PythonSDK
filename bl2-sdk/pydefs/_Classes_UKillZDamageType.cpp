#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UKillZDamageType(py::object m)
{
    py::class_< UKillZDamageType,  UDamageType   >(m, "UKillZDamageType")
        .def("StaticClass", &UKillZDamageType::StaticClass, py::return_value_policy::reference)
          ;
}