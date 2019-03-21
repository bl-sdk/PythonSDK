#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AIFollow()
{
    py::class_< UBehavior_AIFollow,  UBehaviorBase   >("UBehavior_AIFollow")
        .def_readwrite("ToFollow", &UBehavior_AIFollow::ToFollow)
        .def_readwrite("Action", &UBehavior_AIFollow::Action)
        .def_readwrite("Stance", &UBehavior_AIFollow::Stance)
        .def_readwrite("CatchupDistance", &UBehavior_AIFollow::CatchupDistance)
        .def_readwrite("HoldStillDistance", &UBehavior_AIFollow::HoldStillDistance)
        .def("StaticClass", &UBehavior_AIFollow::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AIFollow::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}