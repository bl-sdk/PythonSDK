#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxRadialCustomForceField()
{
    py::class_< ANxRadialCustomForceField,  ANxRadialForceField   >("ANxRadialCustomForceField")
        .def_readwrite("SelfRotationStrength", &ANxRadialCustomForceField::SelfRotationStrength)
        .def_readwrite("Kernel", &ANxRadialCustomForceField::Kernel)
        .def("StaticClass", &ANxRadialCustomForceField::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}