#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIConfigSectionProvider(py::object m)
{
    py::class_< UUIConfigSectionProvider,  UUIDataProvider   >(m, "UUIConfigSectionProvider")
        .def_readwrite("SectionName", &UUIConfigSectionProvider::SectionName)
        .def("StaticClass", &UUIConfigSectionProvider::StaticClass, py::return_value_policy::reference)
          ;
}