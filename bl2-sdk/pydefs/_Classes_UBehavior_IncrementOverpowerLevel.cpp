#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_IncrementOverpowerLevel()
{
    class_< UBehavior_IncrementOverpowerLevel, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_IncrementOverpowerLevel", no_init)
        .def_readwrite("NumLevelsToAward", &UBehavior_IncrementOverpowerLevel::NumLevelsToAward)
        .def("StaticClass", &UBehavior_IncrementOverpowerLevel::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_IncrementOverpowerLevel::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}