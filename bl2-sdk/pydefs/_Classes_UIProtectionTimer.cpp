#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIProtectionTimer()
{
    class_< UIProtectionTimer, bases< UInterface >  , boost::noncopyable>("UIProtectionTimer", no_init)
        .def("StaticClass", &UIProtectionTimer::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetMinimumHealthMaintainedByProtectionTimer", &UIProtectionTimer::GetMinimumHealthMaintainedByProtectionTimer)
        .def("EnableProtectionTimer", &UIProtectionTimer::EnableProtectionTimer)
        .def("IsProtectionTimerActive", &UIProtectionTimer::IsProtectionTimerActive)
        .staticmethod("StaticClass")
  ;
}