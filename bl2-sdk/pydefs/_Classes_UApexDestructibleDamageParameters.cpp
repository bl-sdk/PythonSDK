#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexDestructibleDamageParameters()
{
    py::class_< UApexDestructibleDamageParameters,  UObject   >("UApexDestructibleDamageParameters")
        .def_readwrite("DamageMap", &UApexDestructibleDamageParameters::DamageMap)
        .def("StaticClass", &UApexDestructibleDamageParameters::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}