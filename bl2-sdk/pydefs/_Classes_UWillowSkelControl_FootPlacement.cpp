#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_FootPlacement()
{
    class_< UWillowSkelControl_FootPlacement, bases< USkelControlFootPlacement >  , boost::noncopyable>("UWillowSkelControl_FootPlacement", no_init)
        .def_readwrite("LastOffset", &UWillowSkelControl_FootPlacement::LastOffset)
        .def_readwrite("CachedFloor", &UWillowSkelControl_FootPlacement::CachedFloor)
        .def_readwrite("CachedPawn", &UWillowSkelControl_FootPlacement::CachedPawn)
        .def_readwrite("InterpSpeed", &UWillowSkelControl_FootPlacement::InterpSpeed)
        .def_readwrite("ExpensiveDistanceFactor", &UWillowSkelControl_FootPlacement::ExpensiveDistanceFactor)
        .def("StaticClass", &UWillowSkelControl_FootPlacement::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}