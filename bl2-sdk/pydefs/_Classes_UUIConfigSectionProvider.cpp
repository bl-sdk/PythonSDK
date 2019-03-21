#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIConfigSectionProvider()
{
    py::class_< UUIConfigSectionProvider,  UUIDataProvider   >("UUIConfigSectionProvider")
        .def_readwrite("SectionName", &UUIConfigSectionProvider::SectionName)
        .def("StaticClass", &UUIConfigSectionProvider::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}