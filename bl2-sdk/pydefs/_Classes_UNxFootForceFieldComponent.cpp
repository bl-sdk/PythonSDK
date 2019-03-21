#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNxFootForceFieldComponent()
{
    py::class_< UNxFootForceFieldComponent,  UNxForceFieldRadialComponent   >("UNxFootForceFieldComponent")
        .def("StaticClass", &UNxFootForceFieldComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}