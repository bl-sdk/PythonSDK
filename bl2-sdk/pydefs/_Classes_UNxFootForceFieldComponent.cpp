#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNxFootForceFieldComponent(py::object m)
{
    py::class_< UNxFootForceFieldComponent,  UNxForceFieldRadialComponent   >(m, "UNxFootForceFieldComponent")
        .def("StaticClass", &UNxFootForceFieldComponent::StaticClass, py::return_value_policy::reference)
          ;
}