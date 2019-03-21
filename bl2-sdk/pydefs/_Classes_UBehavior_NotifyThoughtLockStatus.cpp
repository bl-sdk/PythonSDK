#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_NotifyThoughtLockStatus()
{
    py::class_< UBehavior_NotifyThoughtLockStatus,  UBehaviorBase   >("UBehavior_NotifyThoughtLockStatus")
        .def_readwrite("InstigatingPlayer", &UBehavior_NotifyThoughtLockStatus::InstigatingPlayer)
        .def("StaticClass", &UBehavior_NotifyThoughtLockStatus::StaticClass, py::return_value_policy::reference)
        .def("eventApplyBehaviorToContext", &UBehavior_NotifyThoughtLockStatus::eventApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}