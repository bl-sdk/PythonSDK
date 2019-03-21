#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UConstraintAttributeValueResolver()
{
    class_< UConstraintAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UConstraintAttributeValueResolver", no_init)
        .def_readwrite("Constraints", &UConstraintAttributeValueResolver::Constraints)
        .def("StaticClass", &UConstraintAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}