#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation_Side()
{
    py::class_< UAttackLocation_Side,  UAttackLocation   >("UAttackLocation_Side")
        .def("StaticClass", &UAttackLocation_Side::StaticClass, py::return_value_policy::reference)
        .def("ValidLocation", &UAttackLocation_Side::ValidLocation)
        .staticmethod("StaticClass")
  ;
}