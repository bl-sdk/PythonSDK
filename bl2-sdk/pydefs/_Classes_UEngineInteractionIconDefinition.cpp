#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEngineInteractionIconDefinition()
{
    py::class_< UEngineInteractionIconDefinition,  UGBXDefinition   >("UEngineInteractionIconDefinition")
        .def("StaticClass", &UEngineInteractionIconDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}