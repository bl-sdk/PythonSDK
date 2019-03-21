#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayThroughCountAttributeValueResolver()
{
    class_< UPlayThroughCountAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UPlayThroughCountAttributeValueResolver", no_init)
        .def_readwrite("IncludePlaythroughThree", &UPlayThroughCountAttributeValueResolver::IncludePlaythroughThree)
        .def("StaticClass", &UPlayThroughCountAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}