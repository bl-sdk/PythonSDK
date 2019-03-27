#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIConfigSectionProvider(py::module &m)
{
    py::class_< UUIConfigSectionProvider,  UUIDataProvider   >(m, "UUIConfigSectionProvider")
		.def_static("StaticClass", &UUIConfigSectionProvider::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SectionName", &UUIConfigSectionProvider::SectionName)
          ;
}