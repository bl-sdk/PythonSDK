#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UKillZDamageType()
{
    py::class_< UKillZDamageType,  UDamageType   >("UKillZDamageType")
        .def("StaticClass", &UKillZDamageType::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}