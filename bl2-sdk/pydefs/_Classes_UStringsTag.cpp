#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStringsTag(py::module &m)
{
    py::class_< UStringsTag,  UTranslatorTag   >(m, "UStringsTag")
        .def("Translate", &UStringsTag::Translate)
          ;
}