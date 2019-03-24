#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_NotifyThoughtLockStatus(py::module &m)
{
    py::class_< UBehavior_NotifyThoughtLockStatus,  UBehaviorBase   >(m, "UBehavior_NotifyThoughtLockStatus")
		.def_static("StaticClass", &UBehavior_NotifyThoughtLockStatus::StaticClass, py::return_value_policy::reference)
        .def_readwrite("InstigatingPlayer", &UBehavior_NotifyThoughtLockStatus::InstigatingPlayer)
        .def("eventApplyBehaviorToContext", &UBehavior_NotifyThoughtLockStatus::eventApplyBehaviorToContext)
          ;
}