#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DestroyBeamsForSource()
{
    class_< UBehavior_DestroyBeamsForSource, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DestroyBeamsForSource", no_init)
        .def_readwrite("SourceContext", &UBehavior_DestroyBeamsForSource::SourceContext)
        .def_readwrite("SourceSocket", &UBehavior_DestroyBeamsForSource::SourceSocket)
        .def("StaticClass", &UBehavior_DestroyBeamsForSource::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_DestroyBeamsForSource::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}