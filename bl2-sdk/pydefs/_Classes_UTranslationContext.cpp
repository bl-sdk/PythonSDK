#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTranslationContext(py::module &m)
{
    py::class_< UTranslationContext,  UObject   >(m, "UTranslationContext")
		.def_static("StaticClass", &UTranslationContext::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TranslatorTags", &UTranslationContext::TranslatorTags)
        .def("RegisterTranslatorTag", &UTranslationContext::RegisterTranslatorTag)
          ;
}