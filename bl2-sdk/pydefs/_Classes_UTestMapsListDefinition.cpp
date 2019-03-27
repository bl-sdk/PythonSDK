#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTestMapsListDefinition(py::module &m)
{
    py::class_< UTestMapsListDefinition,  UGBXDefinition   >(m, "UTestMapsListDefinition")
		.def_static("StaticClass", &UTestMapsListDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ListItems", &UTestMapsListDefinition::ListItems)
          ;
}