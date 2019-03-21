#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMorphWeightSequence()
{
    class_< UMorphWeightSequence, bases< UObject >  , boost::noncopyable>("UMorphWeightSequence", no_init)
        .def("StaticClass", &UMorphWeightSequence::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}