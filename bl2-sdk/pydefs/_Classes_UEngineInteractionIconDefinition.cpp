#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEngineInteractionIconDefinition(py::module &m)
{
    py::class_< UEngineInteractionIconDefinition,  UGBXDefinition   >(m, "UEngineInteractionIconDefinition")
        .def("StaticClass", &UEngineInteractionIconDefinition::StaticClass, py::return_value_policy::reference)
          ;
}