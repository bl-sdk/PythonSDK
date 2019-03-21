#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeSpin()
{
    py::class_< UBehavior_ChangeSpin,  UBehaviorBase   >("UBehavior_ChangeSpin")
        .def_readwrite("YawRate", &UBehavior_ChangeSpin::YawRate)
        .def_readwrite("PitchRate", &UBehavior_ChangeSpin::PitchRate)
        .def_readwrite("RollRate", &UBehavior_ChangeSpin::RollRate)
        .def("StaticClass", &UBehavior_ChangeSpin::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeSpin::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}