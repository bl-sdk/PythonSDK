#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SendGbxMessage(py::object m)
{
    py::class_< UBehavior_SendGbxMessage,  UBehaviorBase   >(m, "UBehavior_SendGbxMessage")
        .def_readwrite("MessageDefinition", &UBehavior_SendGbxMessage::MessageDefinition)
        .def_readwrite("AssignSenderTo", &UBehavior_SendGbxMessage::AssignSenderTo)
        .def_readwrite("AssignSubjectTo", &UBehavior_SendGbxMessage::AssignSubjectTo)
        .def_readwrite("TakeLocationFrom", &UBehavior_SendGbxMessage::TakeLocationFrom)
        .def_readwrite("MetaData", &UBehavior_SendGbxMessage::MetaData)
        .def("StaticClass", &UBehavior_SendGbxMessage::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SendGbxMessage::ApplyBehaviorToContext)
        .def("GetLocation", &UBehavior_SendGbxMessage::GetLocation)
        .def("GetMessageParameter", &UBehavior_SendGbxMessage::GetMessageParameter, py::return_value_policy::reference)
          ;
}