#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_UnlockAvatarAward()
{
    class_< UBehavior_UnlockAvatarAward, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_UnlockAvatarAward", no_init)
        .def_readwrite("AvatarAward", &UBehavior_UnlockAvatarAward::AvatarAward)
        .def("StaticClass", &UBehavior_UnlockAvatarAward::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_UnlockAvatarAward::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}