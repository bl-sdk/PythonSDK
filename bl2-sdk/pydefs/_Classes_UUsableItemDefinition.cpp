#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUsableItemDefinition(py::module &m)
{
    py::class_< UUsableItemDefinition,  UItemDefinition   >(m, "UUsableItemDefinition")
		.def_static("StaticClass", &UUsableItemDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("UsedStatId", &UUsableItemDefinition::UsedStatId)
        .def("OnUsed", &UUsableItemDefinition::OnUsed)
          ;
}