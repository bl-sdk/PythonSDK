#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ShowGenericReviveMessage(py::module &m)
{
    py::class_< UBehavior_ShowGenericReviveMessage,  UBehaviorBase   >(m, "UBehavior_ShowGenericReviveMessage")
		.def_static("StaticClass", &UBehavior_ShowGenericReviveMessage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ReviveMessageDef", &UBehavior_ShowGenericReviveMessage::ReviveMessageDef)
        .def_readwrite("OtherPlayer", &UBehavior_ShowGenericReviveMessage::OtherPlayer)
        .def("ResolveController", &UBehavior_ShowGenericReviveMessage::ResolveController, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ShowGenericReviveMessage::ApplyBehaviorToContext)
          ;
}