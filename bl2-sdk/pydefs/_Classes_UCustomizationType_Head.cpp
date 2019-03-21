#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationType_Head()
{
    py::class_< UCustomizationType_Head,  UCustomizationType   >("UCustomizationType_Head")
        .def("StaticClass", &UCustomizationType_Head::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}