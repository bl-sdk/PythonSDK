#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIConfigSectionProvider(py::module &m)
{
    py::class_< UUIConfigSectionProvider,  UUIDataProvider   >(m, "UUIConfigSectionProvider")
        .def_readwrite("SectionName", &UUIConfigSectionProvider::SectionName)
          ;
}