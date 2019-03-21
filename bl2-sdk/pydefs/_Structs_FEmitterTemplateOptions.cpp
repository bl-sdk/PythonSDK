#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEmitterTemplateOptions(py::object m)
{
    py::class_< FEmitterTemplateOptions >(m, "FEmitterTemplateOptions")
        .def_readwrite("DefaultTemplate", &FEmitterTemplateOptions::DefaultTemplate)
        .def_readwrite("CensoredTemplateAlternative", &FEmitterTemplateOptions::CensoredTemplateAlternative)
  ;
}