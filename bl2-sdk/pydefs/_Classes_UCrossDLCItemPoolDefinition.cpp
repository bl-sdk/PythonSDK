#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCrossDLCItemPoolDefinition(py::module &m)
{
    py::class_< UCrossDLCItemPoolDefinition,  UItemPoolDefinition   >(m, "UCrossDLCItemPoolDefinition")
        .def_readwrite("BalancedItemsMirror", &UCrossDLCItemPoolDefinition::BalancedItemsMirror)
          ;
}