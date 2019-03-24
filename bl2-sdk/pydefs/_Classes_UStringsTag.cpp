#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStringsTag(py::module &m)
{
    py::class_< UStringsTag,  UTranslatorTag   >(m, "UStringsTag")
		.def_static("StaticClass", &UStringsTag::StaticClass, py::return_value_policy::reference)
        .def("Translate", &UStringsTag::Translate)
          ;
}