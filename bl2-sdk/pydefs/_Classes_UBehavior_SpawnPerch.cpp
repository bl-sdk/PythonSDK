#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnPerch(py::object m)
{
    py::class_< UBehavior_SpawnPerch,  UBehaviorBase   >(m, "UBehavior_SpawnPerch")
        .def_readwrite("AttachPoint", &UBehavior_SpawnPerch::AttachPoint)
        .def_readwrite("PerchDef", &UBehavior_SpawnPerch::PerchDef)
        .def_readwrite("PerchLifetime", &UBehavior_SpawnPerch::PerchLifetime)
        .def_readwrite("UseRadius", &UBehavior_SpawnPerch::UseRadius)
        .def_readwrite("UseHeight", &UBehavior_SpawnPerch::UseHeight)
        .def("StaticClass", &UBehavior_SpawnPerch::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_SpawnPerch::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnPerch::ApplyBehaviorToContext)
          ;
}