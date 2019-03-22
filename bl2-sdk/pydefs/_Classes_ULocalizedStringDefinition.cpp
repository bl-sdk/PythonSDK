#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalizedStringDefinition(py::module &m)
{
    py::class_< ULocalizedStringDefinition,  UGBXDefinition   >(m, "ULocalizedStringDefinition")
        .def_readwrite("Text", &ULocalizedStringDefinition::Text)
          ;
}