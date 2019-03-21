#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAchievementUtility()
{
    class_< UAchievementUtility, bases< UObject >  , boost::noncopyable>("UAchievementUtility", no_init)
        .def("StaticClass", &UAchievementUtility::StaticClass, return_value_policy< reference_existing_object >())
        .def("ShouldUnlockAchievementFromUnlockType", &UAchievementUtility::ShouldUnlockAchievementFromUnlockType)
        .staticmethod("StaticClass")
  ;
}