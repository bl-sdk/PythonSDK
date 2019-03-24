#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_LeaderCommand(py::module &m)
{
    py::class_< UBehavior_LeaderCommand,  UBehaviorBase   >(m, "UBehavior_LeaderCommand")
		.def_static("StaticClass", &UBehavior_LeaderCommand::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Type", &UBehavior_LeaderCommand::Type)
        .def_readwrite("Action", &UBehavior_LeaderCommand::Action)
        .def("ApplyBehaviorToContext", &UBehavior_LeaderCommand::ApplyBehaviorToContext)
          ;
}