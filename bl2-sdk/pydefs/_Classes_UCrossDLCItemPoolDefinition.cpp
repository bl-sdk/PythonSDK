#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCrossDLCItemPoolDefinition(py::module &m)
{
    py::class_< UCrossDLCItemPoolDefinition,  UItemPoolDefinition   >(m, "UCrossDLCItemPoolDefinition")
		.def_static("StaticClass", &UCrossDLCItemPoolDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BalancedItemsMirror", &UCrossDLCItemPoolDefinition::BalancedItemsMirror)
          ;
}