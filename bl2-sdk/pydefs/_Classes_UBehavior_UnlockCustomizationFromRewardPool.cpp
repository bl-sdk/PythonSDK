#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_UnlockCustomizationFromRewardPool()
{
    class_< UBehavior_UnlockCustomizationFromRewardPool, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_UnlockCustomizationFromRewardPool", no_init)
        .def_readwrite("RewardItemPool", &UBehavior_UnlockCustomizationFromRewardPool::RewardItemPool)
        .def("StaticClass", &UBehavior_UnlockCustomizationFromRewardPool::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_UnlockCustomizationFromRewardPool::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}