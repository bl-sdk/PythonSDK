#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UnlockAvatarAward(py::module &m)
{
    py::class_< UBehavior_UnlockAvatarAward,  UBehaviorBase   >(m, "UBehavior_UnlockAvatarAward")
		.def_static("StaticClass", &UBehavior_UnlockAvatarAward::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AvatarAward", &UBehavior_UnlockAvatarAward::AvatarAward)
        .def("ApplyBehaviorToContext", &UBehavior_UnlockAvatarAward::ApplyBehaviorToContext)
          ;
}