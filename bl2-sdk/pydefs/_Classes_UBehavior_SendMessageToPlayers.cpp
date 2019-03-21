#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SendMessageToPlayers(py::object m)
{
    py::class_< UBehavior_SendMessageToPlayers,  UBehaviorBase   >(m, "UBehavior_SendMessageToPlayers")
        .def_readwrite("SendMsgClass", &UBehavior_SendMessageToPlayers::SendMsgClass)
        .def("StaticClass", &UBehavior_SendMessageToPlayers::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SendMessageToPlayers::ApplyBehaviorToContext)
          ;
}