#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDamageAdjuster()
{
    py::class_< UDamageAdjuster,  UObject   >("UDamageAdjuster")
        .def("StaticClass", &UDamageAdjuster::StaticClass, py::return_value_policy::reference)
        .def("AdjustDamage", &UDamageAdjuster::AdjustDamage)
        .staticmethod("StaticClass")
  ;
}