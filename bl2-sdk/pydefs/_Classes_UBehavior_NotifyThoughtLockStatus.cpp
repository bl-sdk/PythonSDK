#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_NotifyThoughtLockStatus()
{
    class_< UBehavior_NotifyThoughtLockStatus, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_NotifyThoughtLockStatus", no_init)
        .def_readwrite("InstigatingPlayer", &UBehavior_NotifyThoughtLockStatus::InstigatingPlayer)
        .def("StaticClass", &UBehavior_NotifyThoughtLockStatus::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventApplyBehaviorToContext", &UBehavior_NotifyThoughtLockStatus::eventApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}