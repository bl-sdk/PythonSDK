#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIBehaviorConsumer()
{
    class_< UIBehaviorConsumer, bases< UInterface >  , boost::noncopyable>("UIBehaviorConsumer", no_init)
        .def("StaticClass", &UIBehaviorConsumer::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetBehaviorConsumerHandle", &UIBehaviorConsumer::GetBehaviorConsumerHandle)
        .staticmethod("StaticClass")
  ;
}