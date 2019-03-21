#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_UnlockAchievement()
{
    py::class_< UPlayerBehavior_UnlockAchievement,  UPlayerBehaviorBase   >("UPlayerBehavior_UnlockAchievement")
        .def_readwrite("Achievement", &UPlayerBehavior_UnlockAchievement::Achievement)
        .def("StaticClass", &UPlayerBehavior_UnlockAchievement::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_UnlockAchievement::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}