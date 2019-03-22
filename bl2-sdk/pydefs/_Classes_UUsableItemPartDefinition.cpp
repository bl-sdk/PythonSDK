#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUsableItemPartDefinition(py::module &m)
{
    py::class_< UUsableItemPartDefinition,  UItemPartDefinition   >(m, "UUsableItemPartDefinition")
        .def("OnUsed", &UUsableItemPartDefinition::OnUsed)
          ;
}