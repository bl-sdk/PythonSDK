#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTextMarkupDictionary(py::module &m)
{
    py::class_< UTextMarkupDictionary,  UGBXDefinition   >(m, "UTextMarkupDictionary")
        .def_readwrite("Dictionary", &UTextMarkupDictionary::Dictionary)
        .def("StaticClass", &UTextMarkupDictionary::StaticClass, py::return_value_policy::reference)
        .def("ResolveCustomMarkupString", &UTextMarkupDictionary::ResolveCustomMarkupString)
          ;
}