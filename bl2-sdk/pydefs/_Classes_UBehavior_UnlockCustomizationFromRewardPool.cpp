#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UnlockCustomizationFromRewardPool()
{
    py::class_< UBehavior_UnlockCustomizationFromRewardPool,  UBehaviorBase   >("UBehavior_UnlockCustomizationFromRewardPool")
        .def_readwrite("RewardItemPool", &UBehavior_UnlockCustomizationFromRewardPool::RewardItemPool)
        .def("StaticClass", &UBehavior_UnlockCustomizationFromRewardPool::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_UnlockCustomizationFromRewardPool::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}