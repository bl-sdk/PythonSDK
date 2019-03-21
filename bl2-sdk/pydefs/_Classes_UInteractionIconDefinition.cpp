#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInteractionIconDefinition()
{
    py::class_< UInteractionIconDefinition,  UEngineInteractionIconDefinition   >("UInteractionIconDefinition")
        .def_readwrite("Icon", &UInteractionIconDefinition::Icon)
        .def_readwrite("Action", &UInteractionIconDefinition::Action)
        .def_readwrite("Text", &UInteractionIconDefinition::Text)
        .def("StaticClass", &UInteractionIconDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}