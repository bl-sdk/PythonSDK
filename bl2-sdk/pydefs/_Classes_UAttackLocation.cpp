#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation(py::object m)
{
    py::class_< UAttackLocation,  UObject   >(m, "UAttackLocation")
        .def("StaticClass", &UAttackLocation::StaticClass, py::return_value_policy::reference)
        .def("ValidLocation", &UAttackLocation::ValidLocation)
        .def("IsRunning", &UAttackLocation::IsRunning)
        .def("CanPath", &UAttackLocation::CanPath)
          ;
}