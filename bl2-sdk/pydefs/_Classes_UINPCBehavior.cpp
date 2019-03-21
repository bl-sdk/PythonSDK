#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UINPCBehavior()
{
    py::class_< UINPCBehavior,  UInterface   >("UINPCBehavior")
        .def("StaticClass", &UINPCBehavior::StaticClass, py::return_value_policy::reference)
        .def("GetCurrentProjectile", &UINPCBehavior::GetCurrentProjectile, py::return_value_policy::reference)
        .def("GetGrenadeMod", &UINPCBehavior::GetGrenadeMod, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}