#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_GetPlayerStat()
{
    class_< UBehavior_GetPlayerStat, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_GetPlayerStat", no_init)
        .def_readwrite("StatId", &UBehavior_GetPlayerStat::StatId)
        .def("StaticClass", &UBehavior_GetPlayerStat::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_GetPlayerStat::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetPlayerStat::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}