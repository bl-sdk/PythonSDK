#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation_Direct()
{
    py::class_< UAttackLocation_Direct,  UAttackLocation   >("UAttackLocation_Direct")
        .def("StaticClass", &UAttackLocation_Direct::StaticClass, py::return_value_policy::reference)
        .def("ValidLocation", &UAttackLocation_Direct::ValidLocation)
        .staticmethod("StaticClass")
  ;
}