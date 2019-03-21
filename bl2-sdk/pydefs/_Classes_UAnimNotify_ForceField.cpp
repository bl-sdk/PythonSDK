#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_ForceField()
{
    py::class_< UAnimNotify_ForceField,  UAnimNotify   >("UAnimNotify_ForceField")
        .def_readwrite("ForceFieldComponent", &UAnimNotify_ForceField::ForceFieldComponent)
        .def_readwrite("SocketName", &UAnimNotify_ForceField::SocketName)
        .def_readwrite("BoneName", &UAnimNotify_ForceField::BoneName)
        .def("StaticClass", &UAnimNotify_ForceField::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}