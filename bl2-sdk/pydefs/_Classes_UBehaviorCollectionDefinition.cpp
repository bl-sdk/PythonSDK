#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorCollectionDefinition(py::object m)
{
    py::class_< UBehaviorCollectionDefinition,  UGBXDefinition   >(m, "UBehaviorCollectionDefinition")
        .def_readwrite("Behaviors", &UBehaviorCollectionDefinition::Behaviors)
        .def("StaticClass", &UBehaviorCollectionDefinition::StaticClass, py::return_value_policy::reference)
          ;
}