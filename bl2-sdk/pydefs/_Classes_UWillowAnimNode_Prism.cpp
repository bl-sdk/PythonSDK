#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_Prism()
{
    class_< UWillowAnimNode_Prism, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UWillowAnimNode_Prism", no_init)
        .def_readwrite("PrismData", &UWillowAnimNode_Prism::PrismData)
        .def_readwrite("BlendTime", &UWillowAnimNode_Prism::BlendTime)
        .def_readwrite("MeshOffsetTurnThreshold", &UWillowAnimNode_Prism::MeshOffsetTurnThreshold)
        .def_readwrite("MeshOffsetTurn", &UWillowAnimNode_Prism::MeshOffsetTurn)
        .def_readwrite("PreviousGroup", &UWillowAnimNode_Prism::PreviousGroup)
        .def_readwrite("CurrentGroup", &UWillowAnimNode_Prism::CurrentGroup)
        .def_readwrite("CurrentBlendValue", &UWillowAnimNode_Prism::CurrentBlendValue)
        .def_readwrite("EditorSliderValue", &UWillowAnimNode_Prism::EditorSliderValue)
        .def("StaticClass", &UWillowAnimNode_Prism::StaticClass, return_value_policy< reference_existing_object >())
        .def("NodeIsActive", &UWillowAnimNode_Prism::NodeIsActive)
        .staticmethod("StaticClass")
  ;
}