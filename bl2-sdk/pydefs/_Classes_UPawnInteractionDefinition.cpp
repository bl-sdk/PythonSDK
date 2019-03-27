#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPawnInteractionDefinition(py::module &m)
{
    py::class_< UPawnInteractionDefinition,  UGBXDefinition   >(m, "UPawnInteractionDefinition")
		.def_static("StaticClass", &UPawnInteractionDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("InteractDistance", &UPawnInteractionDefinition::InteractDistance)
        .def_readwrite("TouchRadius", &UPawnInteractionDefinition::TouchRadius)
        .def_readwrite("TouchHeight", &UPawnInteractionDefinition::TouchHeight)
        .def_readwrite("OnTouch", &UPawnInteractionDefinition::OnTouch)
        .def_readwrite("OnUnTouch", &UPawnInteractionDefinition::OnUnTouch)
        .def_readwrite("OnUse", &UPawnInteractionDefinition::OnUse)
          ;
}