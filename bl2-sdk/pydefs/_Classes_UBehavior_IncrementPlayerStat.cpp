#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_IncrementPlayerStat()
{
    class_< UBehavior_IncrementPlayerStat, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_IncrementPlayerStat", no_init)
        .def_readwrite("StatId", &UBehavior_IncrementPlayerStat::StatId)
        .def_readwrite("IncAmount", &UBehavior_IncrementPlayerStat::IncAmount)
        .def("StaticClass", &UBehavior_IncrementPlayerStat::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResolveController", &UBehavior_IncrementPlayerStat::ResolveController, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_IncrementPlayerStat::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}