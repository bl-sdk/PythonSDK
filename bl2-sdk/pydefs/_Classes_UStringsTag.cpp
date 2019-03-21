#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStringsTag()
{
    py::class_< UStringsTag,  UTranslatorTag   >("UStringsTag")
        .def("StaticClass", &UStringsTag::StaticClass, py::return_value_policy::reference)
        .def("Translate", &UStringsTag::Translate)
        .staticmethod("StaticClass")
  ;
}