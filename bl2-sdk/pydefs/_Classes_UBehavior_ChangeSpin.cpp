#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeSpin()
{
    class_< UBehavior_ChangeSpin, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeSpin", no_init)
        .def_readwrite("YawRate", &UBehavior_ChangeSpin::YawRate)
        .def_readwrite("PitchRate", &UBehavior_ChangeSpin::PitchRate)
        .def_readwrite("RollRate", &UBehavior_ChangeSpin::RollRate)
        .def("StaticClass", &UBehavior_ChangeSpin::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeSpin::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}