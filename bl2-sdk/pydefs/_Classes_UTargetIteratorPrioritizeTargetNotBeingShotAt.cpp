#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeTargetNotBeingShotAt()
{
    class_< UTargetIteratorPrioritizeTargetNotBeingShotAt, bases< UTI_Prioritize >  , boost::noncopyable>("UTargetIteratorPrioritizeTargetNotBeingShotAt", no_init)
        .def("StaticClass", &UTargetIteratorPrioritizeTargetNotBeingShotAt::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}