#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorCollectionDefinition(py::module &m)
{
    py::class_< UBehaviorCollectionDefinition,  UGBXDefinition   >(m, "UBehaviorCollectionDefinition")
        .def_readwrite("Behaviors", &UBehaviorCollectionDefinition::Behaviors)
          ;
}