#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCrossDLCItemPoolDefinition()
{
    py::class_< UCrossDLCItemPoolDefinition,  UItemPoolDefinition   >("UCrossDLCItemPoolDefinition")
        .def_readwrite("BalancedItemsMirror", &UCrossDLCItemPoolDefinition::BalancedItemsMirror)
        .def("StaticClass", &UCrossDLCItemPoolDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}