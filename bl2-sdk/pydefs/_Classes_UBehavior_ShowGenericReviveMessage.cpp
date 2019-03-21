#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ShowGenericReviveMessage()
{
    py::class_< UBehavior_ShowGenericReviveMessage,  UBehaviorBase   >("UBehavior_ShowGenericReviveMessage")
        .def_readwrite("ReviveMessageDef", &UBehavior_ShowGenericReviveMessage::ReviveMessageDef)
        .def_readwrite("OtherPlayer", &UBehavior_ShowGenericReviveMessage::OtherPlayer)
        .def("StaticClass", &UBehavior_ShowGenericReviveMessage::StaticClass, py::return_value_policy::reference)
        .def("ResolveController", &UBehavior_ShowGenericReviveMessage::ResolveController, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ShowGenericReviveMessage::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}