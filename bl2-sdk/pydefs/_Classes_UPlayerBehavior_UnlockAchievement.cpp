#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_UnlockAchievement()
{
    class_< UPlayerBehavior_UnlockAchievement, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_UnlockAchievement", no_init)
        .def_readwrite("Achievement", &UPlayerBehavior_UnlockAchievement::Achievement)
        .def("StaticClass", &UPlayerBehavior_UnlockAchievement::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_UnlockAchievement::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}