#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexStaticComponent()
{
    py::class_< UApexStaticComponent,  UApexComponentBase   >("UApexStaticComponent")
        .def("StaticClass", &UApexStaticComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}