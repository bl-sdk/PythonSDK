#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation_ParentDistance()
{
    py::class_< UAttackLocation_ParentDistance,  UAttackLocation   >("UAttackLocation_ParentDistance")
        .def_readwrite("Restriction", &UAttackLocation_ParentDistance::Restriction)
        .def_readwrite("Distance", &UAttackLocation_ParentDistance::Distance)
        .def("StaticClass", &UAttackLocation_ParentDistance::StaticClass, py::return_value_policy::reference)
        .def("ValidLocation", &UAttackLocation_ParentDistance::ValidLocation)
        .staticmethod("StaticClass")
  ;
}