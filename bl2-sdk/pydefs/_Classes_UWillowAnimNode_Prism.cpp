#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_Prism(py::object m)
{
    py::class_< UWillowAnimNode_Prism,  UAnimNodeBlendBase   >(m, "UWillowAnimNode_Prism")
        .def_readwrite("PrismData", &UWillowAnimNode_Prism::PrismData)
        .def_readwrite("BlendTime", &UWillowAnimNode_Prism::BlendTime)
        .def_readwrite("MeshOffsetTurnThreshold", &UWillowAnimNode_Prism::MeshOffsetTurnThreshold)
        .def_readwrite("MeshOffsetTurn", &UWillowAnimNode_Prism::MeshOffsetTurn)
        .def_readwrite("PreviousGroup", &UWillowAnimNode_Prism::PreviousGroup)
        .def_readwrite("CurrentGroup", &UWillowAnimNode_Prism::CurrentGroup)
        .def_readwrite("CurrentBlendValue", &UWillowAnimNode_Prism::CurrentBlendValue)
        .def_readwrite("EditorSliderValue", &UWillowAnimNode_Prism::EditorSliderValue)
        .def("StaticClass", &UWillowAnimNode_Prism::StaticClass, py::return_value_policy::reference)
        .def("NodeIsActive", &UWillowAnimNode_Prism::NodeIsActive)
          ;
}