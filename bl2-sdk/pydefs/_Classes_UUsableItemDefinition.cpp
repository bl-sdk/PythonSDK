#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUsableItemDefinition(py::module &m)
{
    py::class_< UUsableItemDefinition,  UItemDefinition   >(m, "UUsableItemDefinition")
        .def_readwrite("UsedStatId", &UUsableItemDefinition::UsedStatId)
        .def("OnUsed", &UUsableItemDefinition::OnUsed)
          ;
}