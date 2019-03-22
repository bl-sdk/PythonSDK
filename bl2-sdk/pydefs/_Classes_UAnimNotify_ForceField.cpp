#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_ForceField(py::module &m)
{
    py::class_< UAnimNotify_ForceField,  UAnimNotify   >(m, "UAnimNotify_ForceField")
        .def_readwrite("ForceFieldComponent", &UAnimNotify_ForceField::ForceFieldComponent)
        .def_readwrite("SocketName", &UAnimNotify_ForceField::SocketName)
        .def_readwrite("BoneName", &UAnimNotify_ForceField::BoneName)
          ;
}