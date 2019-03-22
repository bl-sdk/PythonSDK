#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation_Range(py::module &m)
{
    py::class_< UAttackLocation_Range,  UAttackLocation   >(m, "UAttackLocation_Range")
        .def_readwrite("Range", &UAttackLocation_Range::Range)
        .def("StaticClass", &UAttackLocation_Range::StaticClass, py::return_value_policy::reference)
        .def("ValidLocation", &UAttackLocation_Range::ValidLocation)
        .def("CanPath", &UAttackLocation_Range::CanPath)
          ;
}