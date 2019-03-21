#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USequenceEventCustomEnableCondition()
{
    class_< USequenceEventCustomEnableCondition, bases< UObject >  , boost::noncopyable>("USequenceEventCustomEnableCondition", no_init)
        .def("StaticClass", &USequenceEventCustomEnableCondition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}