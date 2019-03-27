#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Crane(py::module &m)
{
    py::class_< UBehavior_Crane,  UBehaviorBase   >(m, "UBehavior_Crane")
		.def_static("StaticClass", &UBehavior_Crane::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Action", &UBehavior_Crane::Action)
        .def("DontDoShit", &UBehavior_Crane::DontDoShit)
        .def("FollowDummy", &UBehavior_Crane::FollowDummy)
        .def("DetachDummy", &UBehavior_Crane::DetachDummy)
        .def("AttachDummy", &UBehavior_Crane::AttachDummy)
        .def("FindDummy", &UBehavior_Crane::FindDummy)
        .def("ApplyBehaviorToContext", &UBehavior_Crane::ApplyBehaviorToContext)
          ;
}